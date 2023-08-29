#include "binary_trees.h"

/**
 * is_full - is it full
 *
 * @tree: the tree to check
 *
 * Return: 1 or 0
*/
int is_full(const binary_tree_t *tree)
{
	if (tree && ((!tree->left && tree->right) || (tree->left && !tree->right)
	|| !is_full(tree->left) || !is_full(tree->right)))
		return (0);
	return (1);
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
	int full = 0;

	if (tree)
		full = is_full(tree);
	return (full);
}
