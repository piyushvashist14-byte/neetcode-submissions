class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(!st.count(nums[i]-1)){
                int count =0;
                int n =nums[i];
                while(st.count(n)){
                    count++;
                    n++;
                }
                maxi = max(maxi,count);
            }
        }
        return maxi;
    }
};
