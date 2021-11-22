#define	_CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
char* f_c(const char* s)
{
	static const char test[] = "TEST";
	char* const p = malloc(sizeof test + strlen(s));
	if (p) {
		strcpy(p, test);
		strcat(p, s);
		return p;
	}
	else
		return NULL;
}
