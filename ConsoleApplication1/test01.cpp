int main()
{
	char s[10];
	s[0] = 65;
	s[1] = 'B';
	s[2] = 'C';
	s[3] = '\0'; // Null 文字 コード番号が 0 の文字
	/*
	test xxx abc 3456
	xxx:
	1byte目:0
	2byte目:2
	3byte目:0
*/
	static const char a[] = "test \0\2\0 abc 3456";

}
