class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();   // here  we will get iterator subtraction with 0 gives  index of lb
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();

        if(lb==nums.size() || nums[lb]!=target){  // agar hamara lb exist hi ni karra mtlb element ni hai
            return {-1,-1};
        }
        else{
            return {lb,ub-1};
        }


        

    }
};


// lowerbound is used to find occ of first el or where to be placed if  not ppreset
//upper bbound gives iterator one more than actual val so we subtract 1