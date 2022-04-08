#include "binary_trees.h"

/**
 * binary_tree_sibling - Node Sibling Finder
 * @node: Node
 * Return: Sibling Pointer
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *point;

	if (node == NULL || !node->parent)
		return (NULL);
	point = node->parent;
	if (point->left == node)
		return (point->right);
	return (point->left);
}
