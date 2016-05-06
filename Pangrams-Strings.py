sentence=input()
small={}
for i in range(65,91):
    small[chr(i)]=0
sentence=sentence.upper()
sentence=sentence.replace(" ","")

for i in sentence:
    if(sentence.find(i)!=-1):
        small[i]=1
for keys,values in small.items():
    if(values==0):
        print("not pangram")
        exit()

print("pangram")


