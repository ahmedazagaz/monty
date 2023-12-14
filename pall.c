#include "monty.h"
/**
 * f_pall - Affiche les éléments de la pile
 * @head: Pointeur vers le sommet de la pile
 * @counter: Non utilisé
 * Retour: Aucune valeur de retour
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
