#include "monty.h"
/**
 * f_swap - Échange les deux éléments supérieurs de la pile
 * @head: Pointeur vers le sommet de la pile
 * @counter: Numéro de ligne
 * Retour: Aucune valeur de retour
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}