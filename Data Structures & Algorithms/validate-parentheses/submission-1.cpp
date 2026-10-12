class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.length();i++){
            if(s[i]=='[' || s[i]=='{' || s[i]=='('){
                if(s[i]=='['){
                    st.push(']');
                }else if(s[i]=='{'){
                    st.push('}');
                }else{
                    st.push(')');
                }
            }
            else{
                if(st.empty()){
                    return 0;
                }
                if(st.top() == s[i]){
                    st.pop();
                }else{
                    return 0;
                }
            }
        }
        if(!st.empty()){
            return 0;
        }
        return 1;
    }
};
