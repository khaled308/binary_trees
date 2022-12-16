#include "binary_trees.h"
/**
 * binary_tree_is_root - Function to check if binary tree
 * is root
 * @node: Node to check
 * Return: 1 if root, 0 otherwise or if NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
