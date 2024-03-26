#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: pointer to the beginning of the tree
 *
 * Description: deletes an entire tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_node = NULL;

	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		if (tree->parent)
		{
			left_node = tree->parent->left;
			if (left_node == tree)
				tree->parent->left = NULL;
			else
				tree->parent->right = NULL;
		}
		free(tree);
	}
}
