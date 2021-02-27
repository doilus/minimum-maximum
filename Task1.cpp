// Zadanie 1
// Dominika £ugowska
// s17226

#include <iostream>

using namespace std;

int x; // podana liczba jest calkowita
int main()
{
	cout << "Podaj liczby, zakonczeniem ciagu jest liczba 0" << endl;
	cin >> x;
	int i = 1, j = 1; // i - wystepowanie liczby maksymalnej, j wystepowanie minimalnej
	int min = x, max = x;
	if (x != 0) { //warunek pierwsza liczba nie moze byc 0

		while (x > 0) { //zapisywanie liczb
			cin >> x;
			if (x >= max) {
				if (x == max) { //sprawdzamy rownosc w przypadku wiekszego i dodajemy do wystepowania
					i++;
				}
				else { i = 1; max = x; }
			}
			else if (x <= min && x != 0) { //!=0 poniewaz zero jest koncem i nie jest brane pod uwage
				if (x == min) {
					j++;
				}
				else { j = 1; min = x; }
			}
		}
	}
	else cout << "Brak liczb" << x << endl;

	cout << "Twoj wynik to: " << endl;
	cout << "Min = " << min << " " << j << " razy" << endl;
	cout << "Max = " << max << " " << i << " razy" << endl;




	system("pause"); //close while pressing enter


	return 0;
}
