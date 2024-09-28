#include"sqlist.h"

sqlist::sqlist()
{
	this->length = 0;

}

bool sqlist::destory()
{
	delete this->list;

	this->length = 0;
	if (this->list == nullptr) {
		return true;
	}
	return false;

}

bool sqlist::listempty()
{
	if (this->length == 0) {
		return true;
	}
	else {
		return false;
	}
}

int sqlist::listlength()
{
	return this->length;
}

student sqlist::getelem(int i)
{
	
	return this->list[i - 1];

}


int sqlist::locateelem(student st)
{
	for (int i = 0; i < this->length; i++) {
		if (this->list[i].age == st.age && this->list[i].name == st.name && this->list[i].id == st.id) {
			return i + 1;
		}
	}
	return 0;
}

void sqlist::insert(student st)
{
	if (length >= maxsize)
	{
		cout << "ѧ���б�����" << endl;
		return;
	}
	this->list[length] = st;
	this->length++;
}

void sqlist::sort()
{
	int n = this->length;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (this->list[j].age > this->list[j + 1].age) {
				student temp = this->list[j];
				this->list[j] = this->list[j + 1];
				this->list[j+1] = temp;
			}
		}
	}
}

void sqlist::display()
{
    int n = this->length;
	if (n == 0) {
		cout << "��ǰ��Ϊ��" << endl;
		return;
	}
	else {

		for (int i = 0; i < n; i++) {
			cout << "ѧ��ѧ�ţ�" << this->list[i].id
				<< "     ѧ��������" << this->list[i].name
				<< "     ѧ�����䣺" << this->list[i].age << endl;

		}
	}
}

void sqlist::listdelete(string names)
{
	int num = -1;
	for (int i = 0; i < this->length; i++) {
		if (this->list[i].name == names)
		{
			num = i;
			break;
		}
		
	}
	if (num == -1) {
		cout << "�б���û����λѧ��" << endl;
	}
	else {


		for (int i = num; i < this->length-1; i++) {
			this->list[i] = this->list[i + 1];
		}
		this->length--;

	}


}