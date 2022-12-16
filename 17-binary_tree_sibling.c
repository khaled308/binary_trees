#include "binary_trees.h"
/**
 *binary_tree_sibling - Finds the sibling of a given node
 *@node: node to search
 *Return: Sibling node pointer or node on NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->left == node)
		return (parent->right);
	else
		return (parent->left);
}
