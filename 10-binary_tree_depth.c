#include "binary_trees.h"
/**
 * root_finder - finding root by iterating backwards
 * @node: Node to iterate through
 * @root: Root of node
 * Return: The found root
 */
size_t root_finder(const binary_tree_t *node, size_t root)
{
	if (node->parent == NULL)
		return (root);
	else
		return (root + root_finder(node->parent, 1));
}

/**
 * binary_tree_depth - Function to measure depth
 * of node in binary tree
 * @tree: Tree to measure
 * Return: 0 on NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	counter = root_finder(tree->parent, 1);
	return (counter);
}
