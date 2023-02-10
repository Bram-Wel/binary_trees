#include "binary_trees.h"
#include "14-binary_tree_balance.c"

int recursive_balance(const binary_tree_t *tree);
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
		recursive_balance(tree) == 0 ? retval = 1 : retval;
	return (retval);
}

/**
* recursive_balance - run balance recursively
*
* @tree: Root node
* Return: Total balance for the tree.
*/
int recursive_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree)
	{
		balance = binary_tree_balance(tree);
		if (balance != 0)
			return (balance);
		balance = recursive_balance(tree->left) ||
			recursive_balance(tree->right);
	}
	return (balance);
}
