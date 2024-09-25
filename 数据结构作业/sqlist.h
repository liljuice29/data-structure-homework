#pragma once
#define maxsize 100
#include<string>
#include"student.h"
#include<iostream>
using namespace std;
class sqlist {
public:
	student list[maxsize];
	int length;


	sqlist();//默认构造函数

	void insert(student st);//插入学生函数

	void sort();//对列表按年龄进行排序

	void display();//输出列表信息

	void listdelete(string names);//删除学生





};