#include "binary_trees.h"
/**
 * binary_tree_height - determine the height of binary tree
 * @tree: binary tree to determine its height
 * Return: interger denoting the height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (max(binary_tree_height(tree->left),
				binary_tree_height(tree->right)) + 1);
}
