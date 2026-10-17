class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map<int,int>map;
        for(int i=0;i<position.size();i++){
            map[position[i]] = speed[i];
        }
        stack<float>st;
        sort(position.rbegin(),position.rend());
        for(int i=0;i<position.size();i++){
            float time = 1.0f*(target-position[i])/map[position[i]];
            if(st.empty()){
                st.push(time);
            }else if(time>st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};
