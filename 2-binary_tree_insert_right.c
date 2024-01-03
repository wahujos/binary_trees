#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function that inserts a node
 * as the right-child of another node
 * @parent: a pointer to the node to insert the right-child in
 * @value: int value to store on the new node
 * Return: pointer to the created node or NULL incse of failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp_node = malloc(sizeof(binary_tree_t));
	if (temp_node == NULL)
	{
		return (NULL);
	}
	temp_node->n = value;
	temp_node->parent = parent;
	temp_node->left = NULL;
	temp_node->right = NULL;

	if (parent->right != NULL)
	{
		temp_node->right = parent->right;
		temp_node->right->parent = temp_node;
	}
	parent->right = temp_node;
	return (temp_node);
}
