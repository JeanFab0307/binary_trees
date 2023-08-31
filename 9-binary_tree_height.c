#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: the root of the tree
 *
 * Return: Nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		if (tree->left)
			left = binary_tree_height(tree->left) + 1;
		if (tree->right)
			right = binary_tree_height(tree->right) + 1;
	}
	if (left > right)
		return (left);
	return (right);
}
