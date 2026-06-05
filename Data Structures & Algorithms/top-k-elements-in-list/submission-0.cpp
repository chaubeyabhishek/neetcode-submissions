class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mp){
            v.push_back({it.second,it.first});
        }

        priority_queue<
        pair<int,int>,
        vector<pair<int,int>>,
        greater<pair<int,int>>
        >minheap;

        for(int i=0;i<k;i++){
            minheap.push(v[i]);
        }
        for(int i=k;i<v.size();i++){
            if(v[i] < minheap.top()){
                continue;
            }
            else{
                minheap.pop();
                minheap.push(v[i]);
            }
        }
        vector<int>ans;
        while(!minheap.empty()){
            ans.push_back(minheap.top().second);
            minheap.pop();
        }
        return ans;
    }
};
