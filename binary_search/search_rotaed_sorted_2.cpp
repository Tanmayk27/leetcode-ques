class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==target){
                return true;
            }

            if(nums[l] == nums[mid] && nums[mid] == nums[h]){    // sirf ek case joodna hai agar mid h l saaare eq hai toh low ko  aage aur h ko piche lana hai
                l++;
                h--;
                continue;
            }


            if(nums[l]<=nums[mid]){                                             // chec k if left side is sorted or not
                if(nums[l]<=target && target <=nums[mid]){         // agar  target low aur mid ke beech me hai toh 
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }

            else{
                if(nums[mid]<=target &&target<=nums[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return false;
    }
};