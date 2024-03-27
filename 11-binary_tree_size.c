#include "binary_trees.h"

/**
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	binary_tree_size(tree->left);
	binary_tree_size(tree->right);
	if (tree)
	{
		if (tree->left)
			return (1 + binary_tree_size(tree->left));
		return (1 + binary_tree_size(tree->right));
	}
	return (0);
}
