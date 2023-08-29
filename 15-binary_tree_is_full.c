#include "binary_trees.h"

/**
 * full - is it full
 *
 * @tree: the tree to check
 *
 * Return: 1 or 0
*/
int is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (tree)
	{
		if ((!tree->left && tree->right) || (tree->left && !tree->right))
			return (0);
		full = is_full(tree->left);
		full = is_full(tree->right);
	}
	return (full);
}

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
		full = is_full(tree);
	return (full);
}
