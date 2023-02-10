#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
* binary_tree_is_full - Check for a binary tree
*
* @tree: Pointer to Root of the tree
* Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int retval = 0;

	if (tree && retval != 1)
	{
		retval = binary_tree_is_full(tree->left);
		retval = binary_tree_is_full(tree->right);
		if (binary_tree_is_leaf(tree) &&
		(tree->parent->right && tree->parent->left))
			retval = 1;
	}
	return (retval);
}
