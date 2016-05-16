dict={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}


def romanToInt(s):
    """
    :type s: str
    :rtype: int
    """
    res = 0
    i = 0
    while i < len(s):
        if i+1<len(s) and dict[s[i]] < dict[s[i + 1]]:
            res += dict[s[i + 1]] - dict[s[i]]
            i += 2
        else:
            res += dict[s[i]]
            i += 1

        print(i)
        print(res)

    return res



romanToInt("DCXXI")