#include "binary_trees.h"
/**
 * binary_tree_rotate_left - function that performs left rotation
 * on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree == NULL)
		return (NULL);
	tree->parent = tree->right;
	if (tree->right->left)
	{
		tree->right = tree->parent->left;
		tree->parent->left = tree;
		return (tree->parent);
	}
	tree->right->left = tree;
	tree->right = NULL;
	return (tree->parent);
}
