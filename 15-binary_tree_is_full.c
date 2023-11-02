#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node
 * Return: 1 if the tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int tmp = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	tmp += binary_tree_is_full(tree->left);
	tmp -= binary_tree_is_full(tree->right);

	return (tmp ? 0 : 1);
}
