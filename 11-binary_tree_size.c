#include "binary_trees.h"

/**
* binary_tree_size - Measure the size of a binary tree
*
* @tree: Pointer to the root node
* Return: depth in the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size = binary_tree_size(tree->left) + 1;
		size += binary_tree_size(tree->right);
	}
	return (size);
}
