//Primer_Parcial
#include <iostream>
#include <vector>
using namespace std;

int main(int) {
	class NumeroEntero {
	public:
		int VALOR;
		NumeroEntero(int VALOR = 0):
			VALOR(valor){}
		void aumentarValor (int valor){
			VALOR += valor; 
		}
		void ImprimirValor	(){
			cout<<"aumentarValor:"<<VALOR<<endl;
		}
	};
	class Fraccion{
	public:
		int Numerador;
		int Denominador ;
		Fraccion(int numerador = 0, int denominador =1):
		Numerador (numerador ),
		Denominador (denominador){
			if(Denominador=0){
				throw
		invalid_argument ("Denominador no puede ser 0 ");
			}
		}
		void simplificar(){
			int mcd gcd(Numerador, Denominador);
			Numerador /= mcd;
			Denominador /= mcd;
		}
		NumeradorEntero(Numerador / Denominador;){
			double obtenerReal(){
				return
			static_cast<double>(Numerador) / Denominador;
			}
		void ImprimirValor(){
			count<<"Fraccion : "<<Numerador<<"/"<<Denominador<<endl;
		};
			Private 
				intgcd(int a, int b){
				return b== 0? a: gcd(b, a %b),
			}
	};
	class Calculadora {
    private :
		Fraccion Res1, Res2, Res3;
	    int contador; 
	public 
		
	};
	return 0;
}

