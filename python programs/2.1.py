def factorial(x):
    fact = 1
    for i in range(1,x+1):
        fact = fact * i
    return fact
n = int(input("Enter n value: "))
r = int(input("ENter r value: "))
if r==1:
    ncr=n
    npr=n    
else:    
    ncr = factorial(n)/(factorial(r)*factorial(n-r))
    npr = factorial(n)/factorial(n-r)
print("Answer for npr is: ",npr)
print("Answer for ncr is: ",ncr)
