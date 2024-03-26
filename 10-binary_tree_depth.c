#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the node whose depth from it to the
 * root is to be obtained.
 *
 * Return: the number of depth or 0 if a given tree is NULL or root
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->parent)
		return (binary_tree_depth(tree->parent) + 1);
	return (0);
}
