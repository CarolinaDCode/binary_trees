#include "binary_trees.h"
/**
 * binary_tree_depth - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int parent_node = 0;

	if (tree != NULL)
	{
		if (tree->parent == NULL)
			return (0);

		parent_node = binary_tree_depth(tree->parent);

		return (parent_node + 1);
	}
	return (0);
}
