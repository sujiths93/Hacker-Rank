#O(n) solution to longest substring without repeating character.


#Steps:
# Store each character (i) in a queue if its not already present.
#if its present,update the result if its lesser than the length of the queue ,then delete all those characters in front of (i)
# including the repeated character, store (i) in tail of array.
#continue the same procedure.



s="dvdfgkg"
arr=[]
res=0
for i in s:
    if i in arr:
        if len(arr)>res:
            res=len(arr)
        arr=arr[arr.index(i)+1:]
        arr.append(i)
    else:
        arr.append(i)

print(max(len(arr),res))
