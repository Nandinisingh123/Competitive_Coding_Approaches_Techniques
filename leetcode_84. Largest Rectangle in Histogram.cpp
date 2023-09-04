class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        int leftsmall[n],rightsmall[n];
        stack<int> st;
        // computing left small array
        for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()) leftsmall[i] = 0;
            else leftsmall[i] = st.top() + 1;
            
            st.push(i);
        }
        // clear the stack
        while(!st.empty()) st.pop();
        // computing right small array
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && h[st.top()] >= h[i]){
                st.pop();
            }
            if(st.empty()) rightsmall[i] = n-1;
            else rightsmall[i] = st.top() - 1;
            
            st.push(i);
        }
        // computing final ans
        int maxi = INT_MIN;
        for(int i=0;i<n;i++){
            int temp = (rightsmall[i] - leftsmall[i] + 1) * h[i];
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};
