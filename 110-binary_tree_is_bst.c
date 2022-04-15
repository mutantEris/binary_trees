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
