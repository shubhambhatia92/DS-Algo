class Solution {
public:
    int maxSubArray(vector<int>& nums) {
     int n = nums.size();
        int sum = 0;
        int maximumSum = INT_MIN;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maximumSum=max(maximumSum,sum);
            if(sum<0){
                sum=0;
            }
        }
        return maximumSum;
    }
};
// finding length of maximum subarray
int max_ending_here = 0;
 
    // stores endpoints of maximum sum subarray found so far
    int start = 0, end = 0;
 
    // stores starting index of a positive-sum sequence
    int beg = 0;
 
    // traverse the given array
    for (int i = 0; i < n; i++)
    {
        // update the maximum sum of subarray "ending" at index `i`
        max_ending_here = max_ending_here + arr[i];
 
        // if the maximum sum becomes less than the current element,
        // start from the current element
        if (max_ending_here < arr[i])
        {
            max_ending_here = arr[i];
            beg = i;
        }
 
        // update result if the current subarray sum is found to be greater
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = beg;
            end = i;
        }
    