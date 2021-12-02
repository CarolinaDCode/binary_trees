#include "binary_trees.h"
/**
* binary_tree insert_left - insert a node as the left child of another node
* @parent: ptr to parent of node to create
* @value: to insert in new node
* Return: pointer to new node or NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = NULL;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);

    if (new_node != NULL)
    {
        if (parent->left != NULL)
        {
            new_node->left = parent->left;
            parent->left = new_node;
            new_node->left->parent = new_node;
        }
            parent->left = new_node;
            return (new_node);
    }    

    return (NULL);
}
