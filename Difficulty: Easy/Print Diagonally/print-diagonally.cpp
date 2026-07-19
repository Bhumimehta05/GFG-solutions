class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n=mat.size();
        vector <int> result;
        for(int d=0;d<=2*(n-1);d++){
            for(int i=0;i<n;i++){
                int j=d-i;
                if(j>=0 & j<n){
                    mat[i][j];
                    result.push_back(mat[i][j]);
                }
            }
        }
        // code here
        return result;
    }
};