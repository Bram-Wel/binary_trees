#include "binary_trees.h"

/**
* binary_tree_node - Create a binary tree node
*
* @parent: Pointer to parent node
* @value: Data for the new node
* Return: Pointer to the new node or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (0);
	node->parent = 0; /*0 is NULL*/
	node->left = 0;
	node->right = 0;
	node->n = value;

	if (parent)
		node->parent = parent;
	return (node);
}
