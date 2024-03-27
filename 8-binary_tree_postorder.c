#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary by tree post-order traversal
 * @tree: input
 * @func: input
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
