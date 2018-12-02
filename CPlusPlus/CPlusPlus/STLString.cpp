#include <iostream>
#include <stdlib.h>
using namespace std;

#include "string"
#include "algorithm"

void mainString1()
{
	string s1 = "1234567890";

	// 数组方式迭代遍历
	try
	{
		for (int i = 0; i < s1.length(); i++)
		{
			cout << s1[i] << " "; // 出现错误 不向外面抛出异常 只是引起程序的中断
		}
	}
	catch (...)
	{
		cout << "[]索引抛出异常" << endl;
	}
	cout << endl;

	// 迭代器方式
	for (string::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	try
	{
		// at 方式 和[]索引相比较  at可以抛出异常
		for (int i = 0; i < s1.length() + 3; i++)
		{
			cout << s1.at(i) << " ";
		}
	}
	catch (...)
	{
		cout << "at抛出异常" << endl;
	}

}

// 字符指针和字符串的转换
void mainString2()
{
	string s1 = "aaaaaa";

	// 1 string -> char*
	const char* s = s1.c_str();
	cout << s << endl;

	// 2 char& -> string
	string s2 = string(s);

	// 3 s1的内容拷贝到buffer中
	char buffer[188];
	s1.copy(buffer, 3, 0);
	buffer[3] = 0;
	cout << buffer << endl;

}

// 字符串的连接
void mainString3()
{
	string s1 = "111";
	string s2 = "222";
	cout << s1 + s2 << endl;
	string s3 = s1.append(s2);
	cout << s3 << endl;
}

// 字符串的查找和替换
void mainString4()
{
	string s1 = "1234567890";
	int index = s1.find("67", 0); //index = -1 说明没找到 string::npos
	//cout << index << endl;

	string s2 = "wbm1 hwbm2 wbm3";
	int offset = 0;
	while ((index = s2.find("wbm", offset)) != string::npos)
	{
		cout << index << endl;
		s2.replace(index, 3, "WBM");
		offset = index+ 1;
	}
	cout << s2 << endl;
}

// 字符串的区间删除和插入
void mainString5()
{
	string s1 = "hello1 hello2 hello3";

	
	string::iterator it;
	while ((it = find(s1.begin(), s1.end(), 'l')) != s1.end())
	{
		s1.erase(it);
	}
	cout << s1 << endl;

	// 全部删除
	s1.erase(s1.begin(), s1.end());

	s1 = "BBB";
	// 插入
	s1.insert(0, "AAA");
}

// 算法相关
void mainString6()
{
	string s1 = "AAAbbb";

	// 1、函数的入口地址 2、函数对象、 3、预定义的函数对象
	transform(s1.begin(), s1.end(), s1.begin(), toupper);
	cout << s1 << endl;

	string s2 = "AAAbbb";
	transform(s2.begin(), s2.end(), s2.begin(), tolower);
	cout << s2 << endl;
}

int mainString()
{
	mainString6();
	system("pause");
	return 0;
}
