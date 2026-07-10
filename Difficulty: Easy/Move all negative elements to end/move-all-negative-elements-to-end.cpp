class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        int n=arr.size();
        int index=0;
        int temp[n];
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                temp[index]=arr[i];
                index++;
                
            }
            
        }
        
        //for negative ones
        for(int j=0;j<n;j++){
            
            if(arr[j]<0){
                temp[index]=arr[j];
                index++;
            }
            
        }
        
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
            
        }
        
        // return arr;
    }
};