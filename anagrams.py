def split_strings(s):
    count=0
    s=list(s)
    s1=list()
    s2=list()
    #split the strings at half.
    for i in range(int(len(s)/2)):
        s1.append(s[i])
    s1.sort()
    #split the string at second half.
    for i in range(int(len(s)/2),len(s)):
        s2.append(s[i])
    s2.sort()
    for i in range(len(s1)):
        if((ord(s1[i])-ord(s2[i])!=0)):
           count+=1
    return count



n=int(input())
s={}
for i in range(0,n):
    s[i]=input()
res={}
for keys,values in s.items():
    if(len(values)%2!=0):
        res[keys]=-1
    else:
        values=list(values)
        res[keys]=split_strings(values)

for keys,values in res.items():
    print(values)
