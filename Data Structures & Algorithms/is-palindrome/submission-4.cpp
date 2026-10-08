class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        // for(int i=0;i<s.length();i++){
        //     if(isalpha[s[i]] && isdigit(s[i]))
        // }
        int i=0;
        int j= s.length()-1;
         
        while(i<j){
            while(i<j && !isalpha(s[i]) && !isdigit(s[i])){
                i++;
            }
            while(i<j && !isalpha(s[j]) && !isdigit(s[j])){
                j--;
            }
             
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            
                i++;
                j--;
                
            
        }
         
            return true;
        
    }
};
