#include <iostream>
#include <stdlib.h>
using namespace std;

#include "vector"
#include "algorithm"

/*
*只能在尾部操作  尾部的插入和删除
*size
*back
*front
*pop_back
*push_back
*vector<int> v2(v1.begin(), v1.end());
*/

template<class T>
void printV(vector<T>& v1)
{
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
}

int mainVector1()
{
	vector<int> v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}

class Teacher
{
public:
	int age;
	char name[64];

	void ptintT()
	{
		cout << "age:" << age << endl;
	}

	//Teacher& operator =()
};

void mainVector2()
{
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;

	vector<Teacher> v1;
	v1.push_back(t1);
	v1.push_back(t2);
	v1.push_back(t3);

	for (vector<Teacher>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		it->ptintT();
	}
}

void mainVector3()
{
	Teacher t1, t2, t3;
	t1.age = 31;
	t2.age = 32;
	t3.age = 33;

	vector<Teacher*> v1;
	v1.push_back(&t1);
	v1.push_back(&t2);
	v1.push_back(&t3);

	for (vector<Teacher*>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		(*it)->ptintT();
	}
}

void mainVector4()
{
	vector<int> v1;
	cout << "length:" << v1.size() << endl;  // 长度
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout << "length:" << v1.size() << endl;

	while (v1.size() > 0)
	{
		int val = v1.back();  // 获取尾部元素的值 也可以修改
		v1.pop_back();
		cout << val << " ";
	}
	cout << endl;

	vector<int> v2(v1.begin(), v1.end());
}

// vector的遍历
void mainVector5()
{
	vector<int> v1(10); //提前把内存空间准备好

	// 通过数组的方式
	for (int i = 0; i < 10; i++)
	{
		v1[i] = i;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << v1[i] << " ";
	}

	// 迭代器的方式遍历
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}

	for (vector<int>::reverse_iterator it = v1.rbegin(); it != v1.rend(); it++)
	{
		cout << *it << endl;
	}
}

// 删除
void mainVector6()
{
	vector<int> v1(10); //提前把内存空间准备好

					   // 通过数组的方式
	for (int i = 0; i < 10; i++)
	{
		v1[i] = i;
	}

	/*v1.erase(v1.begin(), v1.begin() + 3);
	v1.erase(v1.begin());*/
	printV(v1);

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); )
	{
		if (*it == 2 || *it == 4)
		{
			it = v1.erase(it); // 当删除元素的时候 迭代器会自动下移一个
		}
		else
		{
			it++;
		}
	}
	printV(v1);
}

// 插入
void mainVector7()
{
	vector<int> v1(10); //提前把内存空间准备好

						// 通过数组的方式
	for (int i = 0; i < 10; i++)
	{
		v1[i] = i;
	}

	v1.insert(v1.begin(), 111);
	printV(v1);
}

void mainVector()
{
	mainVector7();
	system("pause");
}


