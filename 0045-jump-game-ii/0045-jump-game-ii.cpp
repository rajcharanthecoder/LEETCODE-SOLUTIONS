class Solution {
public:
    int jump(vector<int>& nums) {
        int answer = 0;
        int n = nums.size();
        int end = 0;
        int Farthest_pos = 0;
        for(int  i =0;i<n-1;i++){
            Farthest_pos = max(Farthest_pos,i+nums[i]);
            
            if(i==end){
                answer++;
                end = Farthest_pos;
            }
        }
        return answer;
    }
};