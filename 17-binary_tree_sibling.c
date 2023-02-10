#include "binary_trees.h"

/**
* binary_tree_sibling - Find the sibling of a node in a binary tree
*
* @node: Pointer to the node
* Return: Pointer to sibling of the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = 0;

	if (node && node->parent)
	{
		if (node->parent->left == node)
			sibling = node->parent->right;
		else
			sibling = node->parent->left;
	}
	return (sibling);
}
