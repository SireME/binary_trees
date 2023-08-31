#include "binary_trees.h"
/**
 * binary_tree_depth - determine the depth of a
 * node in a  binary tree
 * @tree: binary tree to determine its height
 * Return: interger denoting the depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
		return (0);

	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

	if (left_depth > right_depth)
		return (left_depth - 1);

	/*when we reach the leaf  node*/
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (right_depth - 1);
}

