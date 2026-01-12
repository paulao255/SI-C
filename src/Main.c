/* Include guard: */
#ifndef STRING_INVERTER_C
#define STRING_INVERTER_C

/* Importations: */
#include <stdio.h>


/* Main code: */
int main(void)
{
	/* String Inverter version variables: */
	#define STRING_INVERTER_FULL_VERSION  110.0L /* String Inverter full version variable  (1.1.0). */
	#define STRING_INVERTER_MAJOR_VERSION   1.0L /* String Inverter major version variable     (1). */
	#define STRING_INVERTER_MINOR_VERSION   1.0L /* String Inverter minor version variable     (1). */
	#define STRING_INVERTER_PATCH_VERSION   0.0L /* String Inverter patch version variable     (0). */

	/* Local variables: */
	int character = 0;                           /* Stored character variable.                      */
	char string[131072] = "";                    /* Text string variable.                           */

	/* Main commands: */
	fputs("Type a text: ", stdout);
	fgets(string, sizeof(string), stdin);

	for(character = sizeof(string) - 1; character >= 0; --character)
	{
		printf("%c", string[character]);
	}

	return 0;
}

/* End code: */
#endif
