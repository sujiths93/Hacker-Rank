s1=input()
s2=input()
dict={}

for i in s1:
    if i in dict:
        dict[i]+=1
    else:
        dict[i]=1
for i in s2:
    if i in dict:
        dict[i]-=1
    else:
        dict[i]=1

sum=0
for keys,values in dict.items():
    sum+=abs(values)

print(sum)
