class MinStack {
    public:
        stack<pair<int, int>> stk;
        MinStack() {
        }
        
        void push(int val) {
            int newMin = stk.empty()? val : min(val, stk.top().second);
            stk.push({val, newMin});
        }
        
        void pop() {
            if(!stk.empty()){
                stk.pop();
            }
        }
        
        int top() {
            return stk.top().first;
        }
        
        int getMin() {
            return stk.top().second;
        }
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */