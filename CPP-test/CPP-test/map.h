#pragma once
#include <iostream>
#include <string>
#include <map>
#include <set>

using std::map;
using std::string;

void Testmap()
{
	map<string, string> m;
	
	//��map�в���Ԫ�صķ�ʽ:
	//����ֵ��<test, ����>����,ֱ����pair�����ֵ��

	m.insert(std::pair<string, string>("test", "����"));

	//����ֵ��<"test", "����">���뵽map��,��make_pair�����������ֵ��
	m.insert(std::make_pair("test0", "����0"));

	//��opetator[]��map�в���Ԫ��
	//��<key, T()>����һ����ֵ�ԣ�Ȼ�����insert()�������ü�ֵ�Բ��뵽map��
	//���key�Ѿ����ڣ�����ʧ�ܣ�insert�������ظ�key����λ�õĵ�����
	//���key�����ڣ�����ɹ���insert���������²���Ԫ������λ�õĵ�����
	//operator[]�������insert����ֵ��ֵ���е�value����
	m["test1"] = "����1";

	//key������ʱ���쳣
	//m.at("test2") = "����2";

	std::cout << m.size() << std::endl;

	//�õ���������map�е�Ԫ��,�õ�һ������key���������
	for (auto& e : m)
		std::cout << e.first << "-->" << e.second << std::endl;
	std::cout << std::endl;

	//map�ļ�ֵ��keyһ����Ψһ��,������ڲ���ʧ��
	auto ret = m.insert(std::make_pair("test", "����one"));
	if (ret.second)
	{
		std::cout << "<test, ����one>������,����ɹ�" << std::endl;
	}
	else
	{
		std::cout << "��ֵtest�Ѿ�����,����ʧ��" << std::endl;
	}

	//ɾ��keyΪtest1��Ԫ��
	m.erase("test1");
	if (m.count("test1") == 1)
	{
		std::cout << "test1������" << std::endl;
	}
	else
	{
		std::cout << "test1��ɾ��" << std::endl;
	}
}



void TestSet1()
{
	// ������array�е�Ԫ�ع���set
	int array[] = { 0, 1, 2, 9, 4, 5, 6, 7, 8, 3, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	multiset<int> s(array, array + sizeof(array));
	cout << s.size() << endl;
	// �����ӡset�е�Ԫ�أ��Ӵ�ӡ����п��Կ�����set��ȥ��
	for (auto& e : s)
		cout << e << " ";
	cout << endl;
	// ʹ�õ����������ӡset�е�Ԫ��
	for (auto it = s.rbegin(); it != s.rend(); ++it)
		cout << *it << " ";
	cout << endl;
	// set��ֵΪ3��Ԫ�س����˼���
	cout << s.count(3) << endl;
}