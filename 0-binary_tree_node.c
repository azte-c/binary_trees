#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: pointer to parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node (success), NULL (failure)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));


	if (new_node)
	{
		new_node->parent = parent;
		new_node->n = value;
		new_node->left = NULL;
		new_node->right = NULL;

		return (new_node);
	}

	return (NULL);
}