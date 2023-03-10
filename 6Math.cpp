// Importamos biblioteca de archivos de encabezado
#include <iostream>
#include <string>
#include <stdio.h>
#include <cmath>

// Usamos nombres para objetos y variables de la 
// biblioteca estandar
using namespace std; 
// se puede usar tambien std::cout << "Hola mundo!";


int main() {
	// Matematicas, con max() podemos econtrar el valor mas alto de de los numeros
	// seleccionados
	cout << max(5,10) << "\n"; // Sale 10 ya que es el valor mas alto de esa "lista"
	// Con min() podemos encontrar el valor mas bajo de los numeros seleccionados
	cout << min(5,10) << "\n";
	// Encabezado C++  biblioteca cmath, existen mas
	cout << sqrt(12) << "\n"; // Raiz cuadrada
	cout << round(2.6) << "\n"; // Redonde un numero
	cout << log(5) << "\n"; // Logaritmo natural
	return 0;
}
