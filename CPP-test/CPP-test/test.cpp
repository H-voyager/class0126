#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<typeinfo>
#include <string>
#include <vector>
#include "sharedptr.h"
#include <memory>
#include "BSTree.h"
#include "RBTree.h"
#include "AVLTree.h"
#include <sstream>
#include "Seqlist.h"
#include <stack>
#include <algorithm>
#include "map.h"
#include "set.h"
#include <unordered_map>

//struct fun1
//{
//	void f1();
//};
//
//struct fun2
//{
//	int _a;
//	int _c;
//	char _b;
//	
//};
//
//struct fun3
//{
//
//};

//class A
//{
//public:
//	void PrintA()
//	{
//		cout << _a << endl;
//	}
//	void Show()
//	{
//		cout << "Show()" << endl;
//	}
//private:
//	int _a;
//};

//class Date
//{
//public:
//	Date()
//	{
//		_year = 1900;
//		_month = 1;
//		_day = 1;
//	}
//	Date(int year = 1900, int month = 1, int day = 1)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//// ���²��Ժ�����ͨ��������
//void Test()
//{
//	Date d1(1944,20,6);
//}

//class Time
//{
//public:
//	Time()
//	{
//		cout << "Time()" << endl;
//		_hour = 0;
//		_minute = 0;
//		_second = 0;
//	}
//private:
//	int _hour;
//	int _minute;
//	int _second;
//};
//class Date
//{
//private:
//	// ��������(��������)
//	int _year;
//	int _month;
//	int _day;
//	// �Զ�������
//	Time _t;
//};

//class String
//{
//public:
//	String(const char* str = "jack")
//	{
//		_str = (char*)malloc(strlen(str) + 1);
//		strcpy(_str, str);
//	}
//	~String()
//	{
//		cout << "~String()" << endl;
//		free(_str);
//	}
//private:
//	char* _str;
//};
//class Person
//{
//private:
//	String _name;
//	int _age;
//};

//class Solution {
//public:
	/**
	*  ����λ�϶�����������ż��λ�϶���ż��
	*  ���룺����arr�����ȴ���2
	*  len��arr�ĳ���
	*  ��arr����������λ�϶�����������ż��λ�϶���ż��
	*/
//	void oddInOddEvenInEven(vector<int>& arr, int len) 
//	{
//		int odd = 1;
//		int eve = 0;
//		int i = 0;
//		int j = 0;	
//
//		while (odd < len && eve < len)
//		{
//
//			if (arr[odd] % 2 == 1)
//			{
//				odd += 2;
//			}
//			if (arr[eve] % 2 == 0)
//			{
//				eve += 2;
//			}
//			if (odd < len && eve <len)
//			{
//				if (arr[odd] % 2 == 0 && arr[eve] % 2 == 1)
//				{
//					swap(arr[odd], arr[eve]);
//				}
//			}
//		}
//
//	}
//
//	void PrintVector(const vector<int>& v) 
//	{    // const����ʹ��const���������б�����ӡ
//		vector<int>::const_iterator it = v.begin();
//		while (it != v.end())
//		{
//			cout << *it << " ";
//			++it;
//		}
//		cout << endl;
//	}
//
//};
//
//class Solutionn {
//public:
//	vector<vector<int>> generate(int numRows) {
//		vector<vector<int>> vv;
//		vv.resize(numRows);
//		for (size_t i = 1; i <= numRows; i++)
//		{
//			vv[i - 1].resize(i, 0);
//			vv[i - 1][0] = 1;
//			vv[i - 1][i - 1] = 1;
//		}
//		for (size_t i = 0; i < vv.size(); i++)
//		{
//			for (size_t j = 0; j < vv[i].size(); j++)
//			{
//				if (vv[i][j] == 0)
//				{
//					vv[i][j] = vv[i - 1][j - 1] + vv[i - 1][j];
//				}
//			}
//		}
//		return vv;
//	}
//};
//
//
//class Solution2 {
//public:
//	string addStrings(string num1, string num2) {
//		int s1 = num1.size();
//		int s2 = num2.size();
//
//		while (s1 > s2){
//			num2 = '0' + num2;
//		}
//		while (s1 < s2){
//			num1 = '0' + num1;
//		}
//
//		for (int i = s1 - 1; i >= 0; i--){
//			num1[i] = num1[i] + num2[i] - '0';
//			if (num1[i] > '9'){
//				num1[i - 1] ++;
//				num1[i] = (num1[i] - '0') % 10 + '0';
//			}
//			num1[0] = num2[0] + num1[0] - '0';
//			if (num1[0] > '9'){
//				num1[0] = (num1[0] - '0') % 10 + '0';
//			}
//			num1 = '1' + num1;
//		}
//		return num1;
//	}
//};
//class A1 {
//public:
//	void f1(){}
//private:
//	int _a;
//};
//// ���н��г�Ա����
//class A2 {
//public:
//	void f2() {}
//private:
//
//	char _b;
//	int _a;
//	char _c;
//};
//// ����ʲô��û��---����
//class A3
//{};
//
//
//class Solution4 {
//public:
//	vector<string> letterCombinations(string digits) {
//		vector<string> f = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
//		vector<string> b;
//
//		if (digits.empty())
//			return b;
//
//		for (int i = 0; i < digits.size(); i++)
//		{
//			int res = digits[i] - '2';
//			int len = b.size();
//			for (int i = 0; i < len; i++)
//			{
//				for (auto m : f[res])
//				{
//					b.push_back(b[i] + m);
//				}
//			}
//			b.erase(b.begin(), b.begin() + len);
//		}
//		return b;
//	}
//};
//
//template<class T>
//bool IsEqual(T& left, T& right)
//{
//	return left == right;
//}
//void Test1()
//{
//	char* p1 = "hello";
//	char* p2 = "world";
//	if (IsEqual(p1, p2))
//		cout << p1 << endl;
//	else
//		cout << *p1 << "," << *p2 << endl;
//		cout << p2 << endl;
//}
//
//#include "point.h"
//#include <list>
//
//
//void TestListIterator1()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	auto it = l.begin();
//	while (it != l.end())
//	{
//		// erase()����ִ�к�it��ָ��Ľڵ��ѱ�ɾ�������it��Ч������һ��ʹ��itʱ�������ȸ��丳ֵ
//		l.erase(it);
//		++it;
//	}	
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << "\n" << endl;
//	}
//}
//// ����
//void TestListIterator()
//{
//	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	list<int> l(array, array + sizeof(array) / sizeof(array[0]));
//	auto it = l.begin();
//	while (it != l.end())
//	{
//		//l.erase(it++);
//		it = l.erase(it);
//	}
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it <<"\n"<< endl;
//	}
//}

