#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * Return: if tree is null return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	left_height = 0;
	right_height = 0;
	if (!tree)
		return (0);
	if (!(tree->right) && !(tree->left))
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	if (right_height > left_height)
		return (right_height);
	return (left_height);
}

/**
 * levelorder - recursively perform a function on a binary tree
 * in order to traverse it using level order
 * @tree: tree
 * @i: index of level
 * @func: function to perform
 */
void levelorder(const binary_tree_t *tree, size_t i, void(*func)(int))
{

	if (i == 1)
		func(tree->n);
	else if (i > 1)
	{
		levelorder(tree->left, i - 1, func);
		levelorder(tree->right, i - 1, func);
	}
	else
		return;
}

/**
 * binary_tree_levelorder - function goes trough a binary
 * tree using level order traversal
 * @tree: pointer to the root node
 * @func: pointer to a function to call each node
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, h;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (i = 0; i <= h + 1; i++)
		levelorder(tree, i, func);
}
