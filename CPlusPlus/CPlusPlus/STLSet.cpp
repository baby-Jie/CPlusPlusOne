#include <iostream>
#include <stdlib.h>
#include <set>
using namespace std;

/*
 * //1 集合 有序(默认从小到大) 唯一 (红黑二叉树 这种数据结构的变体) 
 * 后来插入相同的值 那么就会插入不成功
 * insert
 * erase
 * 插入重复的元素 只能有一个
 * set<int, greater<int>> set1;
 * set<int, less<int>> set1;
 * find
 * count
 * lower_bound(5) 大于等于5的元素的迭代器位置  5的这个元素或者下一个元素的迭代器
 * upper_bound(5) 大于5的元素的迭代器的位置    5的下一个元素的迭代器
 * equal_range(5) 返回两个迭代器  一个是大于等于5的迭代器 还有一个大于5的迭代器
 */

 //3 自定义数据类型 排序
 //03 仿函数 函数对象 重载() 操作 进行比较大小
 //题目：学生包含学号，姓名属性，现要求任意插入几个学生对象到set容器中，
 //使得容器中的学生按学号的升序排序
class Student
{
public:
	Student(char *name, int age)
	{
		strcpy(this->name, name);
		this->age = age;
	}
protected:
public:
	char name[64];
	int age;
};

// 仿函数
struct StuFunctor
{
	bool operator()(const Student &left, const Student &right)
	{
		return (left.age < right.age);
	}
};

void mainSet1()
{
	set<int> set1;
	for (int i = 0; i < 5; i++)
	{
		int temp = rand();
		set1.insert(temp);
	}
	set1.insert(100);
	set1.insert(100);
	set1.insert(100);

	for (set<int>::iterator it = set1.begin(); it != set1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void mainSet2()
{
	set<Student, StuFunctor> set1;
	char name1[] = "smx";
	char name2[] = "xyj";
	char name3[] = "smxlovexyj";
	Student st1(name1, 24);
	Student st2(name1, 22);
	Student st3(name1, 23);
	set1.insert(st1);
	set1.insert(st2);
	pair<set<Student, StuFunctor>::iterator, bool> pair1 =  set1.insert(st3);
	if (pair1.second == true)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}

	for (set<Student, StuFunctor>::iterator it = set1.begin(); it != set1.end(); it++)
	{
		cout << it->age << endl;
	}
}

void mainSet3()
{
	set<int, greater<int>> set1;
	for (int i = 0; i < 15; i++)
	{
		set1.insert(i);
	}

	set<int>::iterator it1 = set1.lower_bound(5); // >=  
	cout << "*it1:" << *it1 << endl;
	set<int>::iterator it2 = set1.upper_bound(5); // >
	cout << "*it2:" << *it2 << endl;
	pair<set<int>::iterator, set<int>::iterator> pair1 = set1.equal_range(5);
	if (pair1.first != set1.end())
	{
		cout << "*pair1.first" << *pair1.first << endl;
	}

	if (pair1.second != set1.end())
	{
		cout << "*pair1.second" << *pair1.second << endl;
	}
}

int main()
{
	mainSet3();
	system("pause");
	return 0;
}
