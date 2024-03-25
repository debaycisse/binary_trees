#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left of a parent
 *
 * @parent: the parent node
 * @value: value of the new left node
 *
 * Description: inserts a node at the left of a parent or replaces
 * an existing left node and sets the existing left node as a left
 * node for the new left node.
 * Return: the pointer to the new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = NULL;

	if (!new_node)
		return (NULL);
	if (!parent)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->left)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		return (new_node);
	}
	parent->left = new_node;
	return (new_node);
}
