#include "monty.h"

void itba3_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}

void itba3_top(stack_t **stack, unsigned int line_number)
{
        if (stack == NULL || *stack == NULL)
                khtaa_aktar(6, line_number);
        printf("%d\n", (*stack)->n);
}

void sahb_top(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	if (stack == NULL || *stack == NULL)
		khtaa_aktar(7, line_number);
	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}

void dif_l_stack(stack_t **new_node, __attribute__((unused))unsigned int ln)
{
        stack_t *tmp;
        if (new_node == NULL || *new_node == NULL)
                exit(EXIT_FAILURE);
        if (head == NULL)
        {
                head = *new_node;
                return;
        }
        tmp = head;
        head = *new_node;
        head->next = tmp;
        tmp->prev = head;
}
