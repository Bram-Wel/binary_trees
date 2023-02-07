#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_insert_left - Insert left child to node
*
* @parent: Parent node
* @value: Data of inserted node
* Return: Pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(NULL, value);

	if (node && parent)
	{
		if (parent->left)
		{
			node->left = parent->left;
			node->left->parent = node;
		}
		parent->left = node;
		node->parent = parent;
		return (node);
	}

	if (node) free(node);

	return (0); /*Return NULL*/
}
