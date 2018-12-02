#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

/*
 * list是双向链表
 * push_back
 * size
 * empty
 * 迭代器不能+4 但是能++  就是不能支持随机访问容器
 * 删除元素是左闭右开list.erase(0, 3) begin end
 * remove(3)
 */

void printList(list<int>& l)
{
	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void mianList1()
{
	list<int> l1;
	for (int i = 0; i < 10; i++)
	{
		l1.push_back(i);
	}

	list<int>::iterator it1 = l1.begin();
	list<int>::iterator it2 = l1.begin();
	it2++;
	it2++;
	it2++;
	printList(l1);
	l1.erase(it1, it2);
	printList(l1);

	l1.push_front(100);
	l1.push_back(100);
	printList(l1);
	l1.remove(100);
	printList(l1);

}

int mainList()
{


	mianList1();
	system("pause");
	return 0;
}
