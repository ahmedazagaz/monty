#include "monty.h"
/**
 * f_queue - Gère la file et affiche l'élément en tête
 * @head: Pointeur vers le sommet de la pile
 * @counter: Numéro de ligne
 * Retour: Aucune valeur de retour
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}
/**
 * addqueue - Ajoute un nœud à la fin de la pile
 * @n: Nouvelle valeur
 * @head: Pointeur vers la tête de la pile
 * Retour: Aucune valeur de retour
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
