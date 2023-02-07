#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_insert_right - Insert left child to node
*
* @parent: Parent node
* @value: Data of inserted node
* Return: Pointer to new node or NULL on failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = binary_tree_node(NULL, value);

	if (node && parent)
	{
		if (parent->right)
		{
			node->right = parent->right;
			node->right->parent = node;
		}
		parent->right = node;
		node->parent = parent;
		return (node);
	}

	if (node)
		free(node);

	return (0); /*Return NULL*/
}
