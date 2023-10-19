#include "monty.h"

/**
 * eqraa_malaf - fun
 * @ffdd: the pointer
 * Return: nothing
 */

void eqraa_malaf(FILE *ffdd)
{
	int raqam_satr, sigha = 0;
	char *pofooo = NULL;
	size_t tolexn = 0;
	for (raqam_satr = 1; getline(&pofooo, &tolexn, ffdd) != -1; raqam_satr++)
	{
		sigha = halil_khat(pofooo, raqam_satr, sigha);
	}
	free(pofooo);
}

/**
 * eftah_malaf - fun
 * @ism_malaf: ism
 * Return: nothing
 */

void eftah_malaf(char *ism_malaf)
{
	FILE *ffdd = fopen(ism_malaf, "r");
	if (ffdd == NULL || ism_malaf == NULL) /* Done */
		khtaa(2, ism_malaf);
	eqraa_malaf(ffdd);
	fclose(ffdd);
}

/**
 * laky_dala - fun
 * @opcode: opcode
 * @kimaaa: jh
 * @sigha:  rd
 * @llnn: ew
 * Return: nothing
 */
 
void laky_dala(char *opcode, char *kimaaa, int llnn, int sigha)
{
	int x, aalam;
	instruction_t func_list[] = {
		{"push", dif_l_stack},
		{"pall", itba3_stack},
		{"pint", itba3_top},
		{"pop", sahb_top},
		{"nop", la2},
		{"swap", swap_noqt},
		{"add", dif_noqt},
		{"sub", tarh_noqt},
		{"div", div_noqt},
		{"mul", mul_noqt},
		{"mod", mod_noqt},
		{"pchar", itba3_harf},
		{"pstr", itba3_str},
		{"rotl", rotatef},
		{"rotr", rotatel},
		{NULL, NULL}
	};

	if (opcode[0] == '#')
		return;
	for (aalam = 1, x = 0; func_list[x].opcode != NULL; x++)
	{
		if (strcmp(opcode, func_list[x].opcode) == 0)
		{
			kalim_dala(func_list[x].f, opcode, kimaaa, llnn, sigha);
			aalam = 0;
		}
	}
	if (aalam == 1)
		khtaa(3, llnn, opcode);
}

/**
 * kalim_dala - fun
 * @dalafdfd: jh
 * @oopp: cx
 * @qimafff: yt
 * @llnn: iu
 * @sigha: re
 */
 
void kalim_dala(op_func dalafdfd, char *oopp, char *qimafff, int llnn, int sigha)
{
	stack_t *noqta;
	int aalam, x;
	aalam = 1;
	if (strcmp(oopp, "push") == 0)
	{
		if (qimafff != NULL && qimafff[0] == '-')
		{
			qimafff = qimafff + 1;
			aalam = -1;
		}
		if (qimafff == NULL)
			khtaa(5, llnn);
		for (x = 0; qimafff[x] != '\0'; x++)
		{
			if (isdigit(qimafff[x]) == 0)
				khtaa(5, llnn);
		}
		noqta = eaamal_noqta(atoi(qimafff) * aalam);
		if (sigha == 0)
			dalafdfd(&noqta, llnn);
		if (sigha == 1)
			deef_lil_que(&noqta, llnn);
	}
	else
		dalafdfd(&head, llnn);
}

/**
 * halil_khat - fun
 * @pofooo: hg
 * @raqam_satr: kj
 * @sigha: yu
 * Return: 0 if stack. 1 if queue.
 */

int halil_khat(char *pofooo, int raqam_satr, int sigha)
{
	char *opcode;
	char *kimaaa;
	const char *f_dlm_f = "\n ";
	if (pofooo == NULL)
		khtaa(4);
	opcode = strtok(pofooo, f_dlm_f);
	if (opcode == NULL)
		return (sigha);
	kimaaa = strtok(NULL, f_dlm_f);
	if (strcmp(opcode, "stack") == 0)
		return (0);
	if (strcmp(opcode, "queue") == 0)
		return (1);
	laky_dala(opcode, kimaaa, raqam_satr, sigha);
	return (sigha);
}
