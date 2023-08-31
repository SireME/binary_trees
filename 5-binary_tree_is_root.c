#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is a root
 * @node: node to check if it is a root
 * Return: 1 if it is a root  or 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((node) && (node->parent == NULL))
		return (1);

	return (0);
}
