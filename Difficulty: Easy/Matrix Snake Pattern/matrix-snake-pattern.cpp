class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        int n=matrix.size();
        vector<int>ans;
       int row=0;
       while(row<n){
           if(row%2==0){
               for(int i=0;i<n;i++)
               ans.push_back(matrix[row][i]);
           }else{
               for(int j=n-1;j>=0;j--)
               ans.push_back(matrix[row][j]);
           }
           row++;
       }
       return ans;
    }
};