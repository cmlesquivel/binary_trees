#include "binary_trees.h"

/**
 * binary_tree_size - funct that measures the size of binary tree
 * @tree:  is a pointer to the root node of the tree to measure the size
 * Return: the size
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
	}
	return (0);
}
