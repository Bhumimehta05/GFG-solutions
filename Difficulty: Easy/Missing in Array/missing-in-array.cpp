class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        long long n=arr.size()+1;
        
        int sum=n*(n+1)/2;
        int sum1=0;
        for(int i=0;i<arr.size();i++){
            sum1=sum1+arr[i];
            
        }
        
        int diff=sum-sum1;
        return diff;
    }
};