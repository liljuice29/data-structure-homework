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


	sqlist();//Ĭ�Ϲ��캯��

	void insert(student st);//����ѧ������

	void sort();//���б������������

	void display();//����б���Ϣ

	void listdelete(string names);//ɾ��ѧ��





};