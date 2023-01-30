class Solution {
public:
    int tribonacci(int n) {
        int a = 0,b=1,c=1;
        if(n<3){
            if(n==0) return 0;
            return 1;
        }
        int i;
        for(i=3;i<=n;i++){
            int t = a+b+c;
            a = b;
            b=c;
            c=t;
        }
        return c;
    }
};