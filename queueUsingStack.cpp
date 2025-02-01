class MyQueue {
    int *arr;
    int rear, front, size;

public:
    MyQueue(int n=1000) {
        size=n;
        arr= new int[size];
        rear=0;
        front=0;
        
    }
    
    void push(int x) {
        if(rear==size){
            cout<< "qeue is full"<<endl;
        }
        else{
             arr[rear]=x;
             rear++;
        }
        
    }
    
    int pop() {
        if(front==rear){
            return -1;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                rear=0;
                front=0;
            }
            return ans;
        }
        
    }
    
    int peek() {
        if(front==rear){
            return -1;
        }
        else{
             return arr[front];
        }
        
    }
    
    bool empty() {
        if(front==rear){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
