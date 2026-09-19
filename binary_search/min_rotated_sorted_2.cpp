class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,ans=INT_MAX;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(l == h) {                                                // agar ek hi el ho
                ans = min(ans, nums[l]);
                break;
            }


            if(nums[l]<nums[h]){                                            // agar pehle se hi sortedd ho
                ans=min(ans,nums[l]);
                break;
            }
            if(nums[l]==nums[mid] && nums[mid]==nums[h]){                           // agar mid l aur h sab barabar ho toh patani konsa smallest hai
                ans = min(ans, nums[mid]);
                l++;
                h--;
                continue;
            }
            if(nums[l]<=nums[mid]){
                ans=min(ans,nums[l]);                               // check for left side 
                l=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);
                h=mid-1;
            }
        }
        return ans;
    }
};