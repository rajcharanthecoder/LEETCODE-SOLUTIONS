class Solution {
public:
    string reverseWords(string s) {
        vector<string>answer;
        int n = s.size();
        string output = "";
        int i;
        for(i=0;i<n;i++){
            string intermediate;
            if(s[i] == ' ') continue;
            while(s[i]!=' ' && i<n){
                intermediate+=s[i];
                i++;
            }
            answer.push_back(intermediate);
        }

        reverse(answer.begin(),answer.end());
        n = answer.size();
        for(i=0;i<n;i++){
            output+=answer[i]+' ';
        }
        output.pop_back();
        
        return output;
    }
};