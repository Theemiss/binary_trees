#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of the tree
 * @tree:pointer to the root node of the tree
 * Return: 0 if tree is NULL else the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);

}
