#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 * NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	binary_tree_t *parent = node->parent;
	binary_tree_t *grand_parent = parent->parent;

	if (grand_parent->left == parent && grand_parent->right)
		return (grand_parent->right);
	else if (grand_parent->right == parent && grand_parent->left)
		return (grand_parent->left);
	else
		return (NULL);
}
