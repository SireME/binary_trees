#include "binary_trees.h"
/**
 * binary_tree_inorder - go though a binary tree
 * using inorder traversa
 * @tree: binary tree to traverse
 * @func: function to a pointer to call for each node
 * Return: nada
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* traverse to left node*/
	binary_tree_inorder(tree->left, func);

	/* run function on current root*/
	func(tree->n);

	/* traverse to right node*/
	binary_tree_inorder(tree->right, func);
}
