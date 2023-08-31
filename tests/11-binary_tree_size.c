#include "binary_trees.h"
/**
 * binary_tree_size - Determine the size of a tree
 * traversing through it with inorder
 * @tree: binary tree to traverse
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	/* traverse to left node and accumulate size */
	size += binary_tree_size(tree->left);

	/* traverse to right node and accumulate size */
	size += binary_tree_size(tree->right);

	/* count the current root node */
	size++;

	return (size);
}

