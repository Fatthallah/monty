#include "monty.h"
stack_t *head = NULL;

/**
 * eaamal_noqta - fun
 * @x: nnn
 * Return: pointer or null
 */

stack_t *eaamal_noqta(int n)
{
	stack_t *noqta;
	noqta = malloc(sizeof(stack_t));
	if (noqta == NULL)
		khtaa(4);
	noqta->next = NULL;
	noqta->prev = NULL;
	noqta->n = n;
	return (noqta);
}

/**
 * deef_lil_que - fun
 * @noqta_gdeeda: gdeed
 * @llnn: num
 */

void deef_lil_que(stack_t **noqta_gdeeda, __attribute__((unused))unsigned int llnn)
{
	stack_t *moaq;
	if (noqta_gdeeda == NULL || *noqta_gdeeda == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *noqta_gdeeda;
		return;
	}
	moaq = head;
	while (moaq->next != NULL)
		moaq = moaq->next;
	moaq->next = *noqta_gdeeda;
	(*noqta_gdeeda)->prev = moaq;
}

/**
 * main - entry point
 * @argc: count
 * @argv: rguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	eftah_malaf(argv[1]);
	emsah_noqta();
	return (0);
}

/**
 * emsah_noqta - delete
 */

void emsah_noqta(void)
{
	stack_t *moaq;
	if (head == NULL)
		return;
	while (head != NULL)
	{
		moaq = head;
		head = head->next;
		free(moaq);
	}
}
