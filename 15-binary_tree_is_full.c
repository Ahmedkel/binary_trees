#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (tree)
	{
		if ((!tree->left && tree->right) || (tree->left && !tree->right))
			return (0);
		full = binary_tree_is_full(tree->left);
		full = binary_tree_is_full(tree->right);
	}
	return (full);
}
