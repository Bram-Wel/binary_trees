#include "binary_trees.h"

/**
* binary_tree_postorder - Traverse tree in postorder
*
* @tree: Pointer to the root
* @func: Function Pointer, parses node data
* Description: Do nothing when tree or func is NULL
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
