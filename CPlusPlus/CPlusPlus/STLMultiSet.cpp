#include <iostream>
#include <stdlib.h>
#include <set>
using namespace std;

void mainMultiset1()
{
	multiset<int> set1;
	int tmp = 0;
	cout << "请输入multiset集合的值:";
	cin >> tmp;

	while (tmp != 0)
	{
		set1.insert(tmp);
		cout << "请输入multiset集合的值:";
		cin >> tmp;
	}

	for (multiset<int>::iterator it = set1.begin(); it != set1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	while (!set1.empty())
	{
		multiset<int>::iterator it = set1.begin();
		cout << *it << " ";
		set1.erase(it);
	}
	cout << endl;
}

int mainMultiset()
{
	mainMultiset1();
	system("pause");
	return 0;
}
