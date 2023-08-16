'''a=input("enter space separated values = ")
b=[int(x) for x in a.split(' ')]
#b=list(b)
b=sorted(b)
print(b)

a=1
for i in range(1,6):
    print(str(a)*i)
    a=a+1
    print() '''
n=1234
s=0
r=0
while (n>0):
    r=n%10
    s=s*10+r
    n=n//10
print(s)
