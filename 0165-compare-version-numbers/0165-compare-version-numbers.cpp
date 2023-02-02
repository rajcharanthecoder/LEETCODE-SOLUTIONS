class Solution {
public:
    int compareVersion(string version1, string version2) {
        string temp1 = "";
        string temp2 = "";
        vector<int>a1;
        vector<int>a2;
        int n1 = version1.length();
        int n2 = version2.length();
        for(int i = 0;i<n1;i++){
            if(version1[i]!='.'){
                temp1+=version1[i];
            }else{
                int value = stoi(temp1);
                a1.push_back(value);
                temp1 = "";
            }
        }
        int value = stoi(temp1);
        a1.push_back(value);
        temp1 = "";
        for(int i = 0;i<n2;i++){
            if(version2[i]!='.'){
                temp2+=version2[i];
            }else{
                int value = stoi(temp2);
                a2.push_back(value);
                temp2 = "";
            }
        }
        value = stoi(temp2);
        a2.push_back(value);
        temp2 = "";

        n1 = a1.size();
        n2 = a2.size();
        int a = 0;
        int b = 0;

        while(a<n1 && b<n2){
            if(a1[a]<a2[b]) return -1;
            else if(a1[a]>a2[b]) return 1;
            a++;
            b++;
        }

         while(a<n1){
            if(a1[a]>0) return 1;
            a++;
        }
        while(b<n2){
            if(a2[b]>0) return -1;
            b++;
        }

        return 0;
    }
};