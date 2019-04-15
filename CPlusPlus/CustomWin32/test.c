#include <windows.h>
void WINAPI add(int a, int b);
void __cdecl add1(int a, int b);


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{
	MessageBox(NULL, "hello win32", "Note", MB_OKCANCEL);

	int a = 10;

	add(1, 2);

	add1(1, 2);

	a = 100;
	return 0;
}

void WINAPI add(int a, int b)
{

}

void __cdecl add1(int a, int b)
{

}