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

	bool destory();//�������Ա�

	bool listempty();//�ж����Ա��Ƿ�Ϊ��

	int listlength();//�����Ա���

	student getelem(int i);//�����Ա��е�i��Ԫ�ص�ֵ

	int locateelem(student st);//�ҵ����е�һ����st��ȵ�Ԫ�ص�λ��

	void insert(student st);//����ѧ������

	void sort();//���б������������

	void display();//����б���Ϣ

	void listdelete(string names);//ɾ��ѧ��





};