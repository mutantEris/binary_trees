#include "binary_trees.h"

/**
 * binary_tree_height - Returns Tree Height
 * @tree: Trees Roots
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left = 0;
    size_t right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height(tree->right);
	return (left > right ? left : right);
}
