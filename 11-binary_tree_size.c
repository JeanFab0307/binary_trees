#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: the root of the tree
 *
 * Return: Nothing
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t res = 0;

	if (!tree)
		return (0);

	res += 1;
	if (tree->left || tree->right)
	{
		if (tree->left)
			res += binary_tree_size(tree->left);
		if (tree->right)
			res += binary_tree_size(tree->right);
	}
	return (res);
}
