#include "binary_trees.h"


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 * Return: hight if the @tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	l = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	r = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((l > r) ? l : r);
}
