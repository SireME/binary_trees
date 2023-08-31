#include "binary_trees.h"
/**
 * binary_tree_height - determine the height of binary tree
 * @tree: binary tree to determine its height
 * Return: interger denoting the height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	/*when we reach the leaf  node*/
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return (right_height + 1);
}

