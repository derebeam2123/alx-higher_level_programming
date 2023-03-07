#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - single
 * @n: integer
 * @next: next
 * Description: single
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *insert_node(listint_t **head, int number);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);

#endif /* LIST_H */
