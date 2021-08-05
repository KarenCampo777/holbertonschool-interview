#include "binary_trees.h"
/**
 * binary_tree_node - makes a new tree
 * @parent: Pointer to the parent node
 * @value: The value to put in the new node or NULL on failure
 * return: pointer to the new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;
	/* Declaration of the  Variable that points to the structure */
	newNode = malloc(sizeof(binary_tree_t));
	/*allocates the requested memory and returns a pointer to it.*/
	if (newNode == NULL)
		return (NULL);
	/*validation of NULL*/
	newNode->left = newNode->right = NULL;
	newNode->n = value;
	newNode->parent = parent;
	/*node addition*/
	return (newNode);
}