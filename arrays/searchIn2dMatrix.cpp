// 2d array approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        int n = matrix.size();
        int m=matrix[0].size();
        int j = m-1;
    
        if(matrix[i][j]==target){
            return true;
    while(i<n and j>=0){
        }
        else
            if(matrix[i][j]>target){
                j--;
            }
        else
            i++;
    }
    return false;
    }
};

// striver approach
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int high = (n*m)-1;
        int low = 0;
        while(low<=high){
            int mid = (low+high)/2;
            int element = matrix[mid/m][mid%m];
            if(element==target){
                return true;
            }
            else
                if(element>target){
                 high=mid-1;       
                }
            else{
                low = mid+1;
            }
            
        }
        return false;
    }
};