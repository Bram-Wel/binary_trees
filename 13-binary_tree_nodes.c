#include "binary_trees.h"

/**
* binary_tree_nodes - Count nodes with atleast a child in binary tree
*
* @tree: Ponter to root node
* Return: No of nodes
*/
size_t binary_tree_nodes(binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree && (tree->left || tree->right))
	{
		nodes = binary_tree_nodes(tree->left) + 1;
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
