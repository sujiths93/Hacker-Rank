str=input()
dict={}

for i in str:
    if i in dict:
        x=dict[i]
        x+=1
        dict[i]=x
    else:
        dict[i]=1

c=0
flag=0
for keys,values in dict.items():
    if values%2!=0:
        c+=1
    if(c>=2):
        flag=1
        break

if(flag):
    print("NO")
else:
    print("YES")