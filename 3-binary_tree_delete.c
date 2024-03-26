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
	if (tree)
	{
		// delete left all
		binary_tree_delete(tree->left);
		// delete right all
		binary_tree_delete(tree->right);
		// delete root
		free(tree);
	}
}
