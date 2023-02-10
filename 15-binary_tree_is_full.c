#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include <stdio.h>

/**
* binary_tree_is_full - Check for a binary tree
*
* @tree: Pointer to Root of the tree
* Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int retval = 0;

	if (tree)
	{
		if (binary_tree_is_leaf(tree))
			retval = 1;
		else
			retval = binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right);
	}
	return (retval);
}
