class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x<0:
            x=list(str(abs(x)))
            x.reverse()
            x=["-"]+x
            x=int(''.join(x))
            if x<-2147483648:
                return 0
            return x
        else:
            x=list(str(abs(x)))
            x.reverse()
            x=int(''.join(x))
            if x>2147483648:
                return 0
            return x
            
