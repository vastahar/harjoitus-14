// HARJOITUS 14
// Harri Vastamäki
// IIOS14S1

#include <iostream>
using namespace std;

void main()
{
	char etunimet[20];
	cout << "Anna etunimesi: " << endl;
	cin.get(etunimet, 20);
	int kenka;
	cout << "Anna kengannumero: " << endl;
	cin >> kenka;
	char sukunimi[20];
	cout << "Anna sukunimi: " << endl;
	cin.get();
	cin.get(sukunimi, 20);
	float koulumatka;
	cout << "Anna koulumatka: " << endl;
	cin.get();
	cin >> koulumatka;
	char osoite[20];
	cout << "Anna osoitteesi: " << endl;
	cin.get();
	cin.get(osoite, 20);
	int postinro;
	cout << "Anna postinumerosi: " << endl;
	cin >> postinro;

	cout << endl;
	cout << sukunimi << " " << etunimet << endl;
	cout << osoite << endl;
	cout << postinro << endl;
	cout << kenka << " " << koulumatka << endl;

}