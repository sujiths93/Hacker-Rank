def convert(s, numRows):

    if numRows == 0 or numRows == 1 or len(s) == 0:
        return s
    res = [[0 for i in range(0)] for y in range(numRows)]
    row = 0

    for i in range(0,len(s)):
        res[row].append(s[i])
        if row == 0:
            step = 1
        elif row == numRows - 1:
            step = -1


        row += step

    print(res)
    s=""
    for i in range(numRows):
        for j in res[i]:
            s+=j
    print(s)

convert("SUJITH",2)