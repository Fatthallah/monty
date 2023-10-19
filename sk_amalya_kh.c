#include "monty.h"

/**
 * mul_noqt - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */

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

/**
 * mod_noqt - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @line_number: Interger representing the line number of of the opcode.
 */

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