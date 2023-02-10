#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
* binary_tree_uncle - Find the sibling of a node in a binary tree
*
* @node: Pointer to the node
* Return: Pointer to uncle of the node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = 0;

	if (node && node->parent)
		uncle = binary_tree_sibling(node->parent);
	return (uncle);
}
