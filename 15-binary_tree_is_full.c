#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - checkif a binary tree is full
 * @tree: the root of the tree
 *
 * Return: 1 if tree is full else 0 or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int res = 1;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		if (tree->left)
			res *= binary_tree_is_full(tree->left);
		if (tree->right)
			res *= binary_tree_is_full(tree->right);
		return (res);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}
