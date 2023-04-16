#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0;
        int i = 0;
        int j = nums.size()-1;
        while(i<j){
            if((nums[i]+nums[j])==k){
                count++;
                i++;
                j--;
            }
            else if((nums[i]+nums[j])<k){
                i++;
            }
            else if((nums[i]+nums[j])>k){
                j--;
            }
        }
        return count;
    }
};
