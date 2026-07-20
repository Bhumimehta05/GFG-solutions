class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
        
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>ans(n,vector<int>(m));
        //swap the columns 
        
       
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
             int newindex=(j-k%m+m)%m;
            // int start=0,end=m-1;
            ans[i][newindex]=mat[i][j];
        }}
        return ans;
    }
};