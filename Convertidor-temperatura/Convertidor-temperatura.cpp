#include <iostream>;

using namespace std;

static void toCelcius(double x) {
	double total = double (x - 32) * double (5.0 / 9.0);
	cout << "Tu temperatura en Celcius es: " << total << endl;
}

static void toFahrenheit(double x) {
	double total = double (x * 1.8) + 32;
	cout << "Tu temperatura en Fahrenheit es: " << total << endl;
}

int main() {

	char tempName;
	double tempNumber;

	cout << "Convertidor de temperatura" << endl;
	cout << "Ingresa la escala de temperatura actual: // C = celcius o F = fahrenheit //" << endl;

	cin >> tempName;

	if (tempName == 'c' || tempName == 'C') {
		cout << "Ingresa tu temperatura en Celcius (C):" << endl;
		cin >> tempNumber;
	}
	else if (tempName == 'f' || tempName == 'F') {
		cout << "Ingresa tu temperatura en Fahrenheit (F):" << endl;
		cin >> tempNumber;
	}
	else {
		cout << "¡Ingresa una inicial de escala valida!" << endl;
	}

	if (tempNumber) {
		if (tempName == 'c' || tempName == 'C') {
			toFahrenheit(tempNumber);
		}
		else if (tempName == 'f' || tempName == 'F') {
			toCelcius(tempNumber);
		}
		else {
			cout << "Ingresa una temperatura valida";
		}
	}

	return 0;
}