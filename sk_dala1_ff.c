#include "monty.h"

/**
 * khtaa_aktar - this fun
 * @kod_elakhtaa: as following:
 * (6) => sixth
 * (7) => seventh
 * (8) => eight
 * (9) => ninth
 */
 
void khtaa_aktar(int kod_elakhtaa, ...)
{
	va_list arg_f;
	char *amalya;
	int raqam_l;
	va_start(arg_f, kod_elakhtaa);
	switch (kod_elakhtaa)
	{
		case 6:
			fprintf(stderr, "L%d: can't pint, stack empty\n",
				va_arg(arg_f, int));
			break;
		case 7:
			fprintf(stderr, "L%d: can't pop an empty stack\n",
				va_arg(arg_f, int));
			break;
		case 8:
			raqam_l = va_arg(arg_f, unsigned int);
			amalya = va_arg(arg_f, char *);
			fprintf(stderr, "L%d: can't %s, stack too short\n", raqam_l, amalya);
			break;
		case 9:
			fprintf(stderr, "L%d: division by zero\n",
				va_arg(arg_f, unsigned int));
			break;
		default:
			break;
	}
	emsah_noqta();
	exit(EXIT_FAILURE);
}

/**
 * khtaa - Prints This Fun
 * @kod_elakhtaa: as following:
 * (1) => first
 * (2) => second
 * (3) => third
 * (4) => fourth
 * (5) => fifth
 */
 
void khtaa(int kod_elakhtaa, ...)
{
	va_list arg_f;
	char *amalya;
	int raqam_l;
	va_start(arg_f, kod_elakhtaa);
	switch (kod_elakhtaa)
	{
		case 1:
			fprintf(stderr, "USarg_fE: monty file\n");
			break;
		case 2:
			fprintf(stderr, "Error: Can't open file %s\n",
				va_arg(arg_f, char *));
			break;
		case 3:
			raqam_l = va_arg(arg_f, int);
			amalya = va_arg(arg_f, char *);
			fprintf(stderr, "L%d: unknown instruction %s\n", raqam_l, amalya);
			break;
		case 4:
			fprintf(stderr, "Error: malloc failed\n");
			break;
		case 5:
			fprintf(stderr, "L%d: usarg_fe: push integer\n", va_arg(arg_f, int));
			break;
		default:
			break;
	}
	emsah_noqta();
	exit(EXIT_FAILURE);
}

/**
 * slslat_akhtaa - this fun
 * @kod_elakhtaa: as following:
 * (10) ~> tenth
 * (11) ~> eleventh
 */
 
void slslat_akhtaa(int kod_elakhtaa, ...)
{
	va_list arg_f;
	int raqam_l;
	va_start(arg_f, kod_elakhtaa);
	raqam_l = va_arg(arg_f, int);
	switch (kod_elakhtaa)
	{
		case 10:
			fprintf(stderr, "L%d: can't pchar, value out of range\n", raqam_l);
			break;
		case 11:
			fprintf(stderr, "L%d: can't pchar, stack empty\n", raqam_l);
			break;
		default:
			break;
	}
	emsah_noqta();
	exit(EXIT_FAILURE);
}
