#include "binary_trees.h"

/**
 * binary_tree_insert_left -inserts a node as the left-child of another node
 * @parent: is a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node.
 * Return: a pointer to the created node.
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent != NULL)
	{
		if (parent->left == NULL)
		{
			node = binary_tree_node(parent, value);
			parent->left = node;
			return (node);
		}
		else
		{
			node = binary_tree_node(parent->left, parent->left->n);
			parent->left->n = value;
			parent->left->left = node;
			return (node);
		}
	}
	else
	{
		return (NULL);
	}
}
