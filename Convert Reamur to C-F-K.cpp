#include<iostream>
using namespace std;

//rumus suhu
int main()
{
	cout << "Konversi Reamur ke-Celcius,Fahrenheit,Kelvin\n";
	
	double r;
	double rc;
	double rf;
	double rk;
	
	cout << "Input Reamur = ";
	cin >> r;
	
	rc = 1.25*r;
	rf = 2.25*r+32;
	rk = 1.25*(r-273)+32;
	
	cout << "CELCIUS = " << rc << "\n";
	cout << "FAHRENHEIT = " << rf << "\n";
	cout << "KELVIN = " << rk << "\n";
	
	system("PAUSE");
	return 0;
}
