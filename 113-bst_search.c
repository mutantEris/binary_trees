#include "binary_trees.h"

/**
 * bst_search - bst Value
 * @tree: Tree Roots
 * @value: Value
 * Return: Pointer To Node
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (!tree)
		return (NULL);
	if (tree->n == value)
		return ((bst_t *)tree);
	if (tree->n > value)
		return (bst_search(tree->left, value));
	if (tree->n < value)
		return (bst_search(tree->right, value));
	return (NULL);
}
