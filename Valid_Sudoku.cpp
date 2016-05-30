class Solution {
public:
	

	int searchInsert(vector<int>& nums, int target) {
		if (nums.size() == 0)
			return 0;


		int begin = 0;
		int end = nums.size() - 1;
		int mid;


		while (begin>=0 && end<=nums.size()-1) {
			mid = (begin + end) / 2;
			if (nums.at(mid) == target)
				return mid;
			else {
				if (target > nums.at(mid)) {
					if (target > nums.at(end)) {
						return end+1;
					}
					else
						begin = mid + 1;
				}
				else {
					if (target < nums.at(begin)) {
						return begin;
					}
					else
						end = mid - 1;
				}
			}

		}

		return 0;
	}
};