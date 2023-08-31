#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checkif a binary tree is perfect
 * @tree: the root of the tree
 *
 * Return: 1 if tree is perfect else 0 or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 1;
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);

	if (tree->left && tree->right)
	{
		if (tree->left)
			res *= binary_tree_is_perfect(tree->left);
		if (tree->right)
			res *= binary_tree_is_perfect(tree->right);
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		if (left == right)
			res *= 1;
		else
			res *= 0;
		return (res);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	return (0);
}

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
