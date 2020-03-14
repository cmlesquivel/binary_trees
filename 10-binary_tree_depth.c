#include "binary_trees.h"

/**
 * binary_tree_depth - funct that measures the depth of a node in a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the depth
 * Return: the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t depth = 0;

		if (tree->parent)
		{
			depth = 1 + binary_tree_depth(tree->parent);
		}
		return (depth);
	}
	return (0);
}
