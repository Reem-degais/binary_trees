#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a node as the left-child.
 * @parent: a pointer to the node to insert the left-child in.
 * @value: the value to store in the new node.
 * Return: a pointer to the a nwe node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	if (!parent)
		return (NULL);
	new_left = binary_tree_node(parent, value);
	if (!new_left)
		return (NULL);
	if (parent->left != NULL)
	{
		new_left->left = parent->left;
		parent->left->parent = new_left;
	}
	parent->left = new_left;
	return (new_left);
}
