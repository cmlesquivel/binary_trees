#include "binary_trees.h"

/**
 * binary_tree_height - function measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: the height
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t height_left = 0;
		size_t height_right = 0;

		if (tree->left)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}

		if (tree->right)
		{
			height_right = 1 + binary_tree_height(tree->right);
		}

		if (height_left > height_right)
		{
			return (height_left);
		}
		else
		{
			return (height_right);
		}
	}
	return (0);
}


/**
 * binary_tree_balance - that measures the balance factor of a binary tree
 * @tree:  is a pointer to the root node of the tree to get balance factor
 * Return: the balance factor
*/


int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int height_left = 0;
		int height_right = 0;

		if (tree->left)
		{
			height_left = 1 + binary_tree_height(tree->left);
		}

		if (tree->right)
		{
			height_right = 1 +  binary_tree_height(tree->right);
		}

		return (height_left - height_right);
	}
	return (0);
}
