#include<stdio.h>
#include"sqlist.h"
#include<iostream>
using namespace std;
int main()
{
	//����׼��
	student st1(1, "����", 18);
	student st2(2, "����", 19);
	student st3(3, "����", 17);
	student st4(4, "����", 14);
	student st5(5, "ë����", 26);
	student st6(6, "ŷ��", 28);
	student st7(7, "�ϴ�", 34);
	student st8(8, "�����", 99);
	student st9(9, "��ѧ��", 109);
	student st10(10, "ά����˹", 22);

	//׼�������������ѧ��
	student st11(11, "����", 19);
	student st12(12, "����", 29);
	student st13(13, "Ұԭ��֮��", 7);
	student st14(14, "����", 15);
	student st15(15, "������", 6);

	sqlist list;//����ѧ���б�
	//��10��ѧ�������б�
	list.insert(st1);
	list.insert(st2);
	list.insert(st3);
	list.insert(st4);
	list.insert(st5);
	list.insert(st6);
	list.insert(st7);
	list.insert(st8);
	list.insert(st9);
	list.insert(st10);

	//�˵�
	int select = -1;
	int n= 0;
	string dename;
	while (true) {
		cout << "�����������" << endl;
		cout << " 1  ���ѧ��" << endl;
		cout << " 2  ɾ��ѧ��" << endl;
		cout << " 3  ����������" << endl;
		cout << " 4  ��ʾѧ����" << endl;
		cout << " 0  �˳�" << endl;
		cin>> select;
		switch (select) {
		case 1:
			
			cout << "������Ҫ���ѧ���ĸ���" << endl;
			cin >> n;
			for (int i = 0; i < n; i++) {
				int id = 0;
				int age = 0;
				string name;
				cout << "�������"<<i+1<<"��ѧ��id  ";
				cin >> id;
				cout << "�������"<<i+1<<"��ѧ������  ";
				cin >> name;
				cout << "�������" << i + 1 << "��ѧ������  ";
				cin >> age;
				student st(id, name, age);
				list.insert(st);
			}
			system("pause");
			system("cls");
			break;
		

		case 2:
			cout << "������Ҫɾ����ѧ������" << endl;
			cin >> dename;
			list.listdelete(dename);
			system("pause");
			system("cls");
			break;

		case 3:
			list.sort();
			system("pause");
			system("cls");
			break;
		case 4:
			list.display();
			system("pause");
			system("cls");
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "����������������" << endl;
			system("pause");
			break;

		}

	}




	//��������ѧ��
	list.insert(st11);
	list.insert(st12);
	list.insert(st13);
	list.insert(st14);
	list.insert(st15);

	//��ѧ���б��������С��������
	list.sort();
	
	//���������
	list.display();

	//ɾ������
	list.listdelete("����");
	list.display();
}