class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        for(int i=0;i<numbers.size()-1;i++){
            int find = target - numbers[i];
            int j=i+1;
            int k = numbers.size()-1;
            while(j<=k){
                int mid = j+(k-j)/2;
                if(numbers[mid]==find){
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    break;
                }else if(numbers[mid]>find){
                    k = mid-1;
                }else{
                    j = mid+1;
                }
            }
        }
        return ans;
    }
};
