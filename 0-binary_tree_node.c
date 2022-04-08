#include "binary_trees.h"

/**
 * binary_tree_node - Makes Binary Tree Node
 * @parent: Parent Node
 * @value: Value
 * Return: New Node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent && parent->left && parent->right)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (!parent)
	{
		node->parent = NULL; }
	else
	{
		node->parent = parent;
		if (!parent->left)
			parent->left = node;
		else
			parent->right = node;
	}
	return (node);
}
