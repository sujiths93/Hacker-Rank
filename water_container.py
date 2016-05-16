class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        
        if len(height)==2:
            return min(height)
        
        #find the minimum index
        m=0
        i=0
        j=len(height)-1
        while i<=j:
            if min(height[j],height[i])*(j-i)>m:
                m=min(height[j],height[i])*(j-i)
             
            if height[i]<height[j]:
                i+=1
            else:
                j-=1
                
        return m
    