//// size/clear/resize
//void TestString1()
//{	// ȡ��url�е�����
	//string url("http://www.cplusplus.com/reference/string/string/");
	//cout << url << endl;
	//size_t start = url.find("://");
	//if (start == string::npos)
	//{
	//	cout << "invalid url" << endl;
	//	return;
	//}
	//start += 3;
	//size_t finish = url.find('/', start);
	//string address = url.substr(start, finish - start);
	//cout << address << endl;
	//// ɾ��url��Э��ǰ׺
	//size_t pos = url.find("://");
	//url.erase(0, pos + 3);
	//cout << url << endl;
/////////////////////////////////////////////////
	////��ȡfile��׺
	//string file{ "string.cpp" };
	//size_t pos = file.rfind('.');
	////string suffix(file.substr(pos, file.size() - pos));
	//string suffix;
	//suffix.append(file.begin() + pos, file.end());
	//cout << suffix << endl;
	//cout << address << endl;
	//// ɾ��url��Э��ǰ׺
	//pos = url.find("://");
	//url.erase(0, pos + 3);
	//cout << url << endl;
/////////////////////////////////////////
	//std::string str;
	//std::string str2 = "Witing ";
	//std::string str3 = "Please ";

	//str.append(str2);//׷��str2
	//str.append(str3, 2, 3);//׷��str3 2-3-4�ַ�
	//str.append("Something", 4);//׷��ǰ4���ַ�
	//str.append("here: ");//׷��""���ַ�
	//str.append(10u, '.');//׷��10��'.'
	//str.append(str3.begin() + 2, str3.end());//׷��str3��2���ַ���ʼ����β

	//cout << str.c_str();
//////////////////////////////////////
//string ��3�ֱ�����ʽ for+operator[]  ������  ��Χfor
	//string s("hello world");
	//for (int i = 0; i < s.size(); i++)
	//{
	//	cout << s[i];
	//}
	//cout << "\n" << endl;

	////string�ķ������
	//string::reverse_iterator it = s.rbegin();
	//while (it != s.rend())
	//{
	//	cout << *it;
	//	++it;
	//}
	//cout << "\n" << endl;
	//for (auto &e : s)
	//{
	//	cout << e;
	//}
//////////////////////////////////////////////////	
	/*string s1("hello Bit");
	const string s2("Hello Bit");
	cout << s1 << " " << s2 << endl;
	cout << s1[0] << " " << s2[0] << endl;

	s1[0] = 'H';
	cout << s1 << endl;*/
/////////////////////////////////////////////////
//	// ע�⣺string�����֧��ֱ����cin��cout������������
//	string s("hello world!!!");
//	cout << s.size() << endl;
//	cout << s.length() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	cout << "= == == == == == == == == " << endl;
//	// ��s�е��ַ�����գ�ע�����ʱֻ�ǽ�size��0�����ı�ײ�ռ�Ĵ�С
//	s.clear();
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << "= == == == == == == == == " << endl;
//	// ��s����Ч�ַ��������ı䵽10�������λ����'a'�������
//	// ��aaaaaaaaaa��
//	s.resize(10, 'a');
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << "= == == == == == == == == " << endl;
//	// ��s����Ч�ַ��������ӵ�20�������λ����ȱʡֵ'\0'�������
//	// "aaaaaaaaaa\0\0\0\0\0"
//	s.resize(20);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	cout << "= == == == == == == == == " << endl;
//	// ��s����Ч�ַ�������С��5��
//	s.resize(5);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	cout << s << endl;
//	cout << "= == == == == == == == == " << endl;
//	// reserve�����ı�string����ЧԪ�ظ���
//	s.reserve(50);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//	// ��reserve����С��string�ĵײ�ռ��Сʱ�����Ὣ�ռ���С
//	s.reserve(40);
//	cout << s.size() << endl;
//	cout << s.capacity() << endl;
//}

