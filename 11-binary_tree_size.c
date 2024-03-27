#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a given tree
 *
 * @tree: the pointer to the root of a given tree
 * Description: the size of a tree is the addition of
 * the number of nodes on both left and right plus 1
 * Return: the size of a given tree or 0, if tree is empty
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_sub = 0, right_sub = 0;

	if (!tree)
		return (0);
	left_sub = binary_tree_size(tree->left);
	right_sub = binary_tree_size(tree->right);
	return (left_sub + 1 + right_sub);
}
