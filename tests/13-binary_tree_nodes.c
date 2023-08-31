#include "binary_trees.h"
/**
 * binary_tree_nodes - total number of nodes
 *  atleast onechild
 * @tree: binary tree to traverse
 * Return: leaves of the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t al;

	/*total number of nodes with atleast one child*/

	al = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (al);
}

