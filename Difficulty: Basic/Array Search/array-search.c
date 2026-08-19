int search(int arr[], int n, int x) {
    int index=-1;
    
    for(int i=0;i<n;i++){
        
        if(arr[i]==x){
          index=i;
          break;
        }
        
    }
    
    return index;
    // Code here
    
}