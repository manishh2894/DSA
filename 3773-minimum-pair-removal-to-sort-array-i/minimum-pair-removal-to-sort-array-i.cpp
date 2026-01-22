class Solution {
public:
    bool isNonDecreasing(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < nums[i - 1]) return false;
        }
        return true;
    }

    int minimumPairRemoval(vector<int>& nums) {  // 🔹 FIXED NAME
        int ops = 0;

        while (!isNonDecreasing(nums)) {
            int minSum = INT_MAX;
            int idx = -1;

            for (int i = 0; i < nums.size() - 1; i++) {
                int s = nums[i] + nums[i + 1];
                if (s < minSum) {
                    minSum = s;
                    idx = i;
                }
            }

            int merged = nums[idx] + nums[idx + 1];
            nums.erase(nums.begin() + idx);
            nums.erase(nums.begin() + idx);
            nums.insert(nums.begin() + idx, merged);

            ops++;
        }

        return ops;
    }
};
