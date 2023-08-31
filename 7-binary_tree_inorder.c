#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary tree using pre-order traversal
 * @tree: the root of the tree
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left || tree->right)
	{
		if (tree->left)
			binary_tree_inorder(tree->left, func);
		func(tree->n);
		if (tree->right)
			binary_tree_inorder(tree->right, func);
	}
	else
	{
		func(tree->n);
	}
}