a=int(input("Enter number: "))
k=0
for i in range(2,a):
    if(a%i==0):
        k=k+1
if(k<=0):
    print("It  is prime number")
else:
    print("It not a prime number")
