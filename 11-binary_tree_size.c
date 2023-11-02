#include "binary_trees.h"

/**
 * binary_tree_size - A function to return B-tree size
 * @tree: Tree to calculate it's size
 * Return: size or 0 if tree is null
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
