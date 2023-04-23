def ispal(string):
    revstr=string[::-1]
    if string==revstr:
        print("the string is palindrome")
    else:
        print("the sting is not a palindrome")

string=input("enter the string to be checked")
ispal(string)
