// Khallas Approach recursion ka 
// class Solution {
// public:
//     int solve(int n,int k){
//         return n==1?0:(solve(n-1,k)+k)%n;
//     }
//     int findTheWinner(int n, int k) {
//         int ans = solve(n,k)+1; //To make zero based index to 1 based index
//         return ans;
//     }
// };

//circular Linked List Approach
class Solution {
public:
    int findTheWinner(int n, int k){
        list<int>l;
        for(int i=0;i<n;i++) l.push_back(i);
        list<int>::iterator it = l.begin();
        while(l.size()>1){
            for(int count = 2;count<=k;count++){
                it++;
                if(it==l.end()) it = l.begin(); //To Loop Back
            }
            it = l.erase(it);
            if(it==l.end()) it = l.begin();
        }
        return l.front()+1;
    }
};