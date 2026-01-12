/* Include guard: */
#ifndef STRING_INVERTER_C
#define STRING_INVERTER_C

/* Importations: */
#include "C-Utils/cutils.h"
#include <stdio.h>
#include <string.h>


/* String Inverter version variables: */
#define STRING_INVERTER_FULL_VERSION  111.0L /* String Inverter full version variable  (1.1.1). */
#define STRING_INVERTER_MAJOR_VERSION   1.0L /* String Inverter major version variable     (1). */
#define STRING_INVERTER_MINOR_VERSION   1.0L /* String Inverter minor version variable     (1). */
#define STRING_INVERTER_PATCH_VERSION   1.0L /* String Inverter patch version variable     (1). */

/* Main code: */
int main(void)
{
	/* Local variables: */
	int character = 0;        /* Stored character variable. */
	char string[131072] = ""; /* Text string variable.      */

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
