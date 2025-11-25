#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Cuantos numeros de Fibonacci quieres?: ";
    cin >> n;

    int a = 0, b = 1;  // Los dos primeros números

    cout << "Serie Fibonacci: ";

    for (int i = 0; i < n; i++) {
        cout << a << " ";       // Imprime el número actual
        int siguiente = a + b;  // Calcula el siguiente número
        a = b;                  // Avanza a la siguiente posición
        b = siguiente;
    }

    cout << endl;
    return 0;
}
