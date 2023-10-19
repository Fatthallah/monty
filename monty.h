#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
void dif_l_stack(stack_t **, unsigned int);
void deef_lil_que(stack_t **, unsigned int);
stack_t *eaamal_noqta(int x);
void emsah_noqta(void);
void itba3_stack(stack_t **, unsigned int);
void swap_noqt(stack_t **, unsigned int);
void rotatef(stack_t **, unsigned int);
void itba3_harf(stack_t **, unsigned int);
void itba3_str(stack_t **, unsigned int);
int halil_khat(char *pofooo, int raqam_satr, int sigha);
void eqraa_malaf(FILE *);
int len_chars(FILE *);
void laky_dala(char *, char *, int, int);
void itba3_top(stack_t **, unsigned int);
void la2(stack_t **, unsigned int);
void khtaa(int kod_elakhtaa, ...);
void khtaa_aktar(int kod_elakhtaa, ...);
void slslat_akhtaa(int kod_elakhtaa, ...);
void rotatel(stack_t **, unsigned int);
void kalim_dala(op_func, char *, char *, int, int);
void dif_noqt(stack_t **, unsigned int);
void tarh_noqt(stack_t **, unsigned int);
void div_noqt(stack_t **, unsigned int);
void mul_noqt(stack_t **, unsigned int);
void mod_noqt(stack_t **, unsigned int);
void eftah_malaf(char *ism_malaf);
void sahb_top(stack_t **, unsigned int);
#endif
