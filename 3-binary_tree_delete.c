#include "binary_trees.h"

/**
* binary_tree_delete - Delete entire binary tree
*
* @tree: Ponter to root node
* Description: Do nothing for non-existent tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		tree->parent = 0;
		free(tree);
	}
}
