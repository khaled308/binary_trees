#include "binary_trees.h"
/**
 * binary_tree_leaves - count leaves in binary tree
 * @tree: Binary tree to count in
 * Return: Leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_1 = 0;
	size_t leaves_2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL)
		leaves_1 = binary_tree_leaves(tree->left);
	if (tree->right != NULL)
		leaves_2 = binary_tree_leaves(tree->right);

	return (leaves_1 + leaves_2);
}
