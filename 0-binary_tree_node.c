#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pointer to the parent node of the node to create
 * @value: The value to put in the new node
 *
 * Return: A newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	if (!node)
		return NULL;

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent)
		node->parent = parent;
	else
		node->parent = NULL;

	return node;
}
