class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        stack<int> st;
        for(int i=0;i<arr.size();i++){
            
            if(st.empty())  
                st.push(arr[i]);
            
            else if(arr[i]>=0){
                if(st.top()>=0)
                st.push(arr[i]);
                else
                st.pop();
            }else{
                if(st.top()<0)
                st.push(arr[i]);
                else
                st.pop();
            }    
        }
        
        vector<int>ans;
        int e=st.size();
        for(int i=e;i>0;i--){
        ans.push_back(st.top());
        st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};