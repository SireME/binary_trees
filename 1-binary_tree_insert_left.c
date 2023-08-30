#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of
 *  another node
 *  @parent: pointer to the node to insert left child to
 *  @value: value to store in newnode
 *  Return: pointer to created node or NULL: failure or parent null
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = parent->left;
	newNode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}
