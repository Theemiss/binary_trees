#include "binary_trees.h"
/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal
 * @tree: node
 * @func: function to call
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *list[1024];
	binary_tree_t *tmp;
	int i = 0, j = 0;

	if (tree == NULL || func == NULL)
		return;
	for (i = 0; i < 1024; i++)
		list[i] = NULL;
	list[0] = (binary_tree_t *)tree;
	i = 0;
	while (list[i] != NULL)
	{
		tmp = list[i];
		func(tmp->n);
		if (tmp->left != NULL)
		{
			j++;
			list[j] = tmp->left;
		}
		if (tmp->right != NULL)
		{
			j++;
			list[j] = tmp->right;
		}
		i++;
	}
}
