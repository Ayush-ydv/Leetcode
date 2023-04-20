#include <queue>
#include <utility>

using std::pair;
using std::queue;

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) {
            return 0;
        }

        queue<pair<TreeNode*, int>> q;
        q.push({root, 1});
        int maxWidth = 1;

        while (!q.empty()) {
            int levelSize = q.size();
            int leftIndex = q.front().second;

            for (int i = 0; i < levelSize; i++) {
                auto [node, index] = q.front();
                q.pop();

                if (node->left) {
                    q.push({node->left, 2 * index});
                }
                if (node->right) {
                    q.push({node->right, 2 * index + 1});
                }

                int rightIndex = index;
            }

            maxWidth = std::max(maxWidth, rightIndex - leftIndex + 1);
        }

        return maxWidth;
    }
};
