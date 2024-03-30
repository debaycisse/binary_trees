#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect or not
 *
 * @tree: pointer to the root in a given tree
 * Return: 1 if tree is perefect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_depth = binary_tree_is_perfect(tree->left) + 1;
	if (tree->right)
		right_depth = binary_tree_is_perfect(tree->right) + 1;
	if (left_depth == right_depth)
		return (1);
	return (0);
}
