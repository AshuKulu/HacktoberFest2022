from tkinter import *
root = Tk()


#text input area
e=Entry(root, width=40,border=5)
e.grid(row=0,column=0,columnspan=3,padx=30) #columnspace to add some space,pad(x or y) is gap brdween grids

list_of_numbers=[]

#function to get number
def number_input(number):
    current_value=e.get()
    e.delete(0, END)
    e.insert(0, str(current_value)+str(number))

def clear_value():
    list_of_numbers.clear()
    e.delete(0,END)



def sum_of_value():
    num1=e.get()
    list_of_numbers.append(num1)
    e.delete(0,END)

def equals():
    num1 = e.get()
    list_of_numbers.append(int(num1))
    e.delete(0, END)

    SUM = 0
    for values in list_of_numbers:
        SUM += int(values)

    e.insert(0,str(SUM))



#button 9-0,add button,equals

button9=Button(root,text="9",padx=40,pady=20,command=lambda : number_input(9))
button9.grid(row=1 ,column=0)
button8=Button(root,text="8",padx=40,pady=20,command=lambda : number_input(8))
button8.grid(row=1 ,column=1)
button7=Button(root,text="7",padx=40,pady=20,command=lambda : number_input(7))
button7.grid(row=1 ,column=2)

button6=Button(root,text="6",padx=40,pady=20,command=lambda : number_input(6))
button6.grid(row=2 ,column=0)
button5=Button(root,text="5",padx=40,pady=20,command=lambda : number_input(5))
button5.grid(row=2 ,column=1)
button4=Button(root,text="4",padx=40,pady=20,command=lambda : number_input(4))
button4.grid(row=2 ,column=2)

button3=Button(root,text="3",padx=40,pady=20,command=lambda : number_input(3)) #lambda function to pass any value or argument
button3.grid(row=3 ,column=0)
button2=Button(root,text="2",padx=40,pady=20,command=lambda : number_input(2))
button2.grid(row=3,column=1)
button1=Button(root,text="1",padx=40,pady=20,command=lambda : number_input(1))
button1.grid(row=3,column=2)

button0=Button(root,text="0",padx=40,pady=20,command=lambda : number_input(0))
button0.grid(row=4,column=0)

button_add=Button(root,text="+",padx=40,pady=20,command=sum_of_value)
button_add.grid(row=4 ,column=1)
button_clear=Button(root,text="C",padx=40,pady=20,command=clear_value)
button_clear.grid(row=4 ,column=2)
button_equals=Button(root,text="=",padx=40,pady=20,command=equals)
button_equals.grid(row=5 ,column=2)

root.mainloop()