//class SolutionA {
//public:
//	int firstUniqChar(string s) {
//		int count[256] = { 0 };
//		int size = s.size();
//		for (int i = 0; i <size; i++){
//			count[s[i]] += 1;
//		}
//
//		for (int i = 0; i < size; i++){
//			if (count[s[i]] == 1)
//				return i;
//		}
//		return -1;
//	}
//};


//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	char _a = 'a';
//	int _b = 1;
//};

//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	virtual void Func2()
//	{
//		cout << "Base::Func2()" << endl;
//	}
//	void Func3()
//	{
//		cout << "Base::Func3()" << endl;
//	}
//private:
//	int _b = 1;
//};
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//private:
//	int _d = 2;
//};



class Date
{
public:
	Date() { cout << "Date()" << endl; }
	~Date(){ cout << "~Date()" << endl; }

	int _year;
	int _month;
	int _day;
};



struct ListNode
{
	int _data;
	weak_ptr < ListNode> _prev;
	weak_ptr < ListNode> _next;
	~ListNode(){ cout << "~ListNode()" << endl; }
};


class Base
{
public:
	virtual void Func1()
	{
		cout << "Base::Func1()" << endl;
	}
	virtual void Func2()
	{
		cout << "Base::Func2()" << endl;
	}
	void Func3()
	{
		cout << "Base::Func3()" << endl;
	}
private:
	int _b = 1;
};


class Derive : public Base
{
public:
	virtual void Func1()
	{
		cout << "Derive::Func1()" << endl;
	}
private:
	int _d = 2;
};

class SolutionS {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> even;
		vector<int> uneven;
		for (int i = 0; i < array.size(); i++)
		{
			if ((array[i] % 2) == 0)
			{
				even.push_back(array[i]);
			}
			else
			{
				uneven.push_back(array[i]);
			}
		}
		for (int i = 0; i < even.size(); i++)
		{
			uneven.push_back(even[i]);
		}
		for (int i = 0; i < uneven.size(); i++)
		{
			cout << uneven[i];
		}
	}
};

class SolutionQ {
public:
	vector<int> printMatrix(vector<vector<int> > matrix)
	{
		vector<int> ret;
		if (matrix.empty())return ret;

		int x, y, cnt = matrix[0].size()*matrix.size();
		int rEdge = matrix[0].size() - 1, dEdge = matrix.size() - 1, lEdge = 0, uEdge = 0;

		for (x = 0, y = 0; cnt>0; cnt--)
		{
			ret.push_back(matrix[x][y]);

			if (x == uEdge)
			{
				if (y<rEdge)
					y++;
				else if (y == rEdge)
				{
					x++;
				}
				continue;
			}

			if (y == rEdge)
			{
				if (x<dEdge)x++;
				else if (x == dEdge)
				{
					y--;
				}
				continue;
			}

			if (x == dEdge)
			{
				if (y>lEdge)y--;
				else if (y == lEdge)
				{ 
					x--;
				}
				continue;
			}

			if (y == lEdge){
				if (x>uEdge + 1)
					x--;
				else if (x == uEdge + 1)
				{
					y++;
					lEdge++;
					uEdge++;
					rEdge--;
					dEdge--;
				}
				continue;
			}
		}
		return ret;
	}
};

//���������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ����Ϊ��ջ�ĵ���˳��
//����ѹ��ջ���������־�����ȡ���������1,2,3,4,5��ĳջ��ѹ��˳������4,5,3,2,1�Ǹ�ѹջ
//���ж�Ӧ��һ���������У���4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�
class SolutionE {
public:
	bool IsPopOrder(vector<int> pushV, vector<int> popV) {
		if (pushV.size() != popV.size())
			return false;

		stack<int> Stack;
		for (int i = 0; i < pushV.size(); i++)
		{
			Stack.push(pushV[i]);
		}
		for (int i = 0; i < popV.size(); i++)
		{
			if (popV[i] == Stack.top())
			{
				Stack.pop();
			}
			else
			{
				return false;
			}
		}
		return true;
	}
};

class SolutionT {
public:
	int MoreThanHalfNum_Solution(vector<int> numbers) {
		int times = numbers.size() / 2;
		unordered_map<int, int> Map;
		for (auto e : numbers)
		{
			Map[e]++;
		}
		for (auto e : Map)
		{
			if (e.second > times)
				return e.first;
		}
		return 0;
	}
};



struct TreeNode {
int val;
struct TreeNode *left;
struct TreeNode *right;
TreeNode(int x) :
val(x), left(NULL), right(NULL) {
}
};

class Solution {
public:
	TreeNode* KthNode(TreeNode* pRoot, int k)
	{
		if (pRoot == nullptr || k == 0)
			return nullptr;
		stack<TreeNode*> Stack;
		int count = 0;
		TreeNode* node = pRoot;
		do{
			if (node != nullptr){
				Stack.push(node);
				node = node->left;
			}
			else{
				node = Stack.top();
				Stack.pop();
				count++;
				if (count == k)
					return node;
				node = node->right;
			}
		} while (node != nullptr || !Stack.empty());
		return nullptr;

	}
};

class SolutionX {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
	{
		map<int, int> Map;
		vector<int> res;
		int size = input.size();
		for (int i = 0; i < size; i++)
		{
			Map.insert(make_pair(input[i],input[i]));
		}
		map<int, int> ::iterator it = Map.begin();

