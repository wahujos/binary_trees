#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: interger value to put in the new node
 * Return: pointer to the new node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node;

	temp_node = malloc(sizeof(binary_tree_t));
	if (temp_node == NULL)
	{
		return (NULL);
	}
	temp_node->parent = parent;
	temp_node->left = NULL;
	temp_node->right = NULL;
	temp_node->n = value;
	return (temp_node);
}
