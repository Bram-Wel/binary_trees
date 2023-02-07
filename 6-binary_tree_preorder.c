#include "binary_trees.h"

/**
* binary_tree_preorder - Traverse tree in preorder
*
* @tree: Pointer to the root
* @func: Function Pointer, parses node data
* Description: Do nothing when tree or func is NULL
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
