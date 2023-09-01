#include "binary_trees.h"
/**
 * binary_tree_is_full - check if binary tree is full
 * traversing through it with postorder
 * @tree: binary tree to traverse
 * Return: 1 or zero for true or false
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int leftfull, rightfull;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* traverse to left node and accumulate size */
	leftfull = binary_tree_is_full(tree->left);

	/* traverse to right node and accumulate size */
	rightfull = binary_tree_is_full(tree->right);

	/* determine if node is full */
	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);



	return (leftfull && rightfull);
}
