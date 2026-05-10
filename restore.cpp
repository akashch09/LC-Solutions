class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> fSet(friends.begin(), friends.end());
        vector<int> result;

        for (int id : order) {
            if (fSet.count(id)) {
                result.push_back(id);
            }
        }

        return result;
    }
};