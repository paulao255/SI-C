/* Include guard: */
#ifndef SI_C
#define SI_C

/* Importations: */
#include <stdio.h>
#include <string.h>


/* String Inverter version variables: */
#define SI_FULL_VERSION  20260114 /* String Inverter full version variable (2026/01/14). */
#define SI_MAJOR_VERSION 2026     /* String Inverter major version variable (2026).      */
#define SI_MINOR_VERSION 01       /* String Inverter minor version variable (01).        */
#define SI_PATCH_VERSION 14       /* String Inverter patch version variable (14).        */

/* Main code: */
int main(void)
{
	/* Local variables: */
	int character = 0;        /* Stored character variable.                          */
	char string[131072] = ""; /* Text string variable.                               */

	/* Main commands: */
	fputs("Type a text: ", stdout);
	fgets(string, sizeof(string), stdin);

	for(character = (int)strlen(string) - 1; character >= 0; --character)
	{
		putchar(string[character]);
	}

	return 0;
}

/* End code: */
#endif
