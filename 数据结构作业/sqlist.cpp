#include"sqlist.h"

sqlist::sqlist()
{
	this->length = 0;

}

void sqlist::insert(student st)
{
	if (length >= maxsize)
	{
		cout << "学生列表已满" << endl;
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
	for (int i = 0; i < n; i++) {
		cout << "学生学号：" << this->list[i].id
			<< "     学生姓名：" << this->list[i].name
			<< "     学生年龄：" << this->list[i].age << endl;

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
		cout << "列表中没有这位学生" << endl;
	}
	else {


		for (int i = num; i < this->length-1; i++) {
			this->list[i] = this->list[i + 1];
		}
		this->length--;

	}


}