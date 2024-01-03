#include "binary_trees.h"
/*
 * binary_tree_insert_left - function that inserts a node at the left child of another node
 * @parent: pointer to the node to insert the left child in
 * @value: int value to store in the new node
 * Return: pointer to the created node or Null on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	temp_node = malloc(sizeof(binary_tree_t));
	if (temp_node == NULL)
		return (NULL);
	temp_node->n = value;
	temp_node->parent = parent;
	temp_node->left = NULL;
	temp_node->right = NULL;
	
	if (parent->left != NULL)
	{
		temp_node->left = parent->left;
		temp_node->left->parent = temp_node;
	}
	parent->left = temp_node;
	return (temp_node);
}
