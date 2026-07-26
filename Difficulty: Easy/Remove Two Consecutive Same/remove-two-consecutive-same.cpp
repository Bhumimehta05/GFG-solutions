class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        // code here
        int n=arr.size();
        stack<string> res;
        
        //stasckng elements into stack
        for(int i=0;i<n;i++){
            
            if(res.empty())
            res.push(arr[i]);
            else{
            if(arr[i]==res.top())
            res.pop();
            else
            res.push(arr[i]);
            }
            
        }
        
        return res.size();
            
            
    }
};