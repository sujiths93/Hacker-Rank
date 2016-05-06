def FUN(value):
    count=0
    a=list(value)
    b=list(value)
    b.reverse()
    for i in range(0,len(a)):
        count+=abs(ord(a[i])-ord(b[i]))
    return int(count/2)

n=int(input())
str={}
for i in range(n):
    s=input()
    str[i]=s
result=[]
for keys,value in str.items():
    result.append(FUN(value))

for i in result:
    print(i)
    