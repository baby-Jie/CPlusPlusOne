#include <iostream>
using namespace std;
#define MYFUNC(a, b) ((a) < (b) ? (a) : (b))  

inline int inlinefunc1(int a, int b)
{
	return a < b ? a : b;
}

int addfunc1(int a, int b)
{
	return a + b;
}

double addfunc1(double a, double b)
{
	return a + b;
}

typedef int(*PFunc)(int, int);

class TestClass
{
private:
	int m_val = 10;
public:
	TestClass();
};

TestClass::TestClass()
{
	m_val = 99;
}

int main()
{
	int a = 1;
	int b = 3;

	int d = MYFUNC(++a, b);
	cout << "a:" << a << ", b:" << b << ",d:" << d << endl;

	PFunc func1 = addfunc1;
	auto temp = func1(a, 2.0);
	cout << "temp:" << temp << endl;


	system("pause");
}