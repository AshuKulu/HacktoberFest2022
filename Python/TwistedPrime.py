# -------Twisted Prime---------
# Prime numbers which when reversed are also prime are called Twisted prime numbers.


def checkprime(n):
    for i in range(2,int(n//2)):
        if n%i==0:
            return False
    return True
    
n=int(input("Enter the number to be checked: "))
temp=n
rev=0
while(n!=0):
    d=n%10
    rev=rev+(d*10)
    n=n/10
if checkprime(temp) and checkprime(rev):
    print("Twisted Prime")
else:
    print("Not Twisted Prime")