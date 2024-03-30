#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * @node: pointer to the node whose sibling is to be found
 * Return: pointer to the found sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL, *parent = node->parent;

	if (!node || !parent)
		return (NULL);
	if ((node == parent->left) && (parent->right))
		sibling = parent->right;
	if ((node == parent->right) && (parent->left))
		sibling = parent->left;
	return (sibling);
}
