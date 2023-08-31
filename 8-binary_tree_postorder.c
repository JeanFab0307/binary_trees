#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using pre-order traversal
 * @tree: the root of the tree
 * @func: a pointer to a function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	if (tree->left || tree->right)
	{
		if (tree->left)
			binary_tree_postorder(tree->left, func);
		if (tree->right)
			binary_tree_postorder(tree->right, func);
	}
	func(tree->n);
}
