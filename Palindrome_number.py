import copy
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x<0:
            return False
        #if x+1<=10:
            #return True
        
        num=0
        y=copy.deepcopy(x)
        while x>0:
            num=num*10+x%10
            x/=10
        
        if x>2147483647:
            return False
            
        if num==y:
            return True
            
        return False
