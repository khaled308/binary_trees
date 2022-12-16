#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function to insert a node
 * as the left child of parent
 * @parent: Pointer to parent of binary tree
 * @value: Values to set
 * Return: Pointer to created node or NULL on fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
