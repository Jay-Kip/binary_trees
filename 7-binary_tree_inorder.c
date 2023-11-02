#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_inorder - traverses binary tree using inorder traversal
 * @tree: pointer to the root node
 * @func: pointer to function for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func); /*Recursively traverse left subtree*/

	func(tree->n); /*Call function on the value of current node*/

	binary_tree_inorder(tree->right, func); /*Recusrively traverse right subtree*/
}
