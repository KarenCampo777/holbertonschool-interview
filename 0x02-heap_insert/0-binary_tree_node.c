#include "binary_trees.h"

/**
 * binary_tree_node - creates a node.
 * @parent: pointer to the parent node.
 * @value: value
 * Return: a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	/* Declarate of pointer variable*/
	newNode = malloc(sizeof(binary_tree_t));
	/* Memory allocation*/
	if (newNode == NULL)
		return (NULL);
	/* add nodeNew  */
	newNode->left = newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;
	return (newNode);
}