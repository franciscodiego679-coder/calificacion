Nombre del programa

Registro de estudiantes, cálculo de promedio y estatus académico.

Descripción general

Este programa permite registrar varios estudiantes, ingresar cuatro notas por cada uno, calcular su promedio final y determinar si el estudiante está Aprobado o Reprobado.
Los resultados se muestran en una tabla organizada en pantalla.

Librerías utilizadas

<iostream>: Permite la entrada y salida de datos por consola.

<iomanip>: Se utiliza para dar formato a la salida (alineación y decimales).

<string>: Permite trabajar con nombres de estudiantes en formato texto.

Variables utilizadas

int n: Almacena la cantidad de estudiantes.

string nombre: Guarda el nombre del estudiante.

float n1, n2, n3, n4: Almacenan las cuatro notas del estudiante.

float promedio: Guarda el promedio de las cuatro notas.

Funcionamiento del programa

El programa solicita la cantidad de estudiantes.

Se muestra el encabezado de la tabla.

Se utiliza un bucle for para repetir el proceso según la cantidad de estudiantes.

Para cada estudiante se ingresan el nombre y las cuatro notas.

Se calcula el promedio.

Se determina el estatus académico:

Aprobado si el promedio es mayor o igual a 70.

Reprobado si el promedio es menor a 70.

Los resultados se muestran alineados y formateados en pantalla.

Cálculo del promedio

El promedio se obtiene sumando las cuatro notas y dividiendo entre cuatro.

Formato de salida

El programa utiliza setw para la alineación y setprecision(2) para mostrar el promedio con dos decimales, junto con el estatus final del estudiante.

Conclusión

Este programa es una aplicación básica y funcional para el manejo de calificaciones, ideal para practicar el uso de bucles, variables, formato de salida y cálculos aritméticos en C++.




<img width="1708" height="905" alt="image" src="https://github.com/user-attachments/assets/42aa171e-5ba9-41e0-86b9-9c8a77dfd7f0" />
