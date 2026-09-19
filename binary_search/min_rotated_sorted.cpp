class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0,h=nums.size()-1,ans=INT_MAX;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[l]<=nums[mid]){                  // always check whicch half is sorted in rotated ques  
                ans=min(ans,nums[l]);                   // l isliye liys kyoki l hi sabse chota hoga sorted me
                l=mid+1;
            }
            else{
                ans=min(ans,nums[mid]);            // isme mmid se compare siliye kiya kyoki agge mid sabse chota hoga
                h=mid-1;
            }
        }
        return ans;
    }
};