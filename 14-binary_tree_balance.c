#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: interger value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	left_height = height_of_tree(tree->left);
	right_height = height_of_tree(tree->right);

	return (left_height - right_height);

}
/**
 * height_of_tree - checks height of the tree
 * @tree: Pointer to the node
 * Return: height
 */
int height_of_tree(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		left_h = height_of_tree(tree->left);
		right_h = height_of_tree(tree->right);
	}
	return (1 + (left_h > right_h ? left_h : right_h));
}
