class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[l]<=nums[mid]){                          // low is smaller than mid then check in sorted array means it is sorted array
                if(nums[l]<= target && target<nums[mid]){       // check if element is present in it or not
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }

            else{
                if(nums[mid]< target &&target<=nums[h]){     // check if element is present or not from mid to last
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
      

    }
};