#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t **items;
	hash_node_t *prev_node;
	hash_node_t *first_node;

	if (ht == NULL)
		return;

	items = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		node = items[i];
		first_node = items[i];
		if (node == NULL)
			return;
		while (node->next != NULL)
		{
			prev_node = node;
			node = node->next;
			free(prev_node);
		}
		free(first_node);
	}
	free(ht);
}
