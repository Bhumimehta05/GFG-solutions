class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        long long n =arr.size();
        int start=0;
        int end=n-1;
        bool ans=false;
        sort(arr.begin(),arr.end());
        
        
        while(start<end){
            long long prod=(long long)arr[start]*arr[end];
            if(prod==target){
                // return true;
                ans=true;
                
                // return ans;
                break;
            }else if(prod<target){
                start++;
                // end--;
                
            }else{
                end--;
                // start++;
            }
        }
        return ans;
        
        // return false;
        
    }
};