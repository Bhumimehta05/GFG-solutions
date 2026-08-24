class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size();
        int last=arr[n-1];
        int index=n-1;
        vector <int> ans(n);
        for(int i=n-2;i>=0;i--){
            
            ans[index]=arr[i];
            index--;
        }
        
        
        for(int i = 1; i < ans.size(); i++){
            arr[i] = ans[i];
            
        }
         arr[0]=last;
        // for(int i=0;i<n;i++)
        // cout<<arr[i];
        
        // code here
        
    }
};