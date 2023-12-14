#include "monty.h"
/**
 * f_rotr - Fait pivoter la pile vers le bas
 * @head: Pointeur vers le sommet de la pile
 * @counter: Numéro de ligne
 * Retour: Aucune valeur de retour
*/
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
