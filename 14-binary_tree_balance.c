#include "binary_trees.h"

/**
 * binary_tree_height_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 If tree is NULL, or the height.
 */
size_t binary_tree_height_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_balance(tree->right);

	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 If tree is NULL, or the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height_balance(tree->left);
	if (tree->right)
		right = 1 + binary_tree_height_balance(tree->right);
	return (left - right);
}
