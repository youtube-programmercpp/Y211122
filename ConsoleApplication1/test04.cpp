#define	_CRT_SECURE_NO_WARNINGS
#include <string>
#include <stdio.h>
#include <Windows.h>
#include <iostream>
void f_c()
{
	char s[5];
	strcpy(s, "ABC");
	strcat(s, "DEF");
	puts(s);
}
void f_cpp()
{
	std::string s;
	s = "ABC";
	s += "DEF";
	std::cout << s << '\n';
}
int main()
{
	f_c();
	//f_cpp();
}
