def isValid(self,s):
        a=[]
        for i in s:
            if(i=="{" or i=="[" or i=="("):
                a.append(i)
                continue
            
            if(len(a)==0):
                return False
                
            if((i=="}" and a[-1]=="{") or (i=="]" and a[-1]=="[") or (i==")" and a[-1]=="(")):
                del a[-1]
            else:
                return False
        
        if(len(a)==0):
            return True
        
        return False
