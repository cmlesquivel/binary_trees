#include "binary_trees.h"

/**
 * binary_tree_height_ - function measures the height of a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the height
 * Return: the height
*/

int binary_tree_height_(const binary_tree_t *tree)
{
	if (tree)
	{
		int height_left = 0;
		int height_right = 0;


		if (tree->left)
		{
			height_left = 1 + binary_tree_height_(tree->left);
		}

		if (tree->right)
		{
			height_right = 1 + binary_tree_height_(tree->right);
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
 * my_pow - return pow of the number power to number
 * @height:  is the power number
 * Return: the pow
*/


int my_pow(int height)
{
	int res = 1;
	int base = 2;
	int i = 0;

	for (i = 0; i < height; i++)
	{
		res = base * res;
	}
	return (res);
}

/**
 * binary_tree_leaves_ - function that counts the leaves in a binary tree
 * @tree:  is a pointer to the root node of the tree to measure the leaves
 * Return: the numbers the leaves
*/

size_t binary_tree_leaves_(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (binary_tree_leaves_(tree->left) +
				binary_tree_leaves_(tree->right));
		}
	}
	return (0);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 * Return: 1 if the tree is perfect another 0
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		int leaves = 0;
		int height = 0;
		int perfect = 0;

		leaves = binary_tree_leaves_(tree);
		height = binary_tree_height_(tree);
		perfect = my_pow(height);

		if (leaves == perfect)
			return (1);
		else
			return (0);
	}
	return (0);
}
