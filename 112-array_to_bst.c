#include "binary_trees.h"
/**
 * array_to_bst - Makes bst With Array
 * @array: Array Pointer
 * @size: Array Hugeness
 * Return: bst Or Null
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *tree = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&tree, array[i]);
	return (tree);
}
