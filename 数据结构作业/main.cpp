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

	//准备被放入的五名学生
	student st11(11, "康康", 19);
	student st12(12, "载物", 29);
	student st13(13, "野原新之助", 7);
	student st14(14, "静香", 15);
	student st15(15, "懒洋洋", 6);

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
	int n= 0;
	string dename;
	while (true) {
		cout << "输入你的需求" << endl;
		cout << " 1  添加学生" << endl;
		cout << " 2  删除学生" << endl;
		cout << " 3  按年龄排序" << endl;
		cout << " 4  显示学生表" << endl;
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
		case 0:
			return 0;
			break;
		default:
			cout << "输入有误，重新输入" << endl;
			system("pause");
			break;

		}

	}




	//插入五名学生
	list.insert(st11);
	list.insert(st12);
	list.insert(st13);
	list.insert(st14);
	list.insert(st15);

	//对学生列表按照年龄从小到大排序
	list.sort();
	
	//输出排序结果
	list.display();

	//删除张三
	list.listdelete("张三");
	list.display();
}