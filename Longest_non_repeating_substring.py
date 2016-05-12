s="vdvf"
dict = {}
res = []
count = 0
if len(s) == 1:
    print("1")

for i in range(0, len(s)):

    j = i

    while j < len(s) and s[j] not in dict:
        dict[s[j]] = 0
        j += 1

    if j == len(s):
        j -= 1
        res.append(j - i + 1)
        print(max(res))

    j -= 1
    res.append(j - i + 1)
    dict = {}

if len(res) == 0:
    print("0")

print( max(res))