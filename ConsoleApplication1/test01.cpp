int main()
{
	char s[10];
	s[0] = 65;
	s[1] = 'B';
	s[2] = 'C';
	s[3] = '\0'; // Null ���� �R�[�h�ԍ��� 0 �̕���
	/*
	test xxx abc 3456
	xxx:
	1byte��:0
	2byte��:2
	3byte��:0
*/
	static const char a[] = "test \0\2\0 abc 3456";

}
