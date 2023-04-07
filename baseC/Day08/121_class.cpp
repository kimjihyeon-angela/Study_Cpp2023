#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private :
	char name[30];
	int birthday;

public:
	Person(const char* aname, int abirthday) : birthday(abirthday) // ������ -> �ʱ�ȭ��Ű�� ���� => class�� ������ �־�� ��
	{
		strcpy(name, aname);
	}

	void ShowPerson()
	{
		cout << "�̸� : " << name << " / " << "������� : " << birthday << endl;
	}
};

int main()
{
	Person p1("ȫ�浿", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("������", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}