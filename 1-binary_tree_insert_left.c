#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another
 * @parent: Pointer to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: The pointer to the created node
 * NULL on failure
 * NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
		parent->left = new_node;
	}
	else
	{
		new_node->left = NULL;
		parent->left = new_node;
	}

	return (new_node);
}
