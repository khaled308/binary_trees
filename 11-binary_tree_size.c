#include "binary_trees.h"
/**
 * sub_count - count number of nodes in subtree
 * @tree: pointer to root node
 * @count: number of nodes
 * Return: Number of nodes in subtree
 */
size_t sub_count(const binary_tree_t *tree, size_t count)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		count += sub_count(tree->left, 1);
	if (tree->right != NULL)
		count += sub_count(tree->right, 1);
	return (count);
}
/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node
 * Return: if tree is NULL return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		number = sub_count(tree->left, 1);
	if (tree->right != NULL)
		number += sub_count(tree->right, 1);

	return (number + 1);
}
