#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_balance - Measure the balance factor of a tree
*
* @tree: Pointer to root node
* Description: So greg, here to get balance I need to calculate the
* height for the left sub-tree and the right sub-tree. The difference is the
* balance factor. I'm using a height function that I have tested to work properly even
* on the same tree.
* Problem is; used here the height of the right subtree is just wrong.
* Height function in 9-binary_tree_height.c
* Return: Balance factor or 0 for non-existent tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor = 0, left, right;
	
	if (tree)
	{
		left = binary_tree_height(tree->left);
		printf("balance_factor :>> %d - ", left);
		right = binary_tree_height(tree->right);
		balance_factor = left - right;
		printf("%u = %d\n", right, balance_factor);
	}
	return balance_factor;
}
