#include "binary_trees.h"

/**
* binary_tree_inorder - Traverse tree in preorder
*
* @tree: Pointer to the root
* @func: Function Pointer, parses node data
* Description: Do nothing when tree or func is NULL
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
