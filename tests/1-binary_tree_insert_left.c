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
	binary_tree_t *newNode, *left_present;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		left_present = parent->left;
		parent->left = newNode;
		newNode->left = left_present;
	}
	else
		parent->left = newNode;

	return (newNode);
}
