#include <iostream>
#include <stdlib.h>
using namespace std;

#include "string"
#include "algorithm"

void mainString1()
{
	string s1 = "1234567890";

	// ���鷽ʽ��������
	try
	{
		for (int i = 0; i < s1.length(); i++)
		{
			cout << s1[i] << " "; // ���ִ��� ���������׳��쳣 ֻ�����������ж�
		}
	}
	catch (...)
	{
		cout << "[]�����׳��쳣" << endl;
	}
	cout << endl;

	// ��������ʽ
	for (string::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	try
	{
		// at ��ʽ ��[]������Ƚ�  at�����׳��쳣
		for (int i = 0; i < s1.length() + 3; i++)
		{
			cout << s1.at(i) << " ";
		}
	}
	catch (...)
	{
		cout << "at�׳��쳣" << endl;
	}

}

// �ַ�ָ����ַ�����ת��
void mainString2()
{
	string s1 = "aaaaaa";

	// 1 string -> char*
	const char* s = s1.c_str();
	cout << s << endl;

	// 2 char& -> string
	string s2 = string(s);

	// 3 s1�����ݿ�����buffer��
	char buffer[188];
	s1.copy(buffer, 3, 0);
	buffer[3] = 0;
	cout << buffer << endl;

}

// �ַ���������
void mainString3()
{
	string s1 = "111";
	string s2 = "222";
	cout << s1 + s2 << endl;
	string s3 = s1.append(s2);
	cout << s3 << endl;
}

// �ַ����Ĳ��Һ��滻
void mainString4()
{
	string s1 = "1234567890";
	int index = s1.find("67", 0); //index = -1 ˵��û�ҵ� string::npos
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

// �ַ���������ɾ���Ͳ���
void mainString5()
{
	string s1 = "hello1 hello2 hello3";

	
	string::iterator it;
	while ((it = find(s1.begin(), s1.end(), 'l')) != s1.end())
	{
		s1.erase(it);
	}
	cout << s1 << endl;

	// ȫ��ɾ��
	s1.erase(s1.begin(), s1.end());

	s1 = "BBB";
	// ����
	s1.insert(0, "AAA");
}

// �㷨���
void mainString6()
{
	string s1 = "AAAbbb";

	// 1����������ڵ�ַ 2���������� 3��Ԥ����ĺ�������
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
