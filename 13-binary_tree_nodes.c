#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes in a binary tree
 * @tree:  is a pointer to the root node of the tree to count
 * Return: the numbers the nodes
*/


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree)
	{
		if (tree->left)
		{
			return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
		}
		if (tree->right)
		{
			return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
		}
		else
		{
			return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right));
		}
	}
	return (0);
}
