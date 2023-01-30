class Solution {
public:
    bool matching(char a,char b){
        
        return ((a == '(' && b == ')')||(a=='{' && b == '}')||(a=='[' && b == ']'));
    }
    bool isValid(string s) {
        int i;
        stack<int>stackers;
        for(i=0;i<s.size();i++){
            if(s[i] == '(' ||s[i] == '{' || s[i] == '[') stackers.push(s[i]);
            else{
                if(stackers.empty()==true || !matching(stackers.top(),s[i])) return false;
                else stackers.pop();
            }
        }
        return stackers.empty()==true; 
    }
};