import random
import time

# t=["Paper", "Rock", "Scissor"]

w=input("enter your name- ")
print("")
time.sleep(2)
print(f"welcome {w}")
print("")

def thy(a):
    if a=="p":
        b="Paper"
        return b
    elif a=="r":
        b="Rock"
        return b
    elif a=="s":
        b="Scissor"
        return b
    else:
        return "Abe Saaley!"

cm=0
pn=0

while pn<=5 or cm<=5:
    t = ["Paper", "Rock", "Scissor"]
    m=random.choice(t)
    print("-------------------------")
    h=input("enter a your choice- ")
    p=thy(h)
    print("")
    print("-------------------------")
    print(m, "//", p)
    time.sleep(2)
    if m=="Scissor" and p=="Paper":
        # print(m, "//", p)
        print("scissor will cut paper")
        print("")
        print("computer gets point")
        cm+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Scissor" and p=="Scissor":
        print("nothing will happen")
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Scissor" and p=="Rock":
        print("rock will break scissor")
        print("")
        print(f"{w} gets a point")
        pn+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Paper" and p=="Paper":
        print("nothing will happen")
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Paper" and p=="Scissor":
        print("scissor cuts paper")
        print("")
        print(f"{w} gets a point")
        pn+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Paper" and p=="Rock":
        print("paper captures rock")
        print("")
        print("computer gets a point")
        cm+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Rock" and p=="Paper":
        print("paper captures rock")
        print("")
        print(f"{w} gets a point")
        pn+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Rock" and p=="Scissor":
        print("rock breaks scissor")
        print("")
        print("computer gets a point")
        cm+=1
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)
    elif m=="Rock" and p=="Rock":
        print("nothing will happen")
        print("-------------------------")
        time.sleep(2)
        print(f"{w}, your points are {pn}")
        print(f"computers points are {cm}")
        time.sleep(2)

    if cm==5:
        time.sleep(4)
        print("-------------------------")
        print("Computer wins match")
        break
    elif pn==5:
        time.sleep(4)
        print("-------------------------")
        print(f"{w} wins the match")
        break

