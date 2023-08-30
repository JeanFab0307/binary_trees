#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the parent of the node to create
 * @value: the value
 *
 * Return: a pointer to the new node
 * Or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	new = malloc(sizeof(binary_tree_t));
	if (!new || !parent)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		tmp = parent->left;
		new->left = tmp;
		parent->left = new;
		tmp->parent = new;
	}
	return (new);
}
