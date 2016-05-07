def Funny(value):
    value=list(value)
    j=len(value)-1
    for i in range(1,len(value)):
        if abs(ord(value[i])-ord(value[i-1]))!=abs(ord(value[j])-ord(value[j-1])):
            print("Not funny")
            return
        else:
            j-=1
    print("Funny")

n=int(input())
dic={}
for i in range(n):
    dic[i]=input()

for keys,values in dic.items():
    Funny(values)






