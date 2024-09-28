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

	bool destory();//销毁线性表

	bool listempty();//判断线性表是否为空

	int listlength();//求线性表长度

	student getelem(int i);//求线性表中第i个元素的值

	int locateelem(student st);//找到表中第一个与st相等的元素的位序

	void insert(student st);//插入学生函数

	void sort();//对列表按年龄进行排序

	void display();//输出列表信息

	void listdelete(string names);//删除学生





};