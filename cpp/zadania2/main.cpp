#include <iostream>
#include <fstream>

using namespace std;

/*
	ifstream	tylko do odczytu
	ofstream	tylko do zapisu
	fstream		do zapisu i odczytu
*/

int main() {
	// Otwieranie pliku "plik.txt"
	ifstream f("plik.txt");

	// Sprawdzanie błędow
	if (!f.good()) {
		cout << "Nie udało się otworzyć pliku! :c" << endl;
		return 0;
	}

	int suma = 0;

	// Odczytywanie pliku linia po linii
	string linia;
	while (getline(f, linia))
	{
		// Konwersja ciągu znaków na typ numeryczny
		int x = stoi(linia);
		suma += x;
	}

	cout << "Suma: " << suma << endl;
	return 0;
}
