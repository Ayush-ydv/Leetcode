class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // count of elements that are not equal to val
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i]; // move non-val elements to the beginning
                k++;
            }
        }
        return k;
    }
};
