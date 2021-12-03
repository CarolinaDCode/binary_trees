#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
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
		return (left_node + right_node + 1);
	}
	return (0;
}
