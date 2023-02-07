#include "binary_trees.h"

/**
* binary_tree_leaves - Count leaves binary tree
*
* @tree: Ponter to root node
* Return: No of leaf nodes
*/
size_t binary_tree_leaves(binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		leaves = binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
