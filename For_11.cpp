//Suma de Dígitos de un Número
//Solicita un número al usuario y calcula la suma de sus dígitos.

#include <iostream>
using namespace std;

int main() {
 int N, suma = 0;

    //ingresar un numero
    cout << "Ingresa cualquier numero: ";
    cin >> N;

    // Ciclo for para sumar los números desde 1 hasta N
    for (int i = 1; i <= N; i++) {
        suma += i;  // Sumar el valor de i a la variable suma
    }

    // Imprimir el resultado de la suma
    cout << "La suma de los primeros " << N << " números es: " << suma << endl;

    return 0;
}