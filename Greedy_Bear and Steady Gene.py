ict={'A':0,'C':0,'T':0,'G':0}
n=int(input())/4
str=input()
j=len(str)-1
right=0
left=0
result=[]
outer=""
#to find the appropriate right index
for r in range(j,-1,-1):
    dict[str[r]]+=1

    if(validity(dict,n)!=1):
        right=r+1
        dict[str[r]]-=1
        break

if right==0:
    print("0")
    exit()
minlen=right

for left in range(0,right):
    if(right>=len(str)):
        break

    dict[str[left]]+=1

    while(validity(dict,n)==0 and right < len(str)):
        dict[str[right]]-=1
        right+=1

    if minlen>right-left-1:
        minlen=right-left-1

print(minlen)