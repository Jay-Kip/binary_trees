#include "binary_trees.h"


/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 * Description: if tree is null, do nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left); /*Recursively delete left node*/
	binary_tree_delete(tree->right); /*Recursively delete right node*/

	free(tree);
}
