#include <iostream>
#include "funcs.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	int  b, c, d;

	cout << "Какое действие выполнить?" << endl;
	cout << "1. Сложить" << endl << "2. Вычесть" << endl;
	cout << "3. Умножить" << endl << "4. Разделить" << endl;
	cin >> b;
	cout << endl;

	switch (b)
	{
	case 1:
		// Сумма
		cout << "ввдите a и b" << endl;
		cin >> c >> d;
		cout << MySum(c, d) << endl;
		break;

	}
	system("pause");
	return 0;
}