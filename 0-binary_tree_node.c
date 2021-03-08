#include "binary_trees.h"

#include <stddef.h>
/**
 * binary_tree_node - Create a binary tree node
 * @parent: root node of the tree
 * @value: the value in the root note
 * Return: binary tree or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t  *tree;

	tree = malloc(sizeof(binary_tree_t));
	if (tree == NULL)
		return (NULL);
	tree->parent = parent;
	tree->n = value;
	tree->right = NULL;
	tree->left = NULL;
	return (tree);
}
