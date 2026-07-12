class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
       int n = arr.size();
int start = 0;
int end = n - 1;   // n nahi, n-1 (valid last index)
int temp[n];

for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
        temp[start] = arr[i];
        start++;        // yeh missing tha
    }
}

for (int i = 0; i < n; i++) {
    if (arr[i] == 1) {
        temp[end] = arr[i];
        end--;           // yeh bhi missing tha
    }
}

for (int i = 0; i < n; i++) {
    arr[i] = temp[i];
}}
};