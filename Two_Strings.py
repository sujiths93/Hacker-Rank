def FUN(s1,s2):
    dic={}
    for i in s1:
        dic[i]=0

    for j in s2:
        if(j in dic):
            return 1
    return 0

n=int(input())
str={}
for i in range(n):
    s1=input()
    s2=input()
    if(FUN(s1,s2)):
        print("YES")
    else:
        print("NO")