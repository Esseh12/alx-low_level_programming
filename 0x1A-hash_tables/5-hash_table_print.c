#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	long signed int i;
	hash_node_t **items;

	if (ht == NULL)
		return;

	items = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = items[i];

		if (node == NULL)
			continue;
		printf("\n%s\n", node->key);
		while (node->next != NULL)
		{
			printf("%s\n", node->key);
			node = node->next;
		}

	}
}
