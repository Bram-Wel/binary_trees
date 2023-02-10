#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
* binary_tree_is_perfect - Check that a binary tree is perfect
*
* @tree: Pointer to the root node
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int retval = 0;

	if (tree)
	{
		if (binary_tree_balance(tree) == 0)
			retval = 1;
	}
	return (retval);
}
