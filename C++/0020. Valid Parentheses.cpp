class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1)return false;
        stack<char> st;
        for(int i=0;i<s.size();++i){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                st.push(s[i]);
            else if(s[i]==')'){
                if(i==0||st.empty()||st.top()!='(')
                    return false;
                st.pop();
            }else if(s[i]==']'){
                if(i==0||st.empty()||st.top()!='[')
                    return false;
                st.pop();
            }else if(s[i]=='}'){
                if(i==0||st.empty()||st.top()!='{')
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};