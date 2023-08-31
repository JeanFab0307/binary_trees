#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: the root of the tree
 *
 * Return: the balance factor on success or 0 if tree is NULL
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
			left = binary_tree_height(tree->left);
		else
			left = -1;
		if (tree->right)
			right = binary_tree_height(tree->right);
		else
			right = -1;
	}
	return (left - right);
}

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: the root of the tree
 *
 * Return: the tree height or 0 if tree is NULL
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
