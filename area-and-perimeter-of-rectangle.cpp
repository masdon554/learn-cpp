#include<iostream>
using namespace std;

//Luas dan Keliling Persegi Panjang
int main()
{
	
	cout << "Area of a rectangle = p*l\n";
	cout << "Perimeter of the rectangle = 2*(p+l)\n";
	
	double p;
	double l;
	double area;
	double perimeter;
	
	cout << "Input length= ";
	cin >> p;
	cout << "Input width= ";
	cin >> l;
	
	luas = p*l;
	keliling = 2*(p+l);
	
	cout << "Area of a rectangle= " << area << "\n";
	cout << "Perimeter of the rectangle " << perimeter << "\n";
	
	system("PAUSE");
	return 0;
}
