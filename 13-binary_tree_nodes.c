#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Description: this function counts the number of nodes
 * that has 1 or more children.
 * Return: the total number of nodes that have 1 or more children if
 * tree is not null, otherwise 0 if tree is empty or null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);
	l = binary_tree_nodes(tree->left);
	r = binary_tree_nodes(tree->right);
	if ((tree->left) || (tree->right))
		return (l + r + 1);
	return (0);
}
