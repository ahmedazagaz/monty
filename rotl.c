#include "monty.h"
/**
 * f_rotl - Fait pivoter la pile vers le sommet
 * @head: Pointeur vers le sommet de la pile
 * @counter: Numéro de ligne
 * Retour: Aucune valeur de retour
*/
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = aux;
}
