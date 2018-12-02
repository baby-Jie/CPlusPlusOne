#include <iostream>
#include <stdlib.h>
#include <queue>
using namespace std;

/*
 * 默认是最大优先级队列(队头)
 * push
 * pop 
 * size
 * 
 */

void mainPriorityQueue1()
{
	priority_queue<int> p1;
	priority_queue<int, vector<int>, less<int>> p2;
	priority_queue<int, vector<int>, greater<int>> p3; //最小值优先级队列
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
