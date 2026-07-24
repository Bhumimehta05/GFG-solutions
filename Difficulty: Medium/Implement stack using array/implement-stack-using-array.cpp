class myStack {
    private:
    int *arr;
    int size;
    int top;
  public:
    myStack(int n) {
        size=n;
        top=-1;
        arr=new int[size];
        
        // Define Data Structures
    }

    bool isEmpty() {
        if(top==-1)
        return true;
        else
        return false;
        // check if the stack is empty
    }

    bool isFull() {
        if(top==size-1)
        return true;
        else
        return false;
        // check if the stack is full
    }

    void push(int x) {
        if(top==size-1)
        return;
        // cout<<"stack overflow";
        else
        top++;
        arr[top]=x;
        // inserts x at the top of the stack
    }

    void pop() {
        if(top==-1)
        return;
        // cout<<"stack underflow";
        else
        top--;
        // removes an element from the top of the stack
    }

    int peek() {
        if(top==-1)
        return -1;
        else
        return arr[top];
        // Returns the top element of the stack
    }
};