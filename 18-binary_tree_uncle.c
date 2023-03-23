#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * @node: Pointer to the node to find the sibling of
 *
 * Return: pointer to sibling node, or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != node)
		return (node->parent->left);
	return (node->parent->right);
}

/**
 * binary_tree_uncle - finds the uncle of a given node
 * @node: Pointer to the node to find the uncle
 *
 * Return: pointer to uncle node, or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
