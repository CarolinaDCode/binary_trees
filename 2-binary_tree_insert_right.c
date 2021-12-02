#include "binary_trees.h"
/**
 * binary_tree_insert_right - add node as right child m'dude
 * @parent: the parent of the node to be born
 * @value: the value to put in there
 * Return: return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

	if (parent == NULL)
	return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node != NULL)
	{
		if (parent->right != NULL)
		{
			new_node->right = parent->right;
			parent->right = new_node;
			new_node->right->parent = new_node;
		}
			parent->right = new_node;
			return (new_node);
	}
	return (NULL);
}