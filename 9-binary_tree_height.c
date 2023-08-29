#include "binary_trees.h"
/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree)
	{
		left = tree->left ? 1 + binary_tree_height(tree->left) : left;
		right = tree->right ? 1 + binary_tree_height(tree->right) : right;
		return (left > right ? left : right);
	}
	return (0);
}

