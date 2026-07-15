class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int start=0;
        int end=arr.size()-1;
        // code here
        while(start<end){
            if (arr[start]==0){
                start++;
            }else{
                if(arr[end]==0){
                    swap(arr[end],arr[start]);
                }else{
                    end--;
                }
            }
        }
    }
};