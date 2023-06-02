#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 * NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;

	if (node == parent->left && parent->right)
		return (parent->right);
	else if (node == parent->right && parent->left)
		return (parent->left);
	else
		return (NULL);
}
