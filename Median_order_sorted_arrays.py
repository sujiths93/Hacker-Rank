
# O(n) solution to find the median element of two soarrays.

def FUN(nums1, nums2):
    """
    :type nums1: List[int]
    :type nums2: List[int]
    :rtype: float
    """
    i = 0
    j = 0
    res = []
    c = 0
    m = len(nums1)
    n = len(nums2)
    mn = m+n
    if m == 0:
        if n % 2 != 0:
            return nums2[int(mn / 2)]
        else:
            return ((nums2[int(mn / 2)] + nums2[int(mn / 2) -1])/2)
    if n == 0:
        if m % 2 != 0:
            return nums1[int(mn / 2)]
        else:
            return (nums1[mn / 2] + nums1[(mn / 2) -1])/2

    while i < len(nums1) and j < len(nums2):

        if (c == int(((mn / 2) + 1))):
            if (m + n) % 2 == 0:
                return (res[c-1] + res[c - 2]) / 2
            else:
                return res[c-1]

        if nums1[i] > nums2[j]:
            res.append(nums2[j])
            c += 1
            j += 1
        else:
            res.append(nums1[i])
            c += 1
            i += 1

print(FUN([],[2,4]))
