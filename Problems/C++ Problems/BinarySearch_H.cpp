#include <iostream>
using namespace std;

struct TreeNode {
	int value;

	TreeNode *left;
	TreeNode* right;
	TreeNode(int x);
};

TreeNode::TreeNode(int x) {
	value = x;
	left = nullptr;
	right = nullptr;
}

void inOrderTraversal(TreeNode *root) {
	if (root != nullptr) {
		inOrderTraversal(root->left);
		cout << root->value << " ";
		inOrderTraversal(root->right);
	}
}

void preOrderTraversal(TreeNode* root) {

	if (root != nullptr) {
		cout << root->value << " ";
		preOrderTraversal(root->left);
		preOrderTraversal(root->right);
	}
}

void postOrderTraversal(TreeNode* root) {

	if (root != nullptr) {		
		postOrderTraversal(root->left);
		postOrderTraversal(root->right);
		cout << root->value << " ";
	}
}


int main() {

	TreeNode* root = new TreeNode(10);
	root->left = new TreeNode(5);
	root->right = new TreeNode(15);
	root->left->left = new TreeNode(3);
	root->left->right = new TreeNode(7);
	root->right->right = new TreeNode(18);

	cout << "In order Traversal: ";
	inOrderTraversal(root);

	cout << "Pre-order Traversal: ";
	preOrderTraversal(root);

	cout << "Post-order Traversal: ";
	postOrderTraversal(root);

	return 0;

}