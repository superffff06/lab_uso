#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct field_of_ships {
	char reference,attacked;
} FOS;

int main(void) 
{
	FOS **str = (field_of_ships **) malloc(15 * sizeo(S)));
	fgets(str,10,stdin);
	printf("%s %lu", str, strlen(str));
	return 0;
}