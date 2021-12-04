#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int right_node = 0;
	int left_node = 0;

	if (tree != NULL)
	{
		left_node = binary_tree_size(tree->left);
		right_node = binary_tree_size(tree->right);
		return (right_node + left_node + 1);
	}
	return (0);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int right_node = 0;
	int left_node = 0;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
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
	return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_node = 0;
	int right_node = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL || tree->right == NULL)
		return (1);

	left_node = binary_tree_size(tree->left);
	right_node = binary_tree_size(tree->right);

	if ((binary_tree_height(tree)) && (left_node == right_node))
		return (1);

	return (0);
}
