#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
#include<deque>

//deque容器构造函数
//void printDeque(const deque<int>&d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it=100;  容器中数据不可修改
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//	deque<int>d3(10, 100);
//	printDeque(d3);
//	deque<int>d4(d3);
//	printDeque(d4);
//}

//deque赋值操作
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	//operator=赋值
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//	//assign 赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}

//deque大小操作
//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//	if (d1.empty())
//		cout << "d1为空！" << endl;
//	else
//	{
//		cout << "d1不为空！" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//		//deque容器没有容量
//	}
//	//重新指定大小
//	//d1.resize(15);
//	d1.resize(15,1);
//	printDeque(d1);
//}

//deque的插入与删除
//两端操作
//void printDeque(deque<int>& d)
//{
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	//打印
//	printDeque(d1);
//	//尾删
//	d1.pop_back();
//	printDeque(d1);
//	//头删
//	d1.pop_front();
//	printDeque(d1);
//}
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	printDeque(d1);
//	d1.insert(d1.begin(), 2, 10000);
//	printDeque(d1);
//	//区间插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	printDeque(d1);
//}
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//	printDeque(d1);
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	printDeque(d1);
//	//区间删除
//	//d1.erase(d1.begin(), d1.end());
//	//清空
//	d1.clear();
//	printDeque(d1);
//}

//deque数据存取
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//	//通过[]访问元素
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//	//通过at
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//	cout << "第一个元素:" << d.front() << endl;
//	cout << "最后一个元素:" << d.back() << endl;
//}

//deque排序
#include<algorithm>//标准算法
void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	deque<int>d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	printDeque(d);
	//排序  默认从小到大
	//对于支持随机访问迭代器的容器，都可以利用sort对其排序
	//vector容器也可利用sort排序
	sort(d.begin(), d.end());
	cout << "排序后：" << endl;
	printDeque(d);
}
int main()
{
	test01();
	system("pause");
	return 0;
}