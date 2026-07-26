class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        int n=st.size();
        stack<int> temp;
        for(int i=0;i<n;i++){
            // temp.push(x);
            temp.push(st.top());
            st.pop();
            }
        
        st.push(x);
        
            // st.push(x);
            while(!temp.empty()){
                st.push(temp.top());
                // top--;
                temp.pop();
            }
        
        
        return st;
        
    }
};