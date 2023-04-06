#include "binary_trees.h"
#include <limits.h>

/**
 * bst_insert - Inserts a value in a Binary Search Tree
 *
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: success: pointer to the created node, failure: NULL
 */
bst_t *bst_insert(bst_t **tree, int value)

{

	if (tree == NULL)
		return (NULL);

	if (*tree == NULL)
		return (*tree = binary_tree_node(NULL, value));

	if (value < (*tree)->n)
		return (bst_insert(&(*tree)->left, value));

	if (value > (*tree)->n)

		return (bst_insert(&(*tree)->right, value));
	return (NULL);
}