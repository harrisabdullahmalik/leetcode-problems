class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> target_vector;
        target_vector.reserve(2);
        int size = nums.size();

        for (int i = size - 1; i > 0; --i) {
            for (int j = i - 1; j > -1; --j) {
                if (nums[i] + nums[j] == target) {
                    target_vector.push_back(j);
                    target_vector.push_back(i);
                    return target_vector;
                }
            }
        }

        return target_vector;
    }
};