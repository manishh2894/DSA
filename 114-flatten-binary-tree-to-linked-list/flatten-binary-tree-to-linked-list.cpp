class Solution {
public:
    void flatten(TreeNode* root) {
        if (!root) return;

        // Flatten left and right subtrees
        flatten(root->left);
        flatten(root->right);

        // Store the right subtree
        TreeNode* rightSubtree = root->right;

        // Move left subtree to right
        root->right = root->left;
        root->left = nullptr;

        // Find the tail of new right subtree
        TreeNode* curr = root;
        while (curr->right) {
            curr = curr->right;
        }

        // Attach original right subtree
        curr->right = rightSubtree;
    }
};
