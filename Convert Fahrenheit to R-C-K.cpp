#include<iostream>
using namespace std;

//rumus suhu
int main()
{
	cout << "Konversi Fahrenheit ke-Reamur,Celcius,Kelvin\n";

	double f;
	double fr;
	double fc;
	double fk;
	
	cout << "Input Fahrenheit = ";
	cin >> f;
	
	fr = (f-32)*4/9;
	fc = (f-32)*5/9;
	fk = (5*(f-32))/9+273;
	
	cout << "REAMUR = " << fr << "\n";
	cout << "CELCIUS = " << fc << "\n";
	cout << "KELVIN = " << fk << "\n";
	
	system("PAUSE");
	return 0;
}
