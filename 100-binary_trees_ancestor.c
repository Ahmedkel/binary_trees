#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}



/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	int dp1 = binary_tree_depth(first);
	int dp2 = binary_tree_depth(second);

	while (dp1 != dp2)
	{
		if (dp1 > dp2)
		{
			first = first->parent;
			dp1--;
		}
		else
		{
			second = second->parent;
			dp2--;
		}
	}
	while (second != first)
	{
		second = second->parent;
		first = first->parent;
	}
	return ((binary_tree_t *)second);
}
