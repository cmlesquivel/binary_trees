#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 * Return: the pointer of sibling node
*/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
	{
		int value_node = 0;
		int value_parent = 0;

		if (!node->parent)
			return (NULL);

		value_node = node->n;
		value_parent = node->parent->n;

		if (value_node > value_parent)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
	return (NULL);
}
