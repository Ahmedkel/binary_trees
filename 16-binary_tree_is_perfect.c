#include "binary_trees.h"
int depth_helper(const binary_tree_t *tree);

/**
 * result - Checks if a binary tree is perfect.
 *
 * @depth: Depth of the binary tree.
 * @tree: A pointer to the root node of the tree to check.
 * @level: Current level in the binary tree.
 *
 * Return: 1 if the binary tree is perfect, 0 otherwise.
 */
int result(int depth, const binary_tree_t *tree, int level)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		if (level == depth || level == depth - 1)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (result(depth, tree->left, level + 1)
	&& result(depth, tree->right, level + 1));
}

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->left == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->left));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth, level = 0;

	if (!tree)
		return (0);

	depth = binary_tree_depth(tree);

	return (result(depth, tree, level));
}

/**
 * depth_helper - Helper for the count the depth.
 *
 * @tree: A variable to count the depth.
 *
 * Return: 0 if tree is NULL.
 */
int depth_helper(const binary_tree_t *tree)
{
	int dpt = 0;

	while (tree->left)
	{
		tree = tree->left;
		dpt++;
	}
	return (0);
}
