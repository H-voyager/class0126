#pragma once
#include <set>

using std::set;
using std::cout;
using std::endl;

void TestSet()
{
	// ������array�е�Ԫ�ع���set
	int array[] = { 0,1,2,9,4,5,6,7,8,3,0,1,2,3,4,5,6,7,8,9 };
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