#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	Person() // 생성자
	{
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}

	void SetPersonInfo(char* myname, int myage) // 원하는 데이터로의 초기화를 목적으로 정의된 함수
	{
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const
	{
		cout << "이름 : " << name << ", ";
		cout << "나이 : " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}

};

int main()
{
	Person parr[3];
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0; i < 3; i++) // 반복문 안에서 이름, 나이정보를 입력받아서 객체 초기화
	{
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();

	return 0;
}