#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the node with at least 1 child
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of nodes with at least 1 child
 * 0 if tree in NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		left_nodes = binary_tree_nodes(tree->left);
		right_nodes = binary_tree_nodes(tree->right);
		return (1 + left_nodes + right_nodes);
	}
	else
		return (0);
}
