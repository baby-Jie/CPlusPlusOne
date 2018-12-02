#include <iostream>
#include <stdlib.h>
#include <set>
using namespace std;

/*
 * //1 ���� ����(Ĭ�ϴ�С����) Ψһ (��ڶ����� �������ݽṹ�ı���) 
 * ����������ͬ��ֵ ��ô�ͻ���벻�ɹ�
 * insert
 * erase
 * �����ظ���Ԫ�� ֻ����һ��
 * set<int, greater<int>> set1;
 * set<int, less<int>> set1;
 * find
 * count
 * lower_bound(5) ���ڵ���5��Ԫ�صĵ�����λ��  5�����Ԫ�ػ�����һ��Ԫ�صĵ�����
 * upper_bound(5) ����5��Ԫ�صĵ�������λ��    5����һ��Ԫ�صĵ�����
 * equal_range(5) ��������������  һ���Ǵ��ڵ���5�ĵ����� ����һ������5�ĵ�����
 */

 //3 �Զ����������� ����
 //03 �º��� �������� ����() ���� ���бȽϴ�С
 //��Ŀ��ѧ������ѧ�ţ��������ԣ���Ҫ��������뼸��ѧ������set�����У�
 //ʹ�������е�ѧ����ѧ�ŵ���������
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

// �º���
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
		cout << "����ɹ�" << endl;
	}
	else
	{
		cout << "����ʧ��" << endl;
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
