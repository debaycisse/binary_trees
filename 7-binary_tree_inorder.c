#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses a binary via an inorder traversal
 *
 * @tree: pointer to the root of the tree
 * @func: pointer to the function the prints each node's value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
