#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the first node in the tree
 * Return: the total number of leaf nodes in the given tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t n = 0, m = 0;

	if (!tree)
		return (0);
	n = binary_tree_leaves(tree->left);
	m = binary_tree_leaves(tree->right);
	if ((!tree->left) && (!tree->right))
		return (1);
	return (n + m);
}
