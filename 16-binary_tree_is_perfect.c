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

/**
 *binary_tree_is_perfect - Function to check if tree is perfect
 *@tree: Binary tree to check
 *Return: 1 if binary tree is perfect, 0 if tree is NULL or if not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
