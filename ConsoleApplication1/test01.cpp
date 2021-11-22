int main()
{
	char s[10];
	s[0] = 65;
	s[1] = 'B';
	s[2] = 'C';
	s[3] = '\0'; // Null •¶š ƒR[ƒh”Ô†‚ª 0 ‚Ì•¶š
	/*
	test xxx abc 3456
	xxx:
	1byte–Ú:0
	2byte–Ú:2
	3byte–Ú:0
*/
	static const char a[] = "test \0\2\0 abc 3456";

}
