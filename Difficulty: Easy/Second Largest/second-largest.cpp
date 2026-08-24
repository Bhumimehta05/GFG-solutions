class Solution{
    public:
    int getSecondLargest(vector <int> arr) {
   int n=arr.size();
    // code here
     int max1=INT_MIN;
    
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    
    int max2=-1;
    
    for(int i=0;i<n;i++){
        
        if(arr[i]!=max1){
            
            max2=max(max2,arr[i]);
        }
    }
    
    return max2;
}
};
    

