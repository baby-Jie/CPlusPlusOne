#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

/*
 * Ĭ����������ȼ�����(��ͷ)
 * push
 * pop 
 * size
 * 
 */

void mainPriorityQueue1()
{
	priority_queue<int> p1;
	priority_queue<int, vector<int>, less<int>> p2;
	priority_queue<int, vector<int>, greater<int>> p3; //��Сֵ���ȼ�����
	p2.push(1);
	p2.push(1);
	p2.push(1);
	p2.push(1);
	p2.push(1);
}

int mainPriorityQueue()
{



	system("pause");
	return 0;
}
