#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: A pointer to the node to find the uncle.
 *
 * Return: NULL if node is NULL or node has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);
	return (node->parent->parent->right == node->parent ?
	node->parent->parent->left : node->parent->parent->right);
}

