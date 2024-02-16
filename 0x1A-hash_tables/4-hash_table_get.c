#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: key to retrieve in table
 *
 * Return: the value associated with the element
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t const *node;

	if (ht == NULL) /* hash table not created yet */
		return (NULL); /* can't get from the table */

	index = key_index((unsigned char *)key, ht->size); /* index for the key */
	node = ht->array[index]; /* node associated with index in hash_table */

	if (node == NULL) /* no data is stored in that part of the hash table */
		return (NULL);

	/* check for collision */
	if (node->next != NULL)
	{ /* get the value associated with the key */
		while (node->next != NULL)
		{
			if (node->value == key)
				break;
			node = node->next;
		}
	}

	return (node->value);
}
