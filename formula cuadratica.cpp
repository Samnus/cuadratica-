//Samuel Josue Argueta Estrada 
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char opcion;
    do {
        // Solicitar valores de A, B y C
        double a, b, c;
        cout << "Ingrese el valor de A: ";
        cin >> a;
        cout << "Ingrese el valor de B: ";
        cin >> b;
        cout << "Ingrese el valor de C: ";
        cin >> c;

        // Validar que 'a' no sea igual a 0
        if (a == 0) {
            cout << "El coeficiente 'a' no puede ser igual a 0. Intente de nuevo." << endl;
            continue; // Salta de nuevo al inicio del bucle
        }

        // Calcular el discriminante
        double discriminante = b * b - 4 * a * c;

        // Verificar si el discriminante es positivo, negativo o cero
        if (discriminante > 0) {
            // Raíces reales y distintas
            double x1 = (-b + sqrt(discriminante)) / (2 * a);
            double x2 = (-b - sqrt(discriminante)) / (2 * a);
            cout << "Las raices son reales y distintas." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        } else if (discriminante == 0) {
            // Raíces reales e iguales
            double x = -b / (2 * a);
            cout << "La raiz es real e igual." << endl;
            cout << "x = " << x << endl;
        } else {
            // Verificar si el discriminante es negativo
            if (discriminante < 0) {
                cout << "El discriminante es negativo, lo que resultaría en raíces complejas." << endl;
            } else {
                cout << "No es posible calcular las raices." << endl;
            }
        }

        // Pedir al usuario si desea repetir
        cout << "¿Desea ingresar otro conjunto de valores? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "¡Adios ingrese valores correctos!" << endl;

    return 0;
}

