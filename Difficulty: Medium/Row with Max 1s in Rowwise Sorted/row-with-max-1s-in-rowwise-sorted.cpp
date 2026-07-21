class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &mat) {
        // code here
        
 
        int n = mat.size();
        int m = mat[0].size();
        int max1 = INT_MIN;
        int count;
        int resultIndex = -1;   // agar koi row mein 1 na ho, ya sab rows all-zero ho
        
        for(int i = 0; i < n; i++){
            count = 0;
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1)
                    count += 1;
            }
            if(count > max1 & count>0){
                max1 = count;
                resultIndex = i;
            }
        }
        
        return resultIndex;
    
    }
};