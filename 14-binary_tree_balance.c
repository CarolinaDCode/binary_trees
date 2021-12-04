#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the
 * tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_node;
	int left_node;

	if (tree == NULL)
		return (0);

	left_node = binary_tree_height(tree->left);
	right_node = binary_tree_height(tree->right);

	if (left_node > right_node)
	{
		return (left_node + 1);
	}
	else
	{
		return (right_node + 1);
	}
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node
 * of the tree to measure the balance factor
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_node;
	int right_node;

	if (tree != NULL)
	{
		left_node = binary_tree_height(tree->left);
		right_node = binary_tree_height(tree->right);
		return (left_node - right_node);
	}
	return (0);
}