		for (int i = 0; i < k; i++)
		{
			res.push_back(it->first);
			it++;

		}
		return res;
	}
};

int compare1(string str1, string str2)//�Զ���ıȽϴ�С�ĺ�����str1 "С"�Ļ�������true
{	//if(str1>=str2) then str1+str2 >=str2+str1
	string tmp1 = str1.append(str2);
	string tmp2 = str2.append(str1);
	//cout<<tmp1<<" "<<tmp2<<endl;
	if (tmp1.compare(tmp2)<0)//
		return true;
	return false;
}


class SolutionG {
public://���˵Ĵ�����Ǿ��򣬲�����������ѧϰ��
	int GetUglyNumber_Solution(int index) {
		if (index < 7)return index;
		vector<int> res(index);
		res[0] = 1;
		int t2 = 0, t3 = 0, t5 = 0, i;
		for (i = 1; i < index; ++i)
		{
			res[i] = min(res[t2] * 2, min(res[t3] * 3, res[t5] * 5));
			if (res[i] == res[t2] * 2)t2++;
			if (res[i] == res[t3] * 3)t3++;
			if (res[i] == res[t5] * 5)t5++;
		}
		return res[index - 1];
	}
};

class SolutionI {
public:
	long long InversePairsCore(vector<int>& data, vector<int>& copy, int start, int end)
	{
		if (start == end)
		{
			copy[start] = data[start];
			return 0;
		}

		int length = (end - start) / 2;
		long long left = InversePairsCore(copy, data, start, start + length);
		long long right = InversePairsCore(copy, data, start + length + 1, end);

		//i��ʼ��Ϊǰ������һ�����ֵ��±�
		int i = start + length;
		//j��ʼ��Ϊ�������һ�����ֵ��±�
		int j = end;
		int indexCopy = end;
		long long count = 0;
		while (i >= start && j <= start + length + 1)
		{
			if (data[i] > data[j])
			{
				copy[indexCopy--] = data[i--];
				count += j - start - length;
			}
			else
			{
				copy[indexCopy--] = data[j--];
			}
		}
		for (; i >= start; i--)
		{
			copy[indexCopy--] = data[i];
		}
		for (; j >= start +length +1; j--)
		{
			copy[indexCopy--] = data[j];
		}
		return left + right + count;
	}
	int InversePairs(vector<int> data)
	{
		if (data.size() == 0)
		{
			return 0;
		}
		int length = data.size();
		vector<int> copy;
		for (int i = 0; i < length; i++)
		{
			copy.push_back(data[i]);
		}
		long long count = InversePairsCore(data, copy, 0, length - 1);
		
		return count % 1000000007;
	}
};

class SolutionGN {
public:
	int GetNumberOfK(vector<int> data, int k) {
		unordered_map<int,int> map;
		for (auto e : data)
		{
			map[e]++;
		}
		for (auto e : map)
		{
			if (e.second == k)
			{
				return e.first;
			}
		}
	}
};
class SolutionFN {
public:
	void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
		vector<int> res;
		unordered_map<int, int> map;
		for (auto e : data)
		{
			map[e]++;
		}
		for (auto e : map)
		{
			if (e.second == 1)
			{
				res.push_back(e.first);
			}
		}
		num1[0] = res[0];
		num2[0] = res[1];
	}
};

class SolutionLR {
public:
	string LeftRotateString(string str, int n) {
		string tmp;
		tmp = str.substr(n, str.size() - 1);
		str.erase(n, str.size() - 1 );
		tmp += str;
		return tmp;
	}
};

class SolutionIC {
public:
	bool IsContinuous(vector<int> numbers) {
		if (numbers.empty() || numbers.size() != 5 )
			return false;
		std::sort(numbers.begin(), numbers.end());
		for (int i = 0; i < numbers.size() - 1; i++)
		{
			int tmp = 0;
			if (numbers[i] == 0)
				tmp++;

			tmp = std::abs(numbers[i + 1] - numbers[i]);
			if (tmp != 1)
			{
				return false;
			}
		}
		return true;
	}
};


class SolutionDL {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		vector<int> v(numbers, numbers + length);
		map <int, int> map;
		unordered_map<int, int> umap;
		multimap<char, int> first;

		struct classcomp {
			bool operator() (const char& lhs, const char& rhs) const
			{
				return lhs<rhs;
			}
		};
		first.insert(std::pair<char, int>('a', 10));
		first.insert(std::pair<char, int>('b', 15));
		first.insert(std::pair<char, int>('b', 20));
		first.insert(std::pair<char, int>('c', 25));

		std::multimap<char, int> second(first.begin(), first.end());

		std::multimap<char, int> third(second);

		std::multimap<char, int, classcomp> fourth;                 // class as Compare

		for (auto e : v )
		{
			map[e]++;
			umap[e]++;
		}
		for (auto e : map)
		{
			if (e.first == *duplication && e.second > 1)
			{
				return true;
			}
		}
		return false;
	}
};


class solutionIG
{
public:
	multiset<int> rec;
	void Insert(int num)
	{
		rec.insert(num);
	}
	double GetMedian()
	{
		auto it1 = rec.begin(), it2 = it1;
		advance(it1, rec.size() / 2);
		advance(it2, rec.size() / 2 - !(rec.size() % 2));
		return (*it1 + *it2) / 2.0;
	}
	//string function(string& str1, string& str2)
	//{
	//	int length1 = str1.size();
	//	int length2 = str2.size();
	//	string res;
	//	for (int i = 0; i < length1; i++)
	//	{
	//		for (int j = 0; j < length2; j++)
	//		{
	//			if (str1[i] == str2[j])
	//			{
	//				
	//			}
	//		}

