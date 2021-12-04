#include "binary_trees.h"
/**
 * binary_tree_size - function tha measures the size of a binary tree
 * @tree: pointer to the root node to measure the size
 * Return: if tree is null must return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_l;
	int size_r;

	if (tree == NULL)
		return (0);

	size_l = 0;
	size_r = 0;

	size_r = binary_tree_size(tree->right) + 1;
	size_l = binary_tree_size(tree->left);
	return (size_l + size_r);
}

/**
 * is_complete - recursively checks if binary tree is complete
 * @tree: pointer to thr root of thr tree
 * @index: index of every node
 * @size: size of tree
 * Return: 1 if complete, 0 otherwise
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (tree == NULL)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, size) &&
	       is_complete(tree->right, 2 * index + 2, size));
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: pointer to the root node of thr tree to check
 * Return: 0 if tree is null
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));
}
