#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node);
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 * Or NULL if node is NULL or parent is NULL or node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par;

	if (!node || !node->parent)
		return (NULL);

	par = node->parent;
	return (binary_tree_sibling(par));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * Or NULL if node is NULL or parent is NULL or node has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *par;

	if (!node || !node->parent)
		return (NULL);

	par = node->parent;
	if (par->left != node)
		return (par->left);
	else
		return (par->right);
}
