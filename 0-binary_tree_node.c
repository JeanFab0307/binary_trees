#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node: creates a binary tree node
 * @parent: a pointer to the parent of the node to create
 * @value: the value
 *
 * Return: a pointer to the new node
 * Or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = NULL;
	new->left = NULL;
	new->right = NULL;

	if (parent)
		new->parent = parent;
	else
		return (new);

	if (!parent->left)
		parent->left = new;
	else if (!parent->right)
		parent->right = new;
	else
		return (NULL);
	return (new);
		
}
