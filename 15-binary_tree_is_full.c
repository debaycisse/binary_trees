#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a given binary tree is full
 *
 * @tree: pointer to root of the given tree
 * Return: 1 if tree is a full binary tree, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	if ((!tree->left) && (!tree->right))
		return (1);
	if ((tree->left) && (tree->right))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);
		if (left && right)
			return (1);
		return (0);
	}
	return (0);
}