	//	}

	//}

};

class SolutionIF
{
public:

	string s;
	char hash[256];
	//Insert one char from stringstream
	void Insert(char ch)
	{
		s += ch;
		hash[ch] += 1;
	}
	//return the first appearence once char in current stringstream
	char FirstAppearingOnce()
	{
		int size = s.size();
		for (int i = 0; i < size; i++){
			if (hash[s[i]] == 1)
				return s[i];
		}
		return '#';
	}
};

class SolutionMA {
public:
	vector<int> maxInWindows(const vector<int>& num, unsigned int size)
	{
		vector<int> res;
		deque<int> s;
		for (unsigned int i = 0; i<num.size(); ++i){
			while (s.size() && num[s.back()] <= num[i])//�Ӻ������ε��������бȵ�ǰnumֵС��Ԫ�أ�ͬʱҲ�ܱ�֤������Ԫ��Ϊ��ǰ�������ֵ�±�
				s.pop_back();
			while (s.size() && i - s.front() + 1>size)//����ǰ�����Ƴ�����Ԫ�����ڵ�λ�ã�������Ԫ�������Ӧ��num���ڴ����У���Ҫ����
				s.pop_front();
			s.push_back(i);//��ÿ�λ�����num�±�������
			if (size&&i + 1 >= size)//�����������׵�ַi���ڵ���sizeʱ�ſ�ʼд�봰�����ֵ
				res.push_back(num[s.front()]);
		}
		return res;
	}
};

//�����е����·��
class SolutionHS {
public:
	bool hasPath(char* matrix, int rows, int cols, char* str)
	{
		if (matrix == NULL || rows < 1 || cols < 1 || str == NULL)
			return false;
		bool *flag = new bool[rows * cols];
		memset(flag, false, rows * cols);
		for (int i = 0; i< rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Search(matrix, rows, cols, i, j, str, 0, flag))
				{
					return true;
				}
			}
		}
		delete[] flag;
		return  false;
	}
	bool Search(char* matrix, int rows, int cols, int i, int j, char* str, int k, bool *flag)
	{
		int index = i * cols + j;
		if (i < 0 || i > rows || j > cols || matrix[index] != str[k] || flag[index] == true)
		{
			return false;
		}
		if (str[k + 1] == '\0')
			return true;
		flag[index] = true;
		if (Search(matrix, rows, cols, i - 1, j, str, k + 1, flag)
			|| Search(matrix, rows, cols, i + 1, j, str, k + 1, flag)
			|| Search(matrix, rows, cols, i, j - 1, str, k + 1, flag)
			|| Search(matrix, rows, cols, i, j + 1, str, k + 1, flag))
		{
			return true;
		}
		flag[index] = false;
		return false;
	}

};

void Swap(int array[], int i, int j) {
	int t = array[i];
	array[i] = array[j];
	array[j] = t;
}

//1.ð������
//ʱ�临�Ӷ� �� ���O��n����ƽ��O��n^2��,�O��n^2���ռ临�Ӷ�: O(1) �ȶ���: �ȶ�
void BubbleSor(int array[],int  size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size -1 - i; j++)
		{
			int is_sorted = 1;
			if (array[j] > array[j + 1])
			{
				int t = array[j];
				array[j] = array[j + 1];
				array[j + 1] = t;
				is_sorted = 0;
			}
			if (is_sorted == 1)
			{
				break;
			}
		}
	}
}
//2.ѡ������
// 1. ֱ��ѡ��
/*
ʱ�临�Ӷ�:	���ݲ�����		O(n^2)
�ռ临�Ӷ�: O(1)
�ȶ���: ���ȶ�
*/
void selectsort(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int maxIdx = 0;
		//��������[n - i, size - 1]
		//��������[0,n - 1 - i]
		for (int j = 0; j <= n - i - 1; j++)
		{
			if (array[j] >= array [maxIdx])
			{
				maxIdx = j;
			}
		}
		// maxIdx ��¼���������䲿�����������±�
		// ��������������һ��λ�õ������н���
		Swap(array, maxIdx, n - 1 - i);
	}
}
void selectSortop(int array[], int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin < end)
	{
		int min = begin;
		int max = begin;
		for (int i = begin; i <= end; i++)
		{
			if (array[i] > array[max])
			{
				max = i;
			}
			if (array[i] < array[min])
			{
				min = i;
			}
		}
		Swap(array, min, begin);
		if (max == begin)
		{
			max == min;
		}
		Swap(array, max, end);

		begin++;
		end--;
	}
}

