#include <iostream>
#include <stdlib.h>
#include <deque>
using namespace std;

#include "string"
#include "algorithm"

/*
 *push_back push_front  
 *back front
 * distance 根据迭代器 求数组的下标
 */

// 求下标
void mainDeque1()
{
	deque<int> d1;
	for (int i = 0;  i < 10; i++)
	{
		d1.push_front(i);
	}

	deque<int>::iterator it = find(d1.begin(), d1.end(), 6);
	if (it != d1.end())
	{
		cout << "6的下标是:" << distance(d1.begin(), it) << endl;
	}
}

int mainDeque()
{

	mainDeque1();

	system("pause");
	return 0;
}
