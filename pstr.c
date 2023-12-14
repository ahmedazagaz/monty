#include "monty.h"
/**
 * f_pstr - Affiche la chaîne de caractères à partir du sommet de la pile,
 * suivie d'un saut de ligne
 * @head: Pointeur vers le sommet de la pile
 * @counter: Numéro de ligne
 * Retour: Aucune valeur de retour
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
