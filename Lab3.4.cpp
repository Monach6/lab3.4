#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x;
	double y;
	double R;

	cout << "x = "; cin >> x; cout << endl;
	cout << "y = "; cin >> y; cout << endl;
	cout << "R = "; cin >> R; cout << endl;
	//розгалуження в повній формі

	if (y <= x && y >= -sqrt(R * R - (x - R) * (x - R)) + R
		|| (y >= x && y <= sqrt(R * R - (x + R) * (x + R)) - R))
		cout << "так" << endl;
	else
		cout << "ні" << endl;

	system("pause");
	return 0;
}