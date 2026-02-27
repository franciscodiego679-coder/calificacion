#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int n;
    string nombre;
    float n1, n2, n3, n4, promedio;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    cin.ignore(); 

    
    cout << "\nEstudiante\t\tNota1\tNota2\tNota3\tNota4\tPromedio\tEstatus\n";
    cout << "--------------------------------------------------------------------------\n";

    for (int i = 1; i <= n; i++) {
        cout << "\nIngrese el nombre del estudiante " << i << ": ";
        getline(cin, nombre);

        cout << "Nota 1: ";
        cin >> n1;
        cout << "Nota 2: ";
        cin >> n2;
        cout << "Nota 3: ";
        cin >> n3;
        cout << "Nota 4: ";
        cin >> n4;
        cin.ignore(); 

        promedio = (n1 + n2 + n3 + n4) / 4;

        cout << left << setw(20) << nombre
            << setw(8) << n1
            << setw(8) << n2
            << setw(8) << n3
            << setw(8) << n4
            << setw(12) << fixed << setprecision(2) << promedio;

        if (promedio >= 70) {
            cout << "Aprobado";
        }
        else {
            cout << "Reprobado";
        }
    }

    return 0;
}
