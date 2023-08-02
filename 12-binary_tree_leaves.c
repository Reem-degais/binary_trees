#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree.
 * @tree: a pointer to the root node of the tree to count the number of leaves
 * Return: 0 If tree is NULL, or the leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, leaf = 0;

	if (!tree)
		return (0);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	leaf = left + right;
	if (!left && !right)
		return (leaf + 1);
	else
		return (leaf + 0);

}
