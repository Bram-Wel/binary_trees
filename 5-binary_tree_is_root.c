#include "binary_trees.h"

/**
* binary_tree_is_root - Check that node is root
*
* @node: Pointer to the node
* Return: 1 for root node or 0 otherwise
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	int retval = 0;

	if (node && !node->parent)
		retval = 1;
	return (retval);
}
