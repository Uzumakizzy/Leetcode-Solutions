class Solution {
public:
    stack<char>st;
    string removeDuplicates(string s) {
        string ans;
        char c;
        for(auto &i:s){
            if(st.empty()) {
                st.push(i);
                continue;
            }
            if(i==st.top()) st.pop();
            else st.push(i);
        }
        while(!st.empty()){
            c=st.top();
            ans+=c;
            st.pop();
        }
        reverse(begin(ans),end(ans));
        return ans;
    }
};
