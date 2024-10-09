#include"linklist.h"
linklist::linklist()//初始化线性表
{
	this->next = nullptr;
}

bool linklist::destorylist()//销毁线性表
{
	linklist* p;
	linklist* l = this;
	while (l) {
		p = l;
		l = l->next;
		delete p;
	}
	return true;
}

bool linklist::listempty()//判断线性表是否为空
{
	if (this->next == nullptr) {
		return true;
	}
	return false;

}
int linklist::listlength()//求线性表长度
{
	linklist* p = this->next;
	int i = 0;
	while (p) {
		i++;
		p = p->next;
	}
	return i;
}
void linklist::display()//输出列表信息
{
	linklist* p = this->next;
	if (p == nullptr) {
		cout << "当前列表为空" << endl;
	}
	while (p) {
		cout << p->data << endl;
		p = p->next;
	}
}
elemtype linklist::getelem(int i)//求线性表中第i个元素的值
{
	linklist* l = this;
	if (i <= 0) {
		cout << "输入有误" << endl;
	}
	for (int j = 0; j < i; j++) {
		if (l->next) {
			l = l->next;
		}
		else {
			cout << "不存在对应元素" << endl;
			return NULL;
		}
	}
	return l->data;
}

int linklist::locateelem(elemtype elem)//找到表中第一个与elem相等的元素的位序
{
	linklist* l = this->next;
	if (!l) {
		cout << "当前表为空" << endl;
	}
	int i = 0;
	while (l) {
		i++;
		if (l->data == elem) {
			return i;
		}
		l = l->next;

	}
	cout << "未找到对应元素" << endl;
}

void linklist::insert(elemtype st,int i)//插入学生函数
{
	linklist* p = this;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j > i - 1 || !p) {
		cout << "插入失败" << endl;
		return;
	}
	linklist* s = new linklist;
	s->data = st;
	s->next = p->next;
	p->next = s;

}
void linklist::listdelete(int i)//删除学生
{
	linklist* p = this;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j > i - 1 || !(p->next)) {
		cout << "删除失败" << endl;
		return;
	}
	linklist* q = p->next;
	p->next = q->next;
	delete q;
}