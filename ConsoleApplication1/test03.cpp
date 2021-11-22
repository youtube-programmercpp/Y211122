#include <stdio.h>
int main()
{
	//printf("test1\n\0test2\n");
	//char s[] = { 't', 'e', 's', 't', '\0', 'A', 'B', 'C', '\0' };
	const char s[] = "test\0ABC";
	printf("%s\n", s);
}
