#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_height - Measure the height of a binary_tree
*
* @tree: Pointer to the root node
* Return: height of the binary tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0, left = 0, right = 0;

	if (tree)
	{
		left = binary_tree_height(tree->left) + 1;
		right = binary_tree_height(tree->right) + 1;
		!tree->left ? left -= 1 : left;
		!tree->right ? right -= 1 : right;
		if (left > right)
			height = left;
		else
			height = right;
	}

	return (height);
}
