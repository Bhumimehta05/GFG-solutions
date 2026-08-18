class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int n=arr.size();
        int max=INT_MIN;
        // int max;
        
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
            
        }
        return max;
    }
};
