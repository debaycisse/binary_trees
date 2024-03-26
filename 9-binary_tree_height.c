#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: pointer to the root of the tree
 * Return: 0, if tree is NULL, otherwise, number of edges in a tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else if (tree->left)
		return (binary_tree_height(tree->left) + 1);
	else if (tree->right)
		return (binary_tree_height(tree->right) + 1);
	return (0);
}
