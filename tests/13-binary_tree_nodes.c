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

/**
 * binary_tree_leaves - count leaf nodes
 * traversing through it with postorder
 * @tree: binary tree to traverse
 * Return: leaves of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	/* traverse to left node and accumulate size */
	count += binary_tree_leaves(tree->left);

	/* traverse to right node and accumulate size */
	count += binary_tree_leaves(tree->right);

	/* count the current root node if it is a leaf */
	if (tree->left == NULL && tree->right == NULL)
		count++;

	return (count);
}

