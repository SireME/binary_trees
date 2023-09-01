#ifndef __BINARY_TREES_H__
#define __BINARY_TREES_H__

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};
/*basic binary tree representation*/
typedef struct binary_tree_s binary_tree_t;


/* binary search tree*/
typedef struct binary_tree_s bst_t;

/*AVL tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/* print binary tree*/
void binary_tree_print(const binary_tree_t *tree);

/*create a node q0*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*insert node as the left side of parent node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*insert node as the right side of parent node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*delete an entire binary tree*/
void binary_tree_delete(binary_tree_t *tree);

/*determine if node is a leaf node*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*check if a given node is root*/
int binary_tree_is_root(const binary_tree_t *node);

/* go thorugh a binary tree using pre order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*traverse a tree using inorder traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*traverse a binary tree using post order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

/*find the height of a binary tree*/
size_t binary_tree_height(const binary_tree_t *tree);

/*measure the depth of a node in a binary tree*/
size_t binary_tree_depth(const binary_tree_t *tree);

/*determine size of binary tree*/
size_t binary_tree_size(const binary_tree_t *tree);

/* count all leaf nodes*/
size_t binary_tree_leaves(const binary_tree_t *tree);

/*count node with atleast one child*/
size_t binary_tree_nodes(const binary_tree_t *tree);

/*check if binar tree is full*/
int binary_tree_is_full(const binary_tree_t *tree);


/*check if nodes are siblings*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node);

#endif
