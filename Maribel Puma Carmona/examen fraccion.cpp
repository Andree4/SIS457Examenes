#include <iostream>
#include <numeric> // Para std::gcd
using namespace std;

// Clase para manejar fracciones
class Fraccion {
private:
	int numerador;
	int denominador;
	
public:
	// Constructor
	Fraccion(int n = 0, int d = 1) : numerador(n), denominador(d) {
		simplificar();
	}
	
	// M�todo para simplificar la fracci�n
	void simplificar() {
		int gcd = (numerador, denominador);
		numerador /= gcd;
		denominador /= gcd;
		
		// Asegurarse de que el denominador sea positivo
		if (denominador < 0) {
			numerador = -numerador;
			denominador = -denominador;
		}
	}
	
	// Sobrecarga del operador de salida
	friend ostream& operator<<(ostream& os, const Fraccion& f) {
		os << f.numerador << "/" << f.denominador;
		return os;
	}
	
	// Sobrecarga del operador de suma
	Fraccion operator+(const Fraccion& f) const {
		int n = numerador * f.denominador + f.numerador * denominador;
		int d = denominador * f.denominador;
		return Fraccion(n, d);
	}
	
	// Sobrecarga del operador de resta
	Fraccion operator-(const Fraccion& f) const {
		int n = numerador * f.denominador - f.numerador * denominador;
		int d = denominador * f.denominador;
		return Fraccion(n, d);
	}
};

int main() {
	// Crear fracciones
	Fraccion f1(4, 3); // 4/3
	Fraccion f2(1, 2); // 1/2
	
	// Mostrar fracciones
	cout << "Fracci�n 1: " << f1 << endl;
	cout << "Fracci�n 2: " << f2 << endl;
	
	// Realizar operaciones y guardar resultados
	Fraccion res1 = f1 + f2; // Suma
	Fraccion res2 = f1 - f2; // Resta
	
	// Mostrar resultados
	cout << "Resultado de la suma (res1): " << res1 << endl;
	cout << "Resultado de la resta (res2): " << res2 << endl;
	
	// Si deseas realizar m�s operaciones, puedes a�adir m�s variables
	Fraccion f3(5, 6); // Otra fracci�n para m�s operaciones
	Fraccion res3 = res1 + f3; // Otra suma
	
	cout << "Resultado de la suma con otra fracci�n (res3): " << res3 << endl;
	
	return 0;
}
