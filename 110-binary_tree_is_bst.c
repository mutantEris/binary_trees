#include "binary_trees.h"
#include <limits.h>

/**
 * binary_tree_is_bst - Determines Search Treeness
 * @tree: Tree Root Pointer
 * Return: 1 if tree is bst otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (bstHelper(tree, INT_MIN, INT_MAX));
}

/**
 * bstHelper - Is it bts?
 * @node: Node
 * @min: Minimum
 * @max: Maximum
 * Return: 1 Or 0
 */

int bstHelper(const binary_tree_t *node, int min, int max)
{
	if (!node)
		return (1);
	if (node == NULL)
		return (1);
	if (node->n < min || node->n > max)
		return (0);
	return (bstHelper(node->left, min, node->n - 1)
		&& bstHelper(node->right, node->n + 1, max));
}