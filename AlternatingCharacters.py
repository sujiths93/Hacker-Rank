from collections import OrderedDict
#number of strings
str=OrderedDict()
n=int(input())
for i in range(n):
    s=input()
    str[i]=s
result=[]
for keys,values in str.items():
    count=0
    for i in range(len(values)-1):
        if(values[i] == values[i+1]):
            count+=1
    result.append(count)
for i in result:
    print(i)






