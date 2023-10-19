#include "monty.h"

void div_noqt(stack_t **stack, unsigned int line_number)
{
        int sum;
        if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
                khtaa_aktar(8, line_number, "div");
        if ((*stack)->n == 0)
                khtaa_aktar(9, line_number);
        (*stack) = (*stack)->next;
        sum = (*stack)->n / (*stack)->prev->n;
        (*stack)->n = sum;
        free((*stack)->prev);
        (*stack)->prev = NULL;
}

void dif_noqt(stack_t **stack, unsigned int line_number)
{
	int sum;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		khtaa_aktar(8, line_number, "add");
	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

void tarh_noqt(stack_t **stack, unsigned int line_number)
{
	int sum;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		khtaa_aktar(8, line_number, "sub");
	(*stack) = (*stack)->next;
	sum = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

void swap_noqt(stack_t **stack, unsigned int line_number)
{
        stack_t *tmp;
        if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
                khtaa_aktar(8, line_number, "swap");
        tmp = (*stack)->next;
        (*stack)->next = tmp->next;
        if (tmp->next != NULL)
                tmp->next->prev = *stack;
        tmp->next = *stack;
        (*stack)->prev = tmp;
        tmp->prev = NULL;
        *stack = tmp;
}

void la2(stack_t **stack, unsigned int line_number)
{
        (void)stack;
        (void)line_number;
}
