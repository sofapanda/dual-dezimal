#include <iostream>

using namespace std;

int main()
{
	cout << '\n' << "Einsendeaufgabe zu IMIT05 - Christian Hancke" << '\n' << endl;
	cout << "Umrechnung von Dualzahlen in Dezimalzahlen" << '\n' <<  endl;

	// Vereinbarung der Variablen

	long long dual = 0;
	int rest[16];
	int basis = 1;
	int ergebnis = 0;

	// Wir setzen "rest" auf 0

	for (int index = 0; index < 16; index++)
	{
		rest[index] = 0;
		//test - cout << rest[index] << endl;
	}

	// Die Eingabe der Dualzahl
	
	cout << "Bitte eine Dualzahl eingeben (max. 16 Bit): ";
	cin >> dual;
	cout << '\n';
	if (dual <= 1111111111111111 && dual > 0)
	{
		//Ablegen der Reste in rest

		for (int index = 0; index < 16; index++)
		{
			rest[index] = dual % 10;
			dual = dual / 10;

			//test - cout << rest[index];
		}

		// Berechnung des Dezimalwerts

		for (int index = 0; index < 16; index++)
		{
			ergebnis = ergebnis + rest[index] * basis;
			basis = basis * 2;

		}

		cout << "Der Ergebnis der Umrechnung lautet: " << ergebnis << '\n' << endl;
	}

	else cout << "Die Eingabe war falsch." << endl;

	return 0;

}