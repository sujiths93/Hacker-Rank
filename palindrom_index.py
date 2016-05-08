import copy
res=[]
def palindrome(s1):
    s1=list(s1)
    s2=[]
    s2=copy.deepcopy(s1)
    s1.reverse()
    if s2 == s1:
        return 1
    else:
        return 0

def FUN(values):
    j=len(values)-1
    for i in range(0,len(values)):
        if(values[i]==values[j]):
            j-=1
        else:
            temp=[]
            for k in range(len(values)):
                if(k!=i):
                    temp.append(values[k])
            if(palindrome(temp)):
                res.append(i)
                return
            else:
                res.append(j)
                return

n=int(input())
str={}
for i in range(n):
    str[i]=input()

for keys,values in str.items():
    if(palindrome(values)):
        res.append(-1)
        continue
    else:
        FUN(values)

for i in res:
    print(i)






