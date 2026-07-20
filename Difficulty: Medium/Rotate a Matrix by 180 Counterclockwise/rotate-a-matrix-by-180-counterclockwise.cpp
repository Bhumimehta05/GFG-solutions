class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // code here
        int n=matrix.size();
        int k=0;
        while(k<2){
        //transpose
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        //reverse
         for(int i=0;i<n;i++){
            int start=0;
            int end=n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
         }
         k++;
        }
        
    }
};