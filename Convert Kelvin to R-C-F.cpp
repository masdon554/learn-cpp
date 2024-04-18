#include<iostream>
using namespace std;

//rumus suhu
int main()
{
	cout << "Konversi Kelvin ke-Reamur,Celcius,Farenheit\n";

	double k;
	double kr;
	double kc;
	double kf;
	
	cout << "Input Kelvin = ";
	cin >> k;
	
	kr = (k-273)*4/5;
	kc = k-273;
	kf = (k-273)*9/5+32;
	
	cout << "REAMUR = " << kr << "\n";
	cout << "CELCIUS = " << kc << "\n";
	cout << "FAHRENHEIT = " << kf << "\n";
	
	system("PAUSE");
	return 0;
}