//3.��������
/*
ʱ�临�Ӷ�:
���		O(n��			����
ƽ��		O(n^2)
�		O(n^2)			����
�ռ临�Ӷ�:
O(1)
�ȶ���: �ȶ�
*/
void InsertSort(int array[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int key = array[i];
		int j;
		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}
		array[j + 1] = key;
	}
}
/*
4.��������
ÿһ��� Partition
ʱ�临�Ӷ��� O(n)
�ռ临�Ӷ��� O(1)
�����ٸ� O(n)���������߶ȸ� O(n)
�ռ��������ڵݹ���õ�ջ֡���ģ��������ĵ�����Ƕ������ĸ߶�
�������ĸ߶��� log(n) - n �ڱ仯
���						ƽ��					�
ʱ�临�Ӷ�		O(n * log(n))				O(n * log(n))			O(n^2)
�ռ临�Ӷ�		O(log(n))					O(log(n))				O(n)

�ȶ���: ���ȶ�
*/
int partition(int array[], int right, int left)
{
	int d = left;
	for (int i = left; i < right;i++)
	{
		if (array[i] < array[right])
		{
			Swap(array, i, d);
			d++;
		}
	}
	Swap(array, d, right);
	return d;
}
void QuickSortInner(int array[], int left, int right)
{
	if (left == right)
	{
		return;
	}
	if (left > right)
	{
		return;
	}
	//1.ȷ�ϻ�׼ֵ��ѡ����棬pivot = array[right]Ϊ��׼ֵ
	//2.�������䣬�����иֱ��С���󣬴���ң����ҷ������ջ�׼ֵ���ڵ��±�
	int d = partition(array, left, right);
	QuickSortInner(array, left, d - 1);
	QuickSortInner(array, d + 1, right);
}
void QuickSort(int array[], int n)
{
	QuickSortInner(array, 0, n - 1);
}
//5.
void GetMemory(char *p)
{
	p = (char *)malloc(100);
	
}

long long FindMaxK(long long n)
{
	
	//�ɽ����ʽת��Ϊ���������������ֵ
	long long k = 0;
	long long tmp = 0;
	while (tmp <= n)
	{
		tmp = k * (k + 1);
		if (tmp <= ((n / 3) - 3))
			k++;
		else
		{
			break;
		}
	}
	return k;
}







void putv(char *pstr)
{
	cout << pstr << endl;
	cout << *pstr << endl;
}


