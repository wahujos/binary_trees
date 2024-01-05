#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: if tree is null return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
	{
		return (0);
	}
	height = binary_height(tree);
	if (height == -1)
	{
		return (0);
	}
	return (is_perfect_recursive(tree, 0, height));
}
/**
 * binary_height - gets the height of the binary tree
 * @tree: pointer to the binary tree
 * Return: height in integer
 */
int binary_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (-1);
	}
	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
 * is_perfect_recursive - recursively checks the binary tree
 * @tree: pointer
 * @level: level in the tree
 * @height: height of the tree
 * Return: integer
 */
int is_perfect_recursive(const binary_tree_t *tree, int level, int height)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (level == height - 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, level + 1, height) &&
			is_perfect_recursive(tree->right, level + 1, height));
}
