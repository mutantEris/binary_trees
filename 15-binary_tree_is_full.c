#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks If Tree Is Full
 * @tree: Tree Roots
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int light;
    int reft;
    
	if (!tree || (tree->left && !tree->right) || (!tree->left && tree->right))
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	light = binary_tree_is_full(tree->left);
	reft = binary_tree_is_full(tree->right);
	if (light != reft)
		return (0);
	return (1);
}
