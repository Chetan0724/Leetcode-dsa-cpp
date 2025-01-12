class MinStack {
public:
    vector<pair<int, int>> st;
    MinStack() {}

    void push(int val) {
        if (st.empty()) {
            // it means, i am inserting first element
            pair<int, int> p;
            p.first = val;
            p.second = val;
            st.push_back(p);
        } else {
            pair<int, int> p;
            p.first = val;
            int oldMin = st.back().second;
            p.second = min(oldMin, val);
            st.push_back(p);
        }
    }

    void pop() { st.pop_back(); }

    int top() {
        pair<int, int> rightMostPair = st.back();
        return rightMostPair.first;
    }

    int getMin() {
        pair<int, int> rightMostPair = st.back();
        return rightMostPair.second;
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