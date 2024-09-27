#include <iostream>
using namespace std;

// Clase base
class Numero {
protected:
	int valor; // Valor de tipo entero
	
public:
	// Constructor
	Numero(int v = 0) : valor(v) {}
	
	// Método para mostrar el valor
	virtual void mostrarValor() const {
		cout << "Valor: " << valor << endl;
	}
	
	// Método para obtener el valor
	int getValor() const {
		return valor;
	}
};

// Clase derivada
class NumeroEntero : public Numero {
public:
	// Constructor que llama al constructor de la clase base
	NumeroEntero(int v = 0) : Numero(v) {}
	
	// Sobrescribir el método para mostrar el valor
	void mostrarValor() const override {
		cout << "Número entero: " << valor << endl;
	}
	
	// Método para incrementar el número
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
	
	// Incrementar el número entero
	num2.incrementar();
	num2.mostrarValor(); // Debería mostrar 11
	
	// Crear otro objeto de la clase NumeroEntero
	NumeroEntero num3(25);
	num3.mostrarValor(); // Debería mostrar 25
	
	return 0;
}
