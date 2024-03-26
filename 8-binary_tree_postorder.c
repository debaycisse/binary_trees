#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree in a postorder form
 *
 * @tree: pointer to the root of the tree
 * @func: pointer to the function that is ran on each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if ((tree) && (func))
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
