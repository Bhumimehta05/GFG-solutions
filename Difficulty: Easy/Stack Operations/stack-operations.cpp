class myStack {
  private:
    // Define your stack
    int *arr;
    int size;
    int top;
  public:
  
  myStack() {
    size = 100;
    top = -1;
    arr = new int[size];
}
  
    myStack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    void push(int x) {
        if(top==size-1){
            cout<<"stack overflow";
        }else{
            top++;
            arr[top]=x;
        }
        // insert x into stack
    }

    void pop() {
        if(top==-1){
            cout<<"stack underflow";
        }else{
            top--;
        }
        // remove top ele from stack
    }

    int peek() {
        // return top of stack
        return arr[top];
    }

    int getSize() {
        return top+1;
        // return current size of stack
    }

    bool isEmpty() {
        if(top==-1)
        return true;  
    else
        return false;
        // check whether stack is empty
    }
};