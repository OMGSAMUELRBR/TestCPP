// Importamos biblioteca de archivos de encabezado
#include <iostream>

// Usamos nombres para objetos y variables de la 
// biblioteca estandar
using namespace std;
// se puede usar tambien std::cout << "Hola mundo!";

int main() {
	cout << "Probando variables";
	// Diferentes tipos de valores que existen
	string nombre = "Samuel"; // string
	int numentero = 10; // numero entero
	double numflotante = 10.99; // numeros flotantes
	char valorchar = 'A'; // char es para almacenar caracteres individuales
	bool valorestado = true; // true o false
	cout << "\n";
	cout << nombre;
	cout << "\n";
	cout << numentero;
	cout << "\n";
	cout << "Actualizando numero de la variable a 5\n";
	numentero = 5;
	cout << numentero;
	cout << "\n";
	cout << numflotante;
	cout << "\n";
	cout << valorchar;
	cout << "\n";
	cout << valorestado;
	cout << "\n\n";
	// Combinando texto con variables
	int miedad = 18;
	cout << "Tengo " << miedad << " años\n";
	cout << "Sumando variables\n\n";
	int num1 = 5;
	int num2 = 2;
	int sum = num1 + num2;
	cout << sum << "\n\n";
	// Declarando multiples variables
	int num3 = 6, num4 = 9, num5 = 10;
	cout << num3 + num4 + num5 << "\n\n";
	// Constantes, cuando no desea que se cambien los valores existentes
	// son inmutables y de solo lectura
	/*
	const int myNum = 15;
	myNum = 10; 
	*/
}
