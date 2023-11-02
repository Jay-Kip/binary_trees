#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - inserts a node as the left child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: the value to store in the new node
 * Return: pointer to the created node or null on failure or if parent is null
 * Description: replace the left child if it already exists as explaind below
 * If parent has already a left child, the new node must take its place
 * the old lef-child must then be set as the left-child of the new node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t  *new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;

	if (parent->left != NULL)
		parent->left = new_node;

	parent->left = new_node;

	return (new_node);
}
