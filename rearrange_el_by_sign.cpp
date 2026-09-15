class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>v(nums.size());
        int i=0,j=1;
        for(int k=0;k<nums.size();k++){
            if(nums[k]>0){   // agar number 0 se bada hai toh 0 index me chakla jaayega v ke
                v[i]=nums[k];
                i+=2;       // i +2 ho jaayega kyuki saare eeven index pe +ve hai
            }
            else{
                v[j]=nums[k];
                j+=2;
            }
        }
        return v;
    }
};