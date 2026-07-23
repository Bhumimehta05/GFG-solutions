class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Hereint 
        int n=arr.size();
        for(int i=0;i<n-1;i++){
             int index=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[index]){
                    index=j;
                }
            }
            swap(arr[index],arr[i]);
        }
        
        
        for(int k=0;k<n-2;k++){
            int start=k+1,end=n-1;
            while(start<end){
            if(arr[k]+arr[start]+arr[end]==target){
            start++;
            end--;
                return 1;
            
            }else if(arr[k]+arr[start]+arr[end]>target)
                end--;
             else
                start++;
        }
            }
            
        
    
        return 0;
    }
};