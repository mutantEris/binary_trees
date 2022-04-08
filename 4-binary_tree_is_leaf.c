#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if Node Is Leaf
 * @node: Node
 * Return: 1 or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->left || node->right)
		return (0);
	return (1);
}
