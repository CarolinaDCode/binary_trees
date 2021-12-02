#include "binary_trees.h"
/**
 * binary_tree_delete - deletes entire tree
 * @tree: is a pointer to the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
