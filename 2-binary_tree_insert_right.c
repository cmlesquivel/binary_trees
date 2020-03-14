#include "binary_trees.h"

/**
 * binary_tree_insert_right -inserts a node as the right-child of another node
 * @parent: is a pointer to the node to insert the right-child in
 * @value: is the value to store in the new node.
 * Return: a pointer to the created node.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent != NULL)
	{
		if (parent->right == NULL)
		{
			node = binary_tree_node(parent, value);
			parent->right = node;
			return (node);
		}
		else
		{
			node = binary_tree_node(parent->right, parent->right->n);
			parent->right->n = value;
			parent->right->right = node;
			return (node);
		}
	}
	else
	{
		return (NULL);
	}
}
