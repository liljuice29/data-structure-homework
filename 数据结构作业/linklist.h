#pragma once
#include<string>
#include"student.h"
#include<iostream>
using namespace std;

typedef int elemtype;
class linklist {
public:
	elemtype data;//数据域
	linklist* next;//指针域

	linklist();//初始化线性表

	bool destorylist();//销毁线性表

	bool listempty();//判断线性表是否为空

	int listlength();//求线性表长度

	void display();//输出列表信息

	elemtype getelem(int i);//求线性表中第i个元素的值

	int locateelem(elemtype elem);//找到表中第一个与st相等的元素的位序

	void insert(elemtype st,int i);//插入学生函数

	void listdelete(int i);//删除学生




};