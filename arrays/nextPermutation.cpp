class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int k;int i;
        for( k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
                break;
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else
        {
            for(i=n-1;i>k;i--){
                if(nums[i]>nums[k]){
                    break;
                }
            }
        
        swap(nums[i],nums[k]);
        reverse(nums.begin()+k+1,nums.end());
        }
    }
};
/*
algo followed 
1.find the small elememt from the back(peak element)nums[k]<nums[k+1] defy the increasing order
if no one is found reverse whole
else
find the first element from back which is greater than k and swap with k and reverse with K+1
example-
[1 3 5 4 2]--> 1 4 2 3 5
*/