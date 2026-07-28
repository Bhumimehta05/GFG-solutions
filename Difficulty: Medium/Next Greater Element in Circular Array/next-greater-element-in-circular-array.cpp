class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        
        int n=arr.size();
        vector<int>ans(n,-1);
        stack<int> s;
        
        
        for(int i=0;i<2*n;i++){
            
            
            while(!s.empty() && arr[s.top()]<arr[i%n]){
                
                ans[s.top()]=arr[i%n];
                s.pop();
            }
            s.push(i%n);
        }
        
        return ans;
        // code here
        
    }
};