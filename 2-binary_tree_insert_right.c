#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to created node(suceess), NULL if parent is NULL(failure)
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent)
	{
		binary_tree_t *new = binary_tree_node(parent, value);

		if (!new)
			return (NULL);

		if (parent->right)
		{
			new->right = parent->right;
			new->right->parent = new;
		}

		parent->right = new;

		return (new);
	}

	return (NULL);
}
