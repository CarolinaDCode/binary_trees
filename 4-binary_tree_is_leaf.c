#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node es a lef, or 0 if node es NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
		if (node != NULL)
		{
			if (node->right == NULL && node->left == NULL)
			{
				return (1);
			}
		}
		return (0);
}
