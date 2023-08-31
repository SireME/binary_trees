#include "binary_trees.h"
/**
 * binary_tree_delete - delete an entire binary tree
 * @tree: binary tree to be deleted
 * Return: nothing just a deleted binary tree damage has been done
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current;

	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	current = tree;
	free(current);
}
