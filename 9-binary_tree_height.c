#include "binary_trees.h"
/**
 * binary_tree_height - Function to check binary tree's
 * height
 * @tree: pointer to binary tree
 * Return: Void
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_1;
	size_t height_2;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_1 = binary_tree_height(tree->left) + 1;
	height_2 = binary_tree_height(tree->right) + 1;

	if (height_1 > height_2)
		return (height_1);
	else
		return (height_2);
}
