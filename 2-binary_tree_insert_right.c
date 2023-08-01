#include "binary_trees.h"

/**
 * binary_tree_insert_right -  inserts a node as the right-child.
 * @parent: a pointer to the node to insert the right-child in.
 * @value:  the value to store in the new node.
 * Return: a pointer to the newnode, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (!parent)
		return (NULL);
	new_right = binary_tree_node(parent, value);
	if (!new_right)
		return (NULL);
	if (parent->right != NULL)
	{
		new_right->right = parent->right;
		parent->right->parent = new_right;
	}
	parent->right = new_right;
	return (new_right);
}
