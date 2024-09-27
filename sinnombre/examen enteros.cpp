#include <iostream>
using namespace std;

// Clase base
class Numero {
protected:
	int valor; // Valor de tipo entero
	
public:
	// Constructor
	Numero(int v = 0) : valor(v) {}
	
	// M�todo para mostrar el valor
	virtual void mostrarValor() const {
		cout << "Valor: " << valor << endl;
	}
	
	// M�todo para obtener el valor
	int getValor() const {
		return valor;
	}
};

// Clase derivada
class NumeroEntero : public Numero {
public:
	// Constructor que llama al constructor de la clase base
	NumeroEntero(int v = 0) : Numero(v) {}
	
	// Sobrescribir el m�todo para mostrar el valor
	void mostrarValor() const override {
		cout << "N�mero entero: " << valor << endl;
	}
	
	// M�todo para incrementar el n�mero
	void incrementar() {
		valor++;
	}
};

int main() {
	// Crear un objeto de la clase Numero
	Numero num1(5);
	num1.mostrarValor();
	
	// Crear un objeto de la clase NumeroEntero
	NumeroEntero num2(10);
	num2.mostrarValor();
	
	// Incrementar el n�mero entero
	num2.incrementar();
	num2.mostrarValor(); // Deber�a mostrar 11
	
	// Crear otro objeto de la clase NumeroEntero
	NumeroEntero num3(25);
	num3.mostrarValor(); // Deber�a mostrar 25
	
	return 0;
}
