#include "binary_trees.h"

/**
 * binary_tree_uncle -  finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: a pointer to the uncle node.
 */
binary_tree_t *search_for_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = NULL;

	if (!node || !(node->parent))
		return (NULL);
	grand = node->parent;
	if (grand->left && (grand->left != node))
		return (grand->left);
	else if (grand->right && (grand->right != node))
		return (grand->right);
	return (NULL);
}

/**
 * binary_tree_uncle -  finds the uncle of a node.
 * @node: a pointer to the node to find the uncle.
 * Return: a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	return (search_for_uncle(node->parent));
}
