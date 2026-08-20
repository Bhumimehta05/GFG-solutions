int missingNum(int *arr, int size) {
    long long n=size+1;
    long long sum=n*(n+1)/2;
    int sum2=0;
    for(int i=0;i<size;i++){
        sum2=sum2+arr[i];
        
    }
    
    int diff=sum-sum2;
    return diff;
    // code here
    
}
