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
	// Condicionales
	int miEdad = 25;
	int EdadVotacion = 10;
	cout << (miEdad >= EdadVotacion) << "\n"; // Sale 1 ya que 25 es mayor que 18
	// Condicionales
	if (miEdad >= EdadVotacion) { // si miEdad es mayor o igual que EdadVotacion
		cout << "Tienes edad suficiente para votar!";
	} else {
		cout << "No tienes edad suficiente para votar!";
	}
	return 0;
}
