#include "binary_trees.h"
/**
 * binary_tree_preorder - go though a binary tree
 * using preorder traversal
 * @tree: binary tree to traverse
 * @func: function to a pointer to call for each node
 * Return: nada
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* run function on current root*/
	func(tree->n);

	/* traverse to left node*/
	binary_tree_preorder(tree->left, func);

	/* traverse to right node*/
	binary_tree_preorder(tree->right, func);
}
