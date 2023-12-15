#include "monty.h"
/**
 * free_stack - Libère une liste doublement chaînée
 * @head: Pointeur vers le sommet de la pile
*/
void free_stack(stack_t *head)
{
	stack_t *aux;

	aux = head;
	while (head)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
