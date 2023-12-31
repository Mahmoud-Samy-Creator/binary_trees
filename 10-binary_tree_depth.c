#include "binary_trees.h"

/**
 * binary_tree_depth - Calculate the depth of a node in a binary tree.
 * @tree: A pointer to the node for which you want to calculate the depth.
 * Return: The depth of the node, or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
