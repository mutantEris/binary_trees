#include "binary_trees.h"

/**
 * binary_tree_depth - Finds Node Depth
 * @tree: Tree Roots
 * Return: Depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count;
	binary_tree_t *point;

	if (!tree)
		return (0);
    for (count = 0, point = tree->parent; point; count++, point = point->parent)
    ;
	return (count);
}
