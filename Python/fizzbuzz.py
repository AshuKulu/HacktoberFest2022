
def fizzbuzz():
    for i in range(1,31):
            if(i%15==0):
                print(str(i) + " = FizzBuzz")
            elif(i%3==0):
                print(str(i) + " = Fizz")
            elif(i%5==0):
                print(str(i) + " = Buzz")
            else:
                print(i)
            
