#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds for the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest ancestor/ null if no ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
					const binary_tree_t *second)
{
	binary_tree_t *temp1;

	if (first == NULL || second == NULL)
		return (NULL);
		temp1 = (binary_tree_t *)second;
		while (first)
		{
			while (second)
			{
				if (first == second)
					return ((binary_tree_t *)first);
			second = second->parent;
			}
			first = first->parent;
			second = temp1;
		}
	return (NULL);
}
