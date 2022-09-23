// Tarea 1-2P
#include <iostream>
#include <string>

using namespace std;

class Fecha {
private:
	string a;
	string m;
	string d;
public:
	Fecha(string, string, string);
	void datos();
	void validar();
};

int a1, m1, d1;
bool bisiesto = false;

void Fecha::datos() {
	
	cout << "Ano: "; cin >> a; cout << endl;
	a1 = stoi(a);
	cout << "Mes: "; cin >> m; cout << endl;
	m1 = stoi(m);
	cout << "Dia: "; cin >> d; cout << endl;
	d1 = stoi(d);

}

void Fecha::validar() {
		if (a1 % 4 == 0 && a1 % 100 != 100 || a1 % 400 == 0)
			bisiesto = true;

		if (d1 > 0 && d1 < 32 && m1 >0 && m1 < 13 && a1>0) {
			if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
			{
				cout << "Fecha valida \n";
			}
			else
			{
				if (m1 == 2 && d1 < 30 && bisiesto)
					cout << "Fecha valida \n";
				else if (m1 == 2 && d1 < 29 && !bisiesto)
					cout << "Fecha valida \n";
				else if (m1 != 2 && d1 < 31)
					cout << "Fecha valida \n";
				else
					cout << "Fecha no valida \n";
			}
		}
		else
			cout << "Fecha no valida \n";
	}

Fecha::Fecha(string _a1, string _m1, string _d1) {
	a = _a1;
	m = _m1;
	d = _d1;
}
int main()
{
	Fecha fh("", "", "");
	fh.datos();
	fh.validar();
		return 0;
}