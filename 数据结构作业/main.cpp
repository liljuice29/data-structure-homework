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

	while (true) {
		int n = 0;
		string dename;
		int stp = 0;
		cout << "�����������" << endl;
		cout << " 1  ���ѧ��" << endl;
		cout << " 2  ɾ��ѧ��" << endl;
		cout << " 3  ����������" << endl;
		cout << " 4  ��ʾѧ����" << endl;
		//cout << " 5  ����ѧ����" << endl;
		cout << " 6  �ж�ѧ�����Ƿ�Ϊ��" << endl;
		cout << " 7  ��ѧ������" << endl;
		cout << " 8  ���ҵ�i��ѧ��" << endl;
		cout << " 9  ����Ϣ����ѧ��" << endl;
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

		case 5:
			list.destory();
		
			return 0;
			break;
		case 6:
			if (list.listempty())
				cout << "���Ա�Ϊ��" << endl;
			else
				cout << "���Ա�Ϊ��" << endl;
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "ѧ����Ϊ" << list.listlength();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "��������Ҫ���ҵ�ѧ����λ��" << endl;
			
			cin >> stp;
			if (stp<=0||stp>list.length) {
				cout << "����ֵ����" << endl;
				break;
			}
			else {
				cout << "ѧ������" << list.getelem(stp).name <<
					"ѧ��ѧ��" << list.getelem(stp).id <<
					"ѧ������" << list.getelem(stp).age << endl;
			}

			system("pause");
			system("cls");
			break;
		case 9:
			
			for (int i = 0; i < 1; i++) {
				int id = 0;
				int age = 0;
				string name;
				cout << "�������" << i + 1 << "��ѧ��id  ";
				cin >> id;
				cout << "�������" << i + 1 << "��ѧ������  ";
				cin >> name;
				cout << "�������" << i + 1 << "��ѧ������  ";
				cin >> age;
				student st(id, name, age);
				if (list.locateelem(st) == 0) {
					cout << "û���ҵ���ѧ��" << endl;
				}
				else {
					cout << "��ѧ��λ�ڵ�" << list.locateelem(st) << "λ" << endl;
				}
			}
			/*int idm = 0;
			int agem = 0;
			string namem;
			cout << "������ѧ��id  ";
			cin >> idm;
			cout << "������ѧ������  ";
			cin >> namem;
			cout << "������ѧ������  ";
			cin >> agem;
			student stm(idm, namem, agem);*/
			
		
			
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


}