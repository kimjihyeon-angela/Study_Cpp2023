#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private :
	char name[30];
	int birthday;

public:
	Person(const char* aname, int abirthday) : birthday(abirthday) // 생성자 -> 초기화시키는 역할 => class에 무조건 있어야 함
	{
		strcpy(name, aname);
	}

	void ShowPerson()
	{
		cout << "이름 : " << name << " / " << "생년월일 : " << birthday << endl;
	}
};

int main()
{
	Person p1("홍길동", 19990909);
	p1.ShowPerson();

	Person p2(p1);
	p2.ShowPerson();

	Person p3 = p2;
	p3.ShowPerson();

	Person p4("강감찬", 20001201);
	p4 = p1;
	p4.ShowPerson();

	return 0;
}