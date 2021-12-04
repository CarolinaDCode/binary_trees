#include "binary_trees.h"
/**
 * binary_tree_rotate_right - function that performs left rotation
 * on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->left;
	if (tree->left->right)
	{
		tree->left = tree->left->right;
		tree->left->parent = tree;
		tree->parent->right = tree;
		return (tree->parent);
	}
	tree->left->right = tree;
	tree->left = NULL;
	return (tree->parent);
}
