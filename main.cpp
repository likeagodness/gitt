#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "����� �������� ���������?" << endl;
	cout << "1. �������" << endl << "2. �������" << endl;
	cout << "3. ��������" << endl << "4. ���������" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		// �����
		cout << "������ a � b" << endl;
		cin >> c >> d;
		cout << MySum(c, d) << endl;
		break;

	}
	system("pause");
	return 0;
}