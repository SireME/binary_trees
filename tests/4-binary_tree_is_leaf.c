#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node to check if it is a leaf
 * Return: 1 if it is a leaf or 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node) && (node->left == NULL) && (node->right == NULL))
		return (1);

	return (0);
}
