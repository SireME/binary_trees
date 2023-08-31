#include "binary_trees.h"
/**
 * binary_tree_postorder - go though a binary tree
 * using postorder traversal
 * @tree: binary tree to traverse
 * @func: function to a pointer to call for each node
 * Return: nada
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse to left node*/
	binary_tree_postorder(tree->left, func);

	/* traverse to right node*/
	binary_tree_postorder(tree->right, func);

	/* run function on current root*/
	func(tree->n);
}
