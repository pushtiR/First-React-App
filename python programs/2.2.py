def isprime(n):
    if not n==0 or n==1:
        if not n==2:
          for i in range(2,n):
           if n%i==0:
            return 0
        else:
            return 1
        

number=int(input("enter the number"))
answer=isprime(number)
if answer==1:
           print("the number is prime")
elif answer==0:
           print("the number is not prime")
           
else:
           print("the number is neither prime nor composite")
