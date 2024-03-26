#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is root or not
 *
 * @node: pointer to a node that is to be checked
 *
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
