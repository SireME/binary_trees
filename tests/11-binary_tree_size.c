#include "binary_trees.h"
/**
 * binary_tree_size - Determine the size of a tree
 * traversing through it with iorder
 * @tree: binary tree to traverse
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL || func == NULL)
		return (0);

	/* traverse to left node*/
	binary_tree_size(tree->left);

	/* run function on current root*/
	size++;

	/* traverse to right node*/
	binary_tree_size(tree->right, func);

	return (size);
}
