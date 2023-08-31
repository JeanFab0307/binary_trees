#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: the root of the tree
 *
 * Return: Nothing
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		if (tree->left)
			leaves += binary_tree_leaves(tree->left);
		if (tree->right)
			leaves += binary_tree_leaves(tree->right);
	}
	else
	{
		leaves += 1;
	}
	return (leaves);
}
