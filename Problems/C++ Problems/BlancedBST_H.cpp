#include<iostream>
#include <vector>
using namespace std;

struct TreeNode {
	int value;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x);
};

TreeNode::TreeNode(int x){
	value = x;
	left = nullptr;
	right = nullptr;
}

TreeNode* sortedArrayToBSTHelper(vector<int> &nums, int start, int end) {
	if (start > end) return nullptr;
	int mid = start + (end - start) / 2;
	TreeNode* node = new TreeNode(nums[mid]);
	node->left = sortedArrayToBSTHelper(nums, start, mid - 1);
	node->right = sortedArrayToBSTHelper(nums, mid + 1, end);
	return node;
}

TreeNode* sortedArrayToBST(vector<int> &nums) {
	return sortedArrayToBSTHelper(nums, 0, nums.size() - 1);

}

void inOrderTreeTraverse(TreeNode* root) {
	if (root != nullptr) {
		inOrderTreeTraverse(root->left);
		cout << root->value << " ";
		inOrderTreeTraverse(root->right);
	}
}


int main() {

	vector<int>nums= { 1, 2, 3, 4, 5, 6, 7 };

	TreeNode *root = sortedArrayToBST(nums);

	cout << "Print the In oreder Tree:" << endl;

	inOrderTreeTraverse(root);


	return 0;
}