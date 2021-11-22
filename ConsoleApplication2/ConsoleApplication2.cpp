/*
main() から funcA() を呼んで
funcA() から funcB() を呼んで
funcB() の中で適当に POP するか ESP 等を変更して
funcB() から直接 main() に (funcA() を経由せずに) 戻れるかどうか試して観て欲しいです
*/
#include <stdio.h>
__declspec(naked) void funcB()
{
	__asm {
		mov         esp, ebp
		pop  ebp
		ret
	}
}
void funcA()
{
	funcB();
	printf("funcA 終わり\n");
}
int main()
{
	funcA();
}
