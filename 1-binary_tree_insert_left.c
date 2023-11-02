#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node in the left-child
* @parent : ptr to the parent node
* @value : node value
* Return: pointer to the created node and NULL if failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = node;
		node->left = parent->left;
	}
	parent->left = node;

	return (node);
}
