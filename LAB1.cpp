#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int arr[10] = { 2,10,3,1,8,4,9,2,6,11 };
	cout << "адрес начала массива: " << &arr[0] << endl;
	cout << "значение массива   адрес ячейки " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i];
		if (i % 2 == 0)
			cout << "                  " << &arr[i];
		else
			cout << "                        ";

		cout << endl;
	}
	return 0;
}

