#include <stdio.h>
int main()
{
	// null-terminated string
	fwrite("test1\0test2", 1, 11, stdout);
	//puts("test3\0test4");
}
