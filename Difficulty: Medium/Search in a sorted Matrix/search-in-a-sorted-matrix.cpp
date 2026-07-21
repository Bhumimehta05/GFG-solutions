class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int start=0,end=n*m-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            int row_ind=mid/m;
            int col_ind=mid%m;
            if(mat[row_ind][col_ind]==x)
                return 1;
            else if(mat[row_ind][col_ind]<x)
                start=mid+1;
            else
                end=mid-1;
        }
        return 0;
    }
};