#pragma once
#include<string>
#include"student.h"
#include<iostream>
using namespace std;

typedef int elemtype;
class linklist {
public:
	elemtype data;//������
	linklist* next;//ָ����

	linklist();//��ʼ�����Ա�

	bool destorylist();//�������Ա�

	bool listempty();//�ж����Ա��Ƿ�Ϊ��

	int listlength();//�����Ա���

	void display();//����б���Ϣ

	elemtype getelem(int i);//�����Ա��е�i��Ԫ�ص�ֵ

	int locateelem(elemtype elem);//�ҵ����е�һ����st��ȵ�Ԫ�ص�λ��

	void insert(elemtype st,int i);//����ѧ������

	void listdelete(int i);//ɾ��ѧ��




};