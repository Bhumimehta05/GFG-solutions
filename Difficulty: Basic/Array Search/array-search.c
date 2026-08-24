int search(int arr[], long long n, long long x) {
    
    long long index=-1;
    
    for(long long i=0;i<n;i++){
        
        if(arr[i]==x){
        index=i;
        break;}
    }
    
    return index;
    // Code here
    
}