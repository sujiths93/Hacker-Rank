def gemstones(inp):
    x=set()
    for keys,values in inp.items():
        if(keys==0):
            x=set(values)
        x=set(x)&set(values)
    print(len(x))

n=int(input())
inp={}
for i in range(n):
    inp[i]=input()
gemstones(inp)
