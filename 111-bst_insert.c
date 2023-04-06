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
	{
		return NULL;
	}

	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return *tree;
	}

	if (value < (*tree)->n)
	{
		if ((*tree)->left == NULL)
		{
			(*tree)->left = binary_tree_node(*tree, value);
		}
		else
		{
			bst_insert(&(*tree)->left, value);
		}
		return (*tree)->left;
	}
	else if (value > (*tree)->n)
	{
		if ((*tree)->right == NULL)
		{
			(*tree)->right = binary_tree_node(*tree, value);
		}
		else
		{
			bst_insert(&(*tree)->right, value);
		}
		return (*tree)->right;
	}

	return NULL;
}
