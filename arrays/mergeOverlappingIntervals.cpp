class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n = intervals.size();
        vector<vector<int>>inter;
        inter.push_back(intervals[0]);
        for(int i=1;i<n;i++){
            vector<int> first = inter.back();
            vector<int> second = intervals[i];
            if(first[1]>=second[0]){
                inter.back()[1]=max(second[1],first[1]);
            }
            else
                inter.push_back(second);
        }
        return inter;
    }
};