#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @parent: node parent
 * @value: Value of the node
 * Return: fresh node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *fresh_node;

	fresh_node = malloc(sizeof(binary_tree_t));
	if (fresh_node == NULL)
	{
		return (NULL);
	}
	fresh_node->n = value;
	fresh_node->parent = parent;
	fresh_node->left = NULL;
	fresh_node->right = NULL;
	return (fresh_node);
}
