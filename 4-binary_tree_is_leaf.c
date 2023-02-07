#include "binary_trees.h"

/**
* binary_tree_is_leaf - Check that a node is a leaf
*
* @node: Pointer to node
* Return: 1 for leaf node, 0 otherwise
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int retval = 0;

	if (node && !node->left && !node->right)
		retval = 1;
	return (retval);

}
