#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_balance - Measure the balance factor of a tree
*
* @tree: Pointer to root node
* Return: Balance factor or 0 for non-existent tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree)
	{
		left = binary_tree_height(tree->left);
		/*tree->left && left == 0 ? left += 1 : left;*/
		right = binary_tree_height(tree->right);
		/*tree->right && right == 0 ? right += 1 : right;*/
	}
	return (!tree ? 0 : left - right);
}
