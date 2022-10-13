#include <iostream>
using namespace std;
//Funskjon med to parametere av typen int
//Ganger x med y
int multiply(int x, int y)
{
	return x * y;
}
//Funksjon som returnere desimaltall
//Formelen til grader
double farenheit(double far)
{
	return (far - 32) * 5 / 9;
}
//Lagrer funksjonen celsius og printer den
void grad()
{
	double celsius = farenheit(80);
	cout << celsius << "\n";
}
//Setter verdier på tallene og printer de
void printRes()
{
	int tall1 = 5;
	int tall2 = 10;
	int produkt = multiply(tall1, tall2);
	cout << "tall 1: " << tall1 << "\ttall 2: " << tall2 << "\tprodukt: " << produkt << "\n";

	tall1 = 15;
	tall2 = 20;
	produkt = multiply(tall1, tall2);
	cout << "tall 1: " << tall1 << "\ttall 2: " << tall2 << "\tprodukt: " << produkt << "\n";

}
//Printer funksjonen produkt og celsius, så lagres den
//Funksjonskall
int main()
{
	int produkt = multiply(5, 5);
	cout << produkt << "\n";
	grad();
	printRes();
	double celsius = farenheit(80);
	cout << "Farenheit: 80 er i celsius: " << celsius;
}

