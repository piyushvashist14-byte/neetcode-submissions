class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(int i=0;i<strs.size();i++){
            encoded_string+=to_string(strs[i].length());
            encoded_string+='#';
            encoded_string+=strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
       int i=0;
       while(i<s.length()){
        string num =  "";
        while(i<s.length() && isdigit(s[i])){
            num+=s[i];
            i++;
        }
        int len = stoi(num);
        i++;
        string temp = "";
        for(int j=i;j<i+len;j++){
            temp+=s[j];
        }
        i+=len;
        decoded_strs.push_back(temp);
       }
       return decoded_strs;
    }
};
