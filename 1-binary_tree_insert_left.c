#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert left child to the binary tree
 * if left child already exists the the new node will take it's place
 * and make it it's left child
 * @parent: the parent node of current tree
 * @value: the value of the new inserted node
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL, *tmp = NULL;

	if (!parent)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	new_node->parent = parent;
	new_node->n = value;

	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		parent->left = new_node;


	return (new_node);
}
