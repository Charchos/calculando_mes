
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int mes, year, dd;
	cout << "Introduzca el Year" << endl;
	cin >> year;
	cout << "Introduzca el mes (numero):" << endl;
	cin >> mes;
	switch (mes)
	{
	case 1:
		dd = 31;
		break;
	case 3:
		dd = 31;
		break;
	case 5:
		dd = 31;
		break;
	case 7:
		dd = 31;
		break;
	case 8:
		dd = 31;
		break;
	case 10:
		dd = 31;
		break;
	case 12:
		dd = 31;
		break;
	case 4:
		dd = 30;
		break;
	case 6:
		dd = 30;
		break;
	case 9:
		dd = 30;
		break;
	case 11:
		dd = 30;
		break;
	case 2:
		dd = 28;
		break;
	default:
		cout << "mes no valido" << endl;
	}
	if (mes >= 1 && mes <= 12)
	{
		cout << " El mes " << mes << " del year " << year << " tiene " << dd << " dias " << endl;
	}
	return 0;
}