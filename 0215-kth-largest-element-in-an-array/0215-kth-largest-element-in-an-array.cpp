class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> mp;

        for (int num : nums) {
            mp.push(num);
            if (mp.size() > k) {
                mp.pop();
            }
        }

        return mp.top();

    }
};