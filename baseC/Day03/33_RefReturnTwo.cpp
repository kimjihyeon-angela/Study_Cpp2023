#include <iostream>
using namespace std;

int& RefRetFuncOne(int& ref)
{
	ref++;
	return ref;
}

int main()
{
	int num1 = 1;
	int num2 = RefRetFuncOne(num1);
	// RefReturnOne과 다른점 -> num2 앞에 &있고, 없고 => 다른 변수
	
	num1 += 1;
	num2 += 100;
	
	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}