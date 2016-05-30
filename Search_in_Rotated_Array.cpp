class Solution {
public:
    int search(vector<int>& nums, int target) {
        //binary search
        
        if(nums.size()==0)  return -1;
        if(nums.size()==1 && nums.at(nums.size()-1)!=target) return -1;
        else if (nums.size() == 1 && nums.at(nums.size() - 1) == target) return 0;
        
        int start=0;
        int end=nums.size()-1;
        int mid;
       while (start <= end) {
			mid = (start + end) / 2;
			if (nums.at(mid) == target) {
				return mid;
			}
			if(nums.at(end)==target) return end;
			if(nums.at(start)==target) return start;
			//left side is in order
			if(nums.at(start)<nums.at(mid)){
			    
			    if(target<nums.at(mid)&&target>=nums.at(start))     end=mid-1;
			    
			    else    start=mid+1;
			}
			else{
			    if(target>nums.at(mid)&&target<=nums.at(end)) start=mid+1;
			    
			    else    end=mid-1;
			}

		}
		return -1;
    }
};