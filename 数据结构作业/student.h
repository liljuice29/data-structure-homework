#pragma once
#include<string>
using namespace std;
class student {
public:
	int age;//年龄
	string name;//姓名
	int id;//学号

	student();//默认构造函数

	student(int ids, string names, int ages);//有参构造
};