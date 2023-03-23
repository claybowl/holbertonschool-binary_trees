#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: value to be stored in the new node
 *
 * Description: If `parent` already has a right-child, the new node must take
 * its place, and the old right-child must be set as the right-child of the new
 * node
 *
 * Return: pointer to the newly created node, or NULL on failure or if parent
 * is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}

	else if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->right->parent = new;
		return (new);
	}
}
