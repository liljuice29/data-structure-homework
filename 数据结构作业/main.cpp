#include<stdio.h>
#include"sqlist.h"
#include<iostream>

using namespace std;
int main()
{
	//数据准备
	student st1(1, "张三", 18);
	student st2(2, "李四", 19);
	student st3(3, "王五", 17);
	student st4(4, "赵六", 14);
	student st5(5, "毛不易", 26);
	student st6(6, "欧文", 28);
	student st7(7, "老大", 34);
	student st8(8, "丘比特", 99);
	student st9(9, "张学良", 109);
	student st10(10, "维尼修斯", 22);

	
	sqlist list;//创建学生列表
	//把10个学生放入列表
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

	
	//菜单
	int select = -1;

	while (true) {
		int n = 0;
		string dename;
		int stp = 0;
		cout << "输入你的需求" << endl;
		cout << " 1  添加学生" << endl;
		cout << " 2  删除学生" << endl;
		cout << " 3  按年龄排序" << endl;
		cout << " 4  显示学生表" << endl;
		//cout << " 5  销毁学生表" << endl;
		cout << " 6  判断学生表是否为空" << endl;
		cout << " 7  求学生表长度" << endl;
		cout << " 8  查找第i个学生" << endl;
		cout << " 9  按信息查找学生" << endl;
		cout << " 0  退出" << endl;
		cin>> select;
		switch (select) {
		case 1:
			
			cout << "请输入要添加学生的个数" << endl;
			cin >> n;
			for (int i = 0; i < n; i++) {
				int id = 0;
				int age = 0;
				string name;
				cout << "请输入第"<<i+1<<"个学生id  ";
				cin >> id;
				cout << "请输入第"<<i+1<<"个学生姓名  ";
				cin >> name;
				cout << "请输入第" << i + 1 << "个学生年龄  ";
				cin >> age;
				student st(id, name, age);
				list.insert(st);
			}
			system("pause");
			system("cls");
			break;
		

		case 2:
			cout << "请输入要删除的学生名字" << endl;
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
				cout << "线性表为空" << endl;
			else
				cout << "线性表不为空" << endl;
			system("pause");
			system("cls");
			break;
		case 7:
			cout << "学生表长为" << list.listlength();
			system("pause");
			system("cls");
			break;
		case 8:
			cout << "请输入你要查找的学生的位序" << endl;
			
			cin >> stp;
			if (stp<=0||stp>list.length) {
				cout << "输入值有误" << endl;
				break;
			}
			else {
				cout << "学生姓名" << list.getelem(stp).name <<
					"学生学号" << list.getelem(stp).id <<
					"学生年龄" << list.getelem(stp).age << endl;
			}

			system("pause");
			system("cls");
			break;
		case 9:
			
			for (int i = 0; i < 1; i++) {
				int id = 0;
				int age = 0;
				string name;
				cout << "请输入第" << i + 1 << "个学生id  ";
				cin >> id;
				cout << "请输入第" << i + 1 << "个学生姓名  ";
				cin >> name;
				cout << "请输入第" << i + 1 << "个学生年龄  ";
				cin >> age;
				student st(id, name, age);
				if (list.locateelem(st) == 0) {
					cout << "没有找到该学生" << endl;
				}
				else {
					cout << "该学生位于第" << list.locateelem(st) << "位" << endl;
				}
			}
			/*int idm = 0;
			int agem = 0;
			string namem;
			cout << "请输入学生id  ";
			cin >> idm;
			cout << "请输入学生姓名  ";
			cin >> namem;
			cout << "请输入学生年龄  ";
			cin >> agem;
			student stm(idm, namem, agem);*/
			
		
			
			system("pause");
			system("cls");
			break;
		case 0:
			return 0;
			break;
		default:
			cout << "输入有误，重新输入" << endl;
			system("pause");
			break;

		}

	}


}