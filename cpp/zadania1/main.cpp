#include <iostream>

using namespace std;

int main() {
	string imie;
	string nazwisko;
	cout<<"podaj imie"<<end1;
	cin>>imie;
	cout<<"podaj nazwik"<<end1;
	cin>>nazwisko;
	ofstream plik("nazwy.txt", ios::trunc);
	if(!plik.is_open()){
	cout<<"nie otwarto pliku\n"<<end1;
	return 1;
plk<<imie<<" "<<nazwisko;
cout<<"czy coś dodasz?"<<end1;
string odpowiedz;
cin>>odpowiedz;
	if(odpowiedz=="tak){
	cout<<"podaj dalej..",,end1;
	cin>>odpowiedz;
	plik<<" "<<odpowiedz;
	}else{
		plik.close();
	retur 0;
}
