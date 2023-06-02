#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another
 * @parent: Pointer to insert the right child in
 * @value: The value to store in the new node
 *
 * Return: The pointer to the created node
 * NULL on failure
 * NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node || !parent)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		parent->right = new_node;
	}
	else
	{
		new_node->right = NULL;
		parent->right = new_node;
	}

	return (new_node);
}
