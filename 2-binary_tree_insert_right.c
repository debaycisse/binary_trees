#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node at the right of a parent
 *
 * @parent: the parent node
 * @value: value of the new right node
 *
 * Description: inserts a noe at the right of a parent or replaces
 * and existing right node and sets the existing right node as right
 * node for the new right node.
 * Return: the pointer to the new right node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = NULL;

	if ((!new_node) || (!parent))
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->parent = parent;
	if (parent->right)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		return (new_node);
	}
	parent->right = new_node;
	return (new_node);
}
