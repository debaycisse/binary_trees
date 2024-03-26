#include "binary_trees.h"

/**
 * binary_tree_node - it creates a binary tree node
 *
 * @parent: the parent node for the new node, about to be created
 * @value: the integer value for the new node
 *
 * Return: pointer to the just created node or NULL, if failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent == NULL)
	{
		new_node->parent = NULL;
		return (new_node);
	}
	new_node->parent = parent;
	return (new_node);
}
