#include "monty.h"

void mod_noqt(stack_t **stack, unsigned int line_number)
{
        int sum;
        if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
                khtaa_aktar(8, line_number, "mod");
        if ((*stack)->n == 0)
                khtaa_aktar(9, line_number);
        (*stack) = (*stack)->next;
        sum = (*stack)->n % (*stack)->prev->n;
        (*stack)->n = sum;
        free((*stack)->prev);
        (*stack)->prev = NULL;
}

void mul_noqt(stack_t **stack, unsigned int line_number)
{
	int sum;
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		khtaa_aktar(8, line_number, "mul");
	(*stack) = (*stack)->next;
	sum = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
