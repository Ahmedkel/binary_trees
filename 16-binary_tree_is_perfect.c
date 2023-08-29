#include "binary_trees.h"

/**
 * depth - Measures the depth of a node in a binary tree
 * @node: Pointer to the node to measures the depth
 *
 * Return: The depth of the node
 */
int depth(const binary_tree_t *node)
{
	int dpt = 0;

	while (node != NULL)
	{
		dpt++;
		node = node->left;
	}
	return (dpt);
}

/**
 * is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * @dpt: Depth of the tree
 * @level: Level of the node
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int dpt, int level)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (dpt == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, dpt, level + 1) &&
			is_perfect(tree->right, dpt, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int dpt = depth(tree);

	return (is_perfect(tree, dpt, 0));
}
