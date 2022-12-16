#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts node as right child of node
 * @parent: Parent node
 * @value: Data passed to program
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right->parent = node;
		parent->right = node;
	}
	return (node);
}