int main()
{
	struct A
	{
		//char a;
		//short h;
		//int c;
		int a; //4
		short b; //2
		int c; //4
		char d; //1
	};
	struct B
	{
		//char a;
		//int b;
		//long long c;
		//char d;
		int a; //4
		short b; //2 
		char c;  //1
		int d; //4
	};
	union C
	{
		int c;
		char a;
	};
	struct A s1 = {
		1,
		2,
		3,
		'a',
	};
	struct B s2 = {
		1,
		2,
		'a',
		3,
	};
	cout << sizeof(A) << sizeof(B) << endl;
	cout << s1.a << s1.b << s1.c << s1.d << endl;
	cout << &s1.a << " " << &s1.b << " " << &s1.c << " " << &s1.d << endl;
	cout << s2.a << s2.b << s2.c << s2.d << endl;
	cout << &s2.a << " " << &s2.b << " " << &s2.c << " " << &s2.d;
	//char szInput[256] = "123456\0";
	//char ch[] = { 'a','b','c' };
	//printf("Enter a sentence: ");
	////gets(szInput);
	//printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
	//printf("The sentence entered is %u characters long.\n", sizeof(szInput));




	//char ch[] = "abc";
	//cout << sizeof(ch) << " " << ch[0] << endl;
	//cout << strlen(ch) << " " << ch[0] << endl;
	//char chh[] = "ab\0c";
	//cout << sizeof(chh) << " " << chh[2] << endl;
	//cout << strlen(chh) << " " << chh[0] << endl;
	//char *chhh = "abc";
	//cout << sizeof(chhh) << " " << chhh << endl;
	//cout << strlen(chhh) << " " << chhh << endl;
	//char *c = "ab\0c";
	//cout << sizeof(c) << " " << c << endl;
	//cout << strlen(c) << " " << c << endl;
	//putv(c);
	//int array[] = {4,5,6};
	//
	//cout <<sizeof(array) / sizeof(int);
	//vector<int> v(array, array + sizeof(array) / sizeof(int));
	//for (auto e : v)
	//{
	//	cout << e;
	//}




	//int X;//�������ݵ�������
	//int Y;//��ӵ�е���Ʒ���
	//int Z;//��Ҫ�һ�����Ʒ���
	//vector<vector<int>> vv;//a , b, c ����Ʒa�ɶһ���Ʒb����Ҫ֧��c
	//vector<int> r;
	//int Min_Pay;
	//map<int, vector<int>> map;
	//for (int i = 0; i < X; i++)
	//{
	//	if (vv[i][0] == Y && vv[i][1] == Z)
	//	{
	//		r.push_back(vv[i][0]);
	//		r.push_back(vv[i][1]);
	//		map.insert(make_pair(vv[i][2], r));
	//	}
	//	r.erase;
	//}
	//auto e = map.begin;
	//Min_Pay = e.first;
	//r = e.second;
	//for (int i = 0; i < X; i++)
	//{
	//	int pay1 = 0;
	//	if (vv[X][0] == Y && vv[X][1] == Z)
	//	{
	//		pay1 = vv[X][2];
	//		r.push_back(vv[X][0]);
	//		r.push_back(vv[X][1]);
	//	}
	//	int pay2 = 0;
	//	for (int j = ; i < ; i++)
	//	{

	//	}
	//}



	//int a = 1, b = 2, c = 2;
	//int i = 0;
	//while (a<b<c) 
	//{
	//	int t = a;
	//	a = b;
	//	b = t;
	//	c--;
	//	i++;
	//}
	//printf("%d,%d,%d", a, b, i);
	//char c[5] = { 'a', 'b','\0','c','\o' };
	//printf("%s", c);
	//int x, y;
	//if (x < y)
	//{
	//	x++;
	//	y++;
	//}

	//char a[20] = "hello world";
	//cout << sizeof(a) << endl;
	//cout << strlen(a) << endl;

	//vector<int> num = { 2, 3, 4, 2, 6, 2, 5, 1 };
	//int size = 3;
	//SolutionMA MA;
	//MA.maxInWindows(num, size);
	//vector<int> res = MA.maxInWindows(num, size);
	//vector<int>::iterator it = res.begin();
	//while (it != res.end())
	//{
	//	cout << *it << " ";
	//	++it;
	//}


	//solutionIG IG;
	//int num = 0;
	//while (cin >> num)
	//{
	//	IG.Insert(num);
	//}
	//double res = IG.GetMedian();
	//cout << res;



	//auto_ptr< string> p1(new string("hello world"));
	//auto_ptr<string> p2;
	//p2 = p1; //auto_ptr���ᱨ��.
	////cout << *p1;
	//cout << *p2;

	//unique_ptr<string> ps1, ps2;
	//ps1 = unique_ptr<string>(new string("hello"));
	//ps2 = move(ps1);
	//ps1 = unique_ptr<string>(new string("alexia"));
	//cout << *ps2 << *ps1 << endl;

	//int arr[] = { 10, 20, 30 };
	//int *brr = arr;
	//cout << *brr << endl;
	//cout << *(brr + 1) << endl;
	//cout << *(brr + 2) << endl;
	//
	//cout << *(brr) << endl;
	//cout << *brr + 1 << endl;
	//cout << *brr + 2 << endl;
	//char ch1 []= { 'g', 'o', 'o', 'g', 'l', 'e' };
	//SolutionIF IF;
	//for (int i = 0; i < (sizeof(ch1)/sizeof(char)); i++)
	//{
	//	IF.Insert(ch1[i]);	
	//}
	//char res = IF.FirstAppearingOnce();
	//cout << res;




	//map<int, int> map;
	//map.insert('2', '1');
	//int  i = map.size();
	//cout << i;
	//int  a[2][3] = { { 1, 2, 3 }, { 4, 5, 6 } }, (*p)[3], *q[3];
	//p = a;
	////cout << *p[0]<<*p[0] + 1<<*p[1]<<*p[3];
	////q = a;//���ɸ�ֵ
	//p = &a[1];
	//q[0] = &a[0][0];//1
	//q[1] = &a[0][2];//3
	//q[2] = &a[1][0];//4
	//q[3] = &a[1][2];//6
	//cout << *q[0];
	//cout << *q[1];
	//cout << *q[2];
	//cout << *q[3];
	////q = &a[1];//���ɸ�ֵ


	//int number[] = { 2, 1, 3, 1, 4 };
	//SolutionDL DL;
	//int output = 1;

	//int *p = &output;
	//bool a = DL.duplicate(number, length, p);
	//cout << a;
	/*string s = "bcba";
	int length = s.size()
	for (int i = 0; i < length; i++)
	{
	cout <<s[i] ;
	}
	*/

	/*string s("stringvrctor");
	SolutionLR LR;
	LR.LeftRotateString(s, 3);
	string tmp = LR.LeftRotateString(s, 3);
	for (auto e : tmp)
	{
	cout << e;
	}*/


	//SolutionFN I;
	//int* num1 = 0,* num2 = 0;
	//int arr[] = { 1, 2, 2, 4, 4, 6, 6, 7 };
	//vector<int> v(arr, arr + sizeof(arr) / sizeof(int));
	//I.FindNumsAppearOnce(v,num1,num2);

	//cout << num1[0];
	//cout << num2[0];

	//char a[100];
	//while (cin.getline(a,100))
	//{
	//	cout << a << endl;
	//	puts(a);
	//}
	//string str;
	//while (cin >> str)
	//{
	//	cout << str << endl;
	//}
	//SolutionG G;
	//cout<<G.GetUglyNumber_Solution(10);




	////ȡ��С����������
	//int num[] = { 332, 41, 322, 32, 414, 4 };
	//int len = sizeof(num) / sizeof(int);
	//cout << "len = " << len << endl;
	//string *word = new string[len];
	//stringstream sst;
	//for (int i = 0; i<len; i++)//��int����ת�����ַ���
	//{
	//	sst << num[i];
	//	sst >> word[i];
	//	sst.clear();
	//}
	//cout << endl;
	//sort(word, word + len, compare1);//���÷����㷨����
	//for (int i = 0; i<len; i++)
	//{
	//	cout << word[i];
	//}
	//getchar();

	//int a[] = { 1, 2, 3, 2, 4, 2, 5, 2, 3 };
	//int b[] = { 4, 5, 1, 6, 2, 7, 3, 8 };
	//vector<int> pushV(a, a + sizeof(a) / sizeof(int));
	//vector<int> popV(b, b + sizeof(b) / sizeof(int));


	//SolutionX X;
	//vector<int> re = X.GetLeastNumbers_Solution(popV, 4);
	//vector<int> ::iterator it = re.begin();	
	//while (it != re.end())
	//{
	//	cout << *it;
	//	it++;
	//}


	//SolutionE E;
	//E.IsPopOrder(pushV, popV);
	//	SolutionT T;
	//	int res = T.MoreThanHalfNum_Solution(pushV);





	//SolutionQ Q;
	//int a[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//vector<vector<int>> vv(3,vector<int>(3));
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		vv[i][j] = a[i][j];
	//	}
	//}
	//vector<int> ret = Q.printMatrix(vv);
	//for (int i = 0; i < ret.size(); i++)
	//{
	//	cout << ret[i];
	//}


	//Base b;
	//Derive d;

	//d.Func1();
	//d.Func2();
	//d.Func3();


	//string s;
	//s = "string";
	//string v("vector");
	//string l("list map");
	//vector<string> vs;
	//vs.push_back(s);
	//vs.push_back(v);
	//vs.push_back(l);
	//auto pos = find(vs.begin(),vs.end(),"vector");
	////vs.erase(pos);
	//for (int i = 0; i < vs[1].size(); i++)
	//{
	//	cout << vs[1][i];
	//}
	//for (auto& e : vs)
	//{
	//	cout << e << endl;
	//}

	//int a[] = { 10, 12, 13, 14 };
	//cout << &a << endl;
	//int*ptr = (int*)(&a + 1);
	//cout << *ptr;


	/*	vector<int> in( a ,a+sizeof(a)/sizeof(int));
		vector<int>::iterator pos1 = find(in.begin(), in.end(), 13);
		cout << *pos1 << endl;

		for (auto& e : in)
		{
		cout << e << endl;
		}
		struct sw
		{
		int x : 3;
		int y : 4;
		int z : 5;
		double a;
		};
		cout << sizeof(sw) << endl*/;
	//һ������4G�ڴ�
	//void* p = new char[0xfffffffful];
	//cout << "new:" << p << endl;

	//TestRBtree();

	//TestAVLTree();

	//TestBSTree();

	//TestSet();

	//Testmap();

	//shared_ptr<ListNode> node1(new ListNode);
	//shared_ptr<ListNode> node2(new ListNode);
	//cout << node1.use_count() << endl;
	//cout << node2.use_count() << endl;
	//node1->_next = node2;
	//node2->_prev = node1;
	//cout << node1.use_count() << endl;
	//cout << node2.use_count() << endl;

	//SharedPtr<int> sp1(new int(10));
	//SharedPtr<int> sp2(sp1);
	//*sp2 = 20;
	//cout << sp1.UseCount() << endl;
	//cout << sp2.UseCount() << endl;
	//SharedPtr<int> sp3(new int(10));
	//sp2 = sp3;
	//cout << sp1.UseCount() << endl;
	//cout << sp2.UseCount() << endl;
	//cout << sp3.UseCount() << endl;
	//sp1 = sp3;
	//cout << sp1.UseCount() << endl;
	//cout << sp2.UseCount() << endl;
	//cout << sp3.UseCount() << endl;


	//shared_ptr<Date> sp(new Date);
	//shared_ptr<Date> copy(sp);

	//cout << "ref count:" << sp.use_count() << endl;
	//cout << "ref count:" << copy.use_count() << endl;


	//auto_ptr<Date> ap(new Date);
	//auto_ptr<Date> copy(ap);
	//// auto_ptr�����⣺�����󿽱����߸�ֵ��ǰ��Ķ����������
	//// C++98����Ƶ�auto_ptr�����Ƿǳ����Եģ�����ʵ���кܶ๫˾��ȷ�涨�˲���ʹ��auto_ptr
	//ap->_year = 2018;


	//Base b;
	//Derive d;
	//Base base;
	//cout << sizeof(base) << endl;
	//Test();
	//SolutionA A;
	//int i = A.firstUniqChar("loveleetcode");
	//cout << i;
	//cout << typeid(c).name() << endl;
	//TestString1();
	/*struct A
	{
	long a1;
	short a2;
	int a3;
	int *a4;
	};
	long a1;
	cout << sizeof(A) << endl;*/

	//char str[80];

	//sprintf(str, "Pi ��ֵ = %d", 123456);
	//puts(str);
	//TestListIterator();


	//Test1();
	////cout << sizeof(A1) << sizeof(A2) << sizeof(A3) << endl;
	//system("pause");
	//return 0;



	/*string num1 = ("1");
	string num2 = ("1");
	Solution2 A;
	num1 = A.addStrings(num1, num2);
	cout <<num1 << endl;*/


	//vector <int> arr;
	//arr.resize(5,100);
	//for (int  i = 0; i < arr.size(); i++)
	//{
	//	cout << ' ' << arr[i] << endl;
	//}
	//	Solution A;
	//	A.oddInOddEvenInEven(arr, arr.capacity());
	//	A.PrintVector(arr);
	//
	//Person p;

	//Date d;

	//A* p = NULL;
	//p->PrintA();
	//p->Show();
	/*cout << sizeof(fun1) << endl;
	cout << sizeof(fun2) << endl;
	cout<<sizeof(fun3) << endl;*/
	//int b = 20;
	//int a = 30;
	//int ** aa = new int*[10];
	//int *a = new int[10];
	//int *p = &b;
	//*p << endl;
	//cout << p << '\n' << *p << endl;

	system("pause");
	return 0;
}

