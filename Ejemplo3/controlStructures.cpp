#include <iostream> // Incluye la biblioteca estándar para entrada/salida (cout, cin)
#include <cmath>    // Incluye funciones matemáticas como pow (potencia)

int main()
{
    // Declaración e inicialización de variables enteras
    int x = 12, y = 87;
    int num1, num2;

    // Estructura de control if-else para comparar x y y
    if (x > y)
    {
        std::cout << "x greater than y: " << x << std::endl; // Imprime si x es mayor que y
    }
    else if (x < y)
    {
        std::cout << "x less than y: " << y << std::endl; // Imprime si x es menor que y
    }
    else
    {
        std::cout << "x equal than y: " << x << std::endl; // Imprime si x es igual a y
    }

    // Solicita al usuario que ingrese un valor y lo almacena en num1
    std::cout << "Ingresse un valor:" << std::endl;
    std::cin >> num1;

    // Determina si el número ingresado es par o impar usando el operador módulo (%)
    if (num1 % 2 == 0)
    {
        std::cout << "El numero es par" << std::endl; // Si el residuo es 0, es par
    }
    else
    {
        std::cout << "El numero es impar" << std::endl; // Si no, es impar
    }

    // Solicita otro valor al usuario y lo almacena en num2
    std::cout << "Ingresse un valor para num2:" << std::endl;
    std::cin >> num2;

    // Evalúa la paridad de ambos números y muestra el resultado correspondiente
    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        std::cout << "Los dos numeros son pares" << std::endl;
    }
    else if (num1 % 2 == 0 && num2 % 2 != 0)
    {
        std::cout << "Num1 es par y num 2 es impar" << std::endl;
    }
    else if (num1 % 2 == 1 && num2 % 2 == 0)
    {
        std::cout << "Num1 es impar y num 2 es par" << std::endl;
    }
    else
    {
        std::cout << "Los dos numeros son impares" << std::endl;
    }

    // Declaración de un arreglo de 5 enteros
    int arr[5];
    // Ciclo for para llenar el arreglo con potencias de 2 y mostrar los valores
    for (int i = 0; i < 5; i++)
    {
        arr[i] = pow(2, i); // pow eleva 2 a la potencia i
        std::cout << "Arr[" << i << "]=: " << arr[i] << std::endl;
    }

    // Uso de punteros para modificar el arreglo
    int *intPointer = &arr[0]; // Apunta al primer elemento del arreglo
    for (int i = 0; i < 5; i++)
    {
        *intPointer = i; // Asigna el valor de i a la posición actual del puntero
        intPointer++;    // Avanza el puntero al siguiente elemento
        std::cout << "Arr[" << i << "]=: " << arr[i] << std::endl;
    }

    // Declaración e inicialización de una matriz de caracteres 3x3
    char matrix[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
    bool found = false;       // Variable para indicar si se encontró el carácter 'e'
    char flags = 0b0000'0011; // Variable tipo char con valor binario (no se usa después)

    // Ciclo anidado para recorrer la matriz y buscar el carácter 'e'
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "matrix[" << i << "][" << j << "]=: " << matrix[i][j] << std::endl;
            if (matrix[i][j] == 'e')
            {
                std::cout << "Encontrado" << std::endl; // Imprime si encuentra 'e'
                found = true;
                break; // Sale del ciclo interno
            }
        }
        if (found)
            break; // Sale del ciclo externo si se encontró 'e'
    }

    // Ejemplo de ciclo while: cuenta hacia atrás desde x hasta 0
    std::cout << "Counting down with while loop:" << std::endl;
    while (x > 0)
    {
        std::cout << "x = " << x << std::endl;
        if (x == 3)
        {
            break; // Sale del ciclo si x es igual a 3
        }
        x--;
    }
    std::cout << "Fin del ciclo" << std::endl;

    // Calcula el factorial de num1 usando un ciclo while
    int i = 1;
    int factorial = 1;
    while (i <= num1)
    {
        factorial *= i; // Multiplica el valor actual de factorial por i
        i++;
    }

    // Ciclo while que pregunta al usuario si desea salir (presionando 'q')
    char userInput = 'y';
    int counter = 0;
    while (userInput != 'q')
    {
        std::cout << "While: Desea salir? oprima(q): ";
        std::cin >> userInput;
        std::cout << "Contador: " << counter << std::endl;
        counter++;
    }

    /*
    Do while: similar al while, pero siempre ejecuta el bloque al menos una vez
    */
    userInput = 'y';
    do
    {
        std::cout << "Do While: Desea salir? oprima (q): ";
        std::cin >> userInput;
        std::cout << "Contador: " << counter << std::endl;
        counter++;
        if (counter > 10)
        {
            std::cout << "Se ha superado el maximo de intentos" << std::endl;
            break; // Sale del ciclo si el contador supera 10
        }
    } while (userInput != 'q');

    /*
    Switch-case: estructura para seleccionar entre múltiples opciones según el valor de una variable
    */
    short httpResponseCode = 200;
    std::cout << "Ingrese un codigo de respuesta HTTP: ";
    std::cin >> httpResponseCode;
    switch (httpResponseCode)
    {
    case 200:
        std::cout << "OK" << std::endl;
        // No hay break, así que continúa con el siguiente caso
    case 301:
        std::cout << "Moved Permanently" << std::endl;
        break; // Sale del switch
    case 202:
        std::cout << "Accepted" << std::endl;
        break;
    case 201:
        std::cout << "Created" << std::endl;
        break;
    case 404:
        std::cout << "Not Found" << std::endl;
        break;
    case 401:
        std::cout << "Unauthorized" << std::endl;
        // No hay break, así que continúa con el siguiente caso
    case 500:
        std::cout << "Internal Server Error" << std::endl;
        break;
    default:
        std::cout << "Unknown Response Code" << std::endl;
        break;
    }
    // return 0; // Fin del programa

    // Ejemplo adicional de switch-case con caracteres
    userInput = 'y';
    switch (userInput)
    {
    case 'a':
        std::cout << "Opcion a: cafe" << std::endl;
        break;
    case 'b':
        std::cout << "Opcion b: chocolate" << std::endl;
        break;
    case 'c':
        std::cout << "Opcion c: te" << std::endl;
        break;
    case 'd':
        std::cout << "Opcion d: jugo" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}