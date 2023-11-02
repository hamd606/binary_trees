#include "binary_trees.h"
/**
* binary_tree_node - creates a binary tree node
* @parent : ptr to the parent node of the node to be created
* @value : node value
* Return: ptr to the created node and NULL if failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}
