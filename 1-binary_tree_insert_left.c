#include "binary_trees.h"

/**
 * binary_tree_insert_left - Left Child Binary Node
 * @parent: Parent Node
 * @value: Value
 * Return: New Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t * node;

	if (!parent)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (! node)
		return (NULL);
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->left)
	{
	    node->left = parent->left;
	    parent->left->parent = node;
	}
	parent->left = node;
	return (node);
}
