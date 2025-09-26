#include <iostream>

using namespace std;
int main() {
	int suma = 0;


	while(suma <= 100){
		int a = 0;
		cout << "program przestanie działac jak suma przeroczy liczbę 10" << endl; 
		cout << "Podaj liczbę: ";
		cin >> a;
		if (a >= 0){

		suma = suma + a;
		cout << "Suma wynosi: " << suma;
}
		else  { cout << "liczba musi być dodatnia"; break; }
	}
}
