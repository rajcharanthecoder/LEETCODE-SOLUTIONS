class Solution {
public:
    int solve(int n,int k){
        return n==1?0:(solve(n-1,k)+k)%n;
    }
    int findTheWinner(int n, int k) {
        int ans = solve(n,k)+1; //To make zero based index to 1 based index
        return ans;
    }
};