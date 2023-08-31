#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: the root of the tree
 *
 * Return: Nothing
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		if (tree->left)
			left = binary_tree_balance(tree->left) + 1;
		if (tree->right)
			right = binary_tree_balance(tree->right) + 1;
	}
	return (left - right);
}
