#include"linklist.h"
linklist::linklist()//��ʼ�����Ա�
{
	this->next = nullptr;
}

bool linklist::destorylist()//�������Ա�
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

bool linklist::listempty()//�ж����Ա��Ƿ�Ϊ��
{
	if (this->next == nullptr) {
		return true;
	}
	return false;

}
int linklist::listlength()//�����Ա���
{
	linklist* p = this->next;
	int i = 0;
	while (p) {
		i++;
		p = p->next;
	}
	return i;
}
void linklist::display()//����б���Ϣ
{
	linklist* p = this->next;
	if (p == nullptr) {
		cout << "��ǰ�б�Ϊ��" << endl;
	}
	while (p) {
		cout << p->data << endl;
		p = p->next;
	}
}
elemtype linklist::getelem(int i)//�����Ա��е�i��Ԫ�ص�ֵ
{
	linklist* l = this;
	if (i <= 0) {
		cout << "��������" << endl;
	}
	for (int j = 0; j < i; j++) {
		if (l->next) {
			l = l->next;
		}
		else {
			cout << "�����ڶ�ӦԪ��" << endl;
			return NULL;
		}
	}
	return l->data;
}

int linklist::locateelem(elemtype elem)//�ҵ����е�һ����elem��ȵ�Ԫ�ص�λ��
{
	linklist* l = this->next;
	if (!l) {
		cout << "��ǰ��Ϊ��" << endl;
	}
	int i = 0;
	while (l) {
		i++;
		if (l->data == elem) {
			return i;
		}
		l = l->next;

	}
	cout << "δ�ҵ���ӦԪ��" << endl;
}

void linklist::insert(elemtype st,int i)//����ѧ������
{
	linklist* p = this;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j > i - 1 || !p) {
		cout << "����ʧ��" << endl;
		return;
	}
	linklist* s = new linklist;
	s->data = st;
	s->next = p->next;
	p->next = s;

}
void linklist::listdelete(int i)//ɾ��ѧ��
{
	linklist* p = this;
	int j = 0;
	while (p && j < i - 1) {
		p = p->next;
		j++;
	}
	if (j > i - 1 || !(p->next)) {
		cout << "ɾ��ʧ��" << endl;
		return;
	}
	linklist* q = p->next;
	p->next = q->next;
	delete q;
}