#include <string>
extern "C" char* f_c(const char* s);
std::string f_cpp(const char* s)
{
	std::string x;
	x = "TEST";
	x += s;
	return x;
}
#include <stdlib.h>
int main()
{
	const auto s1 = f_cpp("ABC");
	const auto s2 = f_c("ABC");
	free(s2);
}
