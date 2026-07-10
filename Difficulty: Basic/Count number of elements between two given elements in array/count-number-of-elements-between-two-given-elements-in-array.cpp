class Solution {
  public:
    int getCount(vector<int> &arr, int num1, int num2) {
        int count=-1;
        int n=arr.size();
        int fir=-1,last=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==num1){
                fir=i;
                break;
            }
        } 
        
        
         for(int i=0;i<n;i++){
            if(arr[i]==num2){
                last=i;
            }
        } 
       
        
        if(fir == -1 || last == -1 || fir >= last){
            return 0;
        }
        
        // if(last-(fir+1)==1){
        //     count=1;
        // }
        for(int i=fir+1;i<=last;i++){
        
            
            count+=1; 
                
            
        }
        
        
        return count;
        // Your code goes here.
    }
};