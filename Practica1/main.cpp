#include <iostream>

using namespace std;

int main()
{
    {
        int A, B, residuo;
        cout << "----------Ejercicio 1----------" << endl;
        cout << "Este programa toma dos numeros enteros ingresados (A y B) e imprime en pantalla el residuo de la division entre ellos" << endl;
        cout << "Ingresa valor de A: ";
        cin >> A;
        cout << "Ingresa valor de B: ";
        cin >> B;
        residuo=A%B;
        cout << "El residuo de la division " << A << "/" << B << " es " << residuo << endl;
    }
    {
        int A, B;
        cout << "----------Ejercicio 3----------" << endl;
        cout << "Este programa toma dos numeros enteros ingresados (A y B) e imprime en pantalla el mayor de ellos." << endl;
        cout << "Ingresa el valor de A: ";
        cin >> A;
        cout << "Ingresa valor de B: ";
        cin >> B;
        if (A>B) {
            cout << "El mayor es " << A << "." << endl;
        } else if (A<B) {
            cout << "El mayor es " << B << "." << endl;
        } else {
            cout << "Error de ejecucion por valores incorrectos, prueba de nuevo." << endl;
        }
    }
    {
        float A, B;
        cout << "----------Ejercicio 5----------" << endl;
        cout << "Este programa realiza una division entre dos numeros enteros y imprime en pantalla el resultado aproximado (+0.5)" << endl;
        cout << "Ingrese el valor del primer numero: ";
        cin >> A;
        cout << "Ingrese el valor del segundo numero: ";
        cin >> B;
        float resultado = A / B;
        int resultado_redondeado=resultado + 0.5;
        cout << "El resultado redondeado o aproximado es: " << resultado_redondeado << endl;
    }
    {
        cout << "----------Ejercicio 7----------" << endl;
        cout << "Este programa toma un numero N ingresado por el usuario e imprime en pantalla el resultado de sumar todos los numeros entre 0 y N." << endl;
        int N;
        int sum = 0;
        cout << "Ingresa un numero: ";
        cin >> N;
        for (int i = 0; i <= N; ++i) {
            sum += i;
        }
        cout << "La sumatoria desde 0 hasta " << N << " es: " << sum << endl;
    }
    {
        cout << "----------Ejercicio 9----------" << endl;
        cout << "Este programa toma un numero N e imprime el area y perimetro de un circulo con radio N." << endl;
        int N;
        float pi=3.1416;
        cout << "Ingresa el numero de radio (N): ";
        cin >> N;
        float area=pi*(N*N);
        float perimetro=2*pi*N;
        cout << "Perimetro: " << perimetro << endl;
        cout << "Area: " << area <<endl;
    }
    {
        cout << "----------Ejercicio 11----------" << endl;
        cout << "Este programa imprime en pantalla la tabla de multiplicar (Hasta 10) del numero entero ingresado" << endl;
        int N;
        cout << "Ingresa el numero: ";
        cin >> N;
        for (int i = 1; i <= 10; ++i) {
        cout << N << "x" << i << "=" << (N * i) << endl;
        }

    }
    {
        cout << "----------Ejercicio 13----------" << endl;
        cout << "Este programa toma un numero ingresado e imprime todos sus divisores" << endl;
        int N;
        cout << "Ingresa el numero: ";
        cin >> N;
        cout << "Los divisores de " << N << " son:" << endl;
        for (int i = 1; i <= N; ++i) {
            if (N%i == 0) {
                cout << i << endl;
            }
        }
    }
    {
        cout << "----------Ejercicio 15----------" << endl;
        cout << "Este programa recibe numeros enteros constantemente e imprime la suma de todos." << endl;
        int suma = 0;
        int N;
        do {
            cout << "Ingrese un numero (0 para terminar): ";
            cin >> N;
            if (N != 0) {
                suma += N;
            }
        } while (N != 0);

        cout << "La suma de todos los numeros ingresados es: " << suma << endl;
    }
    {
        cout << "----------Ejercicio 17---------" << endl;
        cout << "Este programa recibe numeros enteros positivos ingresados constantemente por el usuario e imprime el mayor." << endl;
        int N;
        int mayor = -1; //Se especifica que sean números enteros positivos, por lo tanto permiten la actualización de la variable ya que deben ser mayores a -1.

        cout << "Ingrese los numeros (0 para terminar):" << endl;

        while (true) {
            cout << "Ingrese un numero: ";
            cin >> N;
            if (N == 0) {
                break;
            }
            if (N > mayor) {
                mayor = N;
            }
        }

        if (mayor == -1) {
            cout << "No se ingresaron numeros." << endl;
        } else {
           cout << "El mayor de todos los numeros ingresados es: " << mayor << endl;
        }

    }
    {
        cout << "----------Ejercicio 19---------" << endl;
        cout << "Este programa toma el numero ingresado e imprime si este numero es primo o no." << endl;
        int N;
        int VerifPrimo=1;
        cout << "Ingresa el numero: ";
        cin >> N;
        if (N <= 1) {
            VerifPrimo = 0;
        } else if (N == 2) {
            VerifPrimo = 1;
        } else if (N % 2 == 0) {
            VerifPrimo = 0;
        } else {
            for (int i = 3; i * i <= N; i += 2) {
                if (N%i == 0) {
                    VerifPrimo = 0;
                    break;
                }
            }
        }
        if (VerifPrimo == 1) {
            cout << N << " es un numero primo." << endl;
        } else {
            cout << N << " NO es un numero primo."<< endl;
        }
    }
    {
        cout << "----------Ejercicio 21---------" << endl;
        cout << "Este programa pide un caracter, si es una letra la convierte de mayuscula a minuscula y viceversa." << endl;
        char c;
        cout << "Ingresa tu caracter: ";
        cin >> c;
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A');
            } else {
                c = c - ('a' - 'A');
            }
            cout << "El caracter convertido es: " << c << endl;
        } else {
            cout << "El caracter ingresado no es una letra." << endl;
        }
    }
    {
        cout << "----------Ejercicio 23---------" << endl;
        cout << "Este programa pide dos numeros enteros, luego imprime el minimo comun multiplo entre ellos (MCM)." << endl;
        int num1, num2;
        cout << "Ingrese el primer numero: " << endl;
        cin >> num1;
        cout << "Ingrese el segundo numero: " << endl;
        cin >> num2;
        int originalNum1 = num1;
        int originalNum2 = num2;
        num1 = (num1 < 0) ? -num1 : num1; //Esto son condicionales para convertir los numeros en positivo.
        num2 = (num2 < 0) ? -num2 : num2;
        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }
        int mcd = num1;
        int mcm = (originalNum1 == 0 || originalNum2 == 0) ? 0 : (originalNum1 * originalNum2) / mcd;
        cout << "El MCM de " << originalNum1 << " y " << originalNum2 << " es: " << mcm << endl;
    }
    {
        cout << "----------Ejercicio 25---------" << endl;
        cout << "Este programa pide un numero entero e imprime su cantidad de digitos." << endl;
        unsigned long long N; // Long long para que el programa funcione con números grandes. Unsigned para que sean valores positivos.
        cout << "Ingrese un numero: ";
        cin >> N;
        if (N == 0) {
            cout << "El numero de digitos de " << N << " es: 1" << endl;
        } else {
            int cantidadDígitos = 0;
            long long numero = N; // Usar valor absoluto para manejar números negativos
            while (numero > 0) { //La variable numero se encarga de realizar el conteo de dígitos, mientras que N permite imprimir el número inicial en pantalla. Por eso se usan ambas.
                numero /= 10;
                cantidadDígitos++;
            }
            cout << "El numero de digitos de " << N << " es: " << cantidadDígitos << endl;
        }
    }
    {
        cout << "----------Ejercicio 27---------" << endl;
        cout << "Este programa funciona como calculadora de suma, resta, multiplicacion y division." << endl;
        float a, b; //Para que el usuario pueda realizar calculos con decimales.
        char operacion; //Ya que esta variable será usada por caracteres de teclado (Signos de operaciones).
        float resultado; //Para que el usuario reciba resultados decimales de ser necesario.
        cout << "Ingrese el primer numero: ";
        cin >> a;
        cout << "Ingrese el segundo numero: ";
        cin >> b;
        cout << "Ingrese la operacion (+, -, x, /): ";
        cin >> operacion;
        switch (operacion) {
        case '+':
            resultado = a + b;
            cout << a << "+" << b << "=" << resultado << endl;
            break;
        case '-':
            resultado = a - b;
            cout << a << "-" << b << "=" << resultado << endl;
            break;
        case 'x':
            resultado = a * b;
            cout << a << "X" << b << "=" << resultado << endl;
            break;
        case '/':
            if (b != 0) {
                resultado = a / b;
                cout << a << "/" << b << "=" << resultado << endl;
            } else {
                cout << "Error: Division por cero no permitida." << endl;
            }
            break;
        default:
            cout << "Operacion no valida." << endl;
            break;
        }
    }
    {
        cout << "----------Ejercicio 29----------" << endl;
        int bajo = 0;
        int alto = 100;
        int medio;
        char respuesta;
        cout << "Piensa en un numero entre 0 y 100 (incluidos ambos) y el programa intentara adivinarlo" << endl;
        while (bajo <= alto) {
            medio = bajo + (alto - bajo) / 2;
            cout << " ¿El numero que ha seleccionado es " << medio << "? (Ingrese '>' si el numero es mayor, '<' si es menor, '=' si es igual): ";
            cin >> respuesta;
            if (respuesta == '=') {
                cout << "El numero seleccionado es: " << medio << endl;
                break;
            } else if (respuesta == '>') {
                bajo = medio + 1;
            } else if (respuesta == '<') {
                alto = medio - 1; // Linea 270 y linea 272 sirven para ajustar el valor en caso de que no sea el número correcto. (Búsqueda por valor medio)
            } else {
                cout << "Respuesta no valida. Por favor ingrese '>', '<' o '='." << endl;
            }
        }
    }
    {
        cout << "----------Problema 1----------" << endl;
        cout << "Este programa recibe un caracter, identifica si es una vocal, consonante o ninguna e imprime el mensaje correspondiente." << endl;
        char caracter;
        cout << "Ingresa el caracter: ";
        cin >> caracter;
        caracter = tolower(caracter); //tolower convierte el caracter a minuscula para facilitar la comparacion (solo letras en minuscula).
        if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u') {
            cout << "El caracter '" << caracter << "' es una vocal." << endl;
        }
        else if ((caracter >= 'b' && caracter <= 'z') && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u' && caracter != 'a') {
            cout << "El caracter '" << caracter << "' es una consonante." << endl;
        }
        else {
            cout << "El caracter '" << caracter << "' no es una vocal ni una consonante." << endl;
        }
    }
    {
        cout << "----------Problema 3----------" << endl;
        cout <<"Este programa lee un mes y dia insertados y luego verifica si es un formato valido" << endl;
        int dia, mes;

        // Solicitar al usuario la fecha
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el mes: ";
        cin >> mes;
        if (mes < 1 || mes > 12) {
            cout << mes << " es un mes invalido." << endl;
        } else {
            int diasPorMes;
            if (mes == 2) {
                diasPorMes = 28;
            } else {
                diasPorMes = 31;
            }
            if (dia < 1 || dia > diasPorMes) {
                cout << dia << "/" << mes << " es una fecha invalida." << endl;
            } else {
                if (mes == 2 && dia == 29) {
                    cout << dia << "/" << mes << " es valida en bisiesto." << endl;
                } else {
                    cout << dia << "/" << mes << " es una fecha valida." << endl;
                }
            }
        }
    }
    {
        cout << "----------Problema 5----------" << endl;
        cout << "Este programa imprime un patron de asteriscos en forma de diamante donde la linea con mas caracteres tiene 7 y los asteriscos son impares en todas las lineas." << endl;
        int N = 7; // Lineas totales del patrón
        int medio = N / 2; // Linea central del patrón
        for (int i = 0; i <= medio; ++i) { // Imprime la parte superior del patrón
            for (int j = 0; j < medio - i; ++j) { // Imprime espacios (Al igual que la linea 341)
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; ++j) { // Imprime asteriscos (Al igual que la linea 344)
                cout << "*";
            }
            cout << endl;
        }
        for (int i = medio - 1; i >= 0; --i) { // Imprimir la parte inferior del patrón
            for (int j = 0; j < medio - i; ++j) {
                cout << " ";
            }
            for (int j = 0; j < 2 * i + 1; ++j) {
                cout << "*";
            }
            cout << endl;
        }
    }
    {
        cout << "-----------Problema 7----------" << endl;
        cout << "Este programa toma un numero ingresado e imprime la suma de todos los numeros pares menores al numero ingresado (segun la serie de Fibonacci)." << endl;
        cout << "Para contextualizar: En la serie de Fibonacci, cada numero es la suma de los 2 anteriores e inicia con 1 y 1. Por ejemplo: 1, 1, 2, 3, 5, 8, ...." << endl;
        int n;
        cout << "Ingrese un numero: ";
        cin >> n;
        if (n <= 0) {
            cout << "El numero debe ser mayor que cero." << endl;
            return 1;
        }
        int a = 1; // Primer número de Fibonacci
        int b = 1; // Segundo número de Fibonacci
        int sumaPares = 0;
        while (b < n) {  // Segundo número de Fibonacci debe ser menor a n
            if (b % 2 == 0) { // Verificar que el segundo número sea par
                sumaPares += b;
            }
            int siguiente = a + b; // Generar el siguiente número en la serie de Fibonacci
            a = b;
            b = siguiente;
        }
        cout << "El resultado de la suma es: " << sumaPares << endl;
    }
    {
        cout << "----------Problema 9----------" << endl;
        cout << "Este programa toma un numero entero ingresado N e imprime el resultado de la suma entre todos los digitos de N elevados a si mismos." << endl;
        int N;
        cout << "Ingrese un numero entero: ";
        cin >> N;
        N = abs(N); // Por si se ingresa un número negativo
        int suma = 0;
        while (N > 0) { // Procesar cada dígito del número
            int digito = N % 10; // Obtener el último dígito
            int resultado = 1; // Calcular cada digito elevado a si mismo
            for (int i = 0; i < digito; ++i) {
                resultado *= digito;
            }
            suma += resultado; // Sumar el resultado
            N /= 10; // Eliminar el último dígito
        }
        cout << "El resultado de la suma es: " << suma << endl;
    }
    {
        cout << "----------Problema 11----------" << endl;
        cout << "Este programa se encarga de recibir un numero ingresado N e imprime el mcm entre todos los numeros enteros de 1 a N." << endl;
        int N;
        cout << "Ingrese un numero: ";
        cin >> N;
        if (N < 1) {
            cout << "El numero debe ser mayor o igual a 1." << endl;
            return 1;
        }
        int resultado = 1; //Inicializando resultado del procedimiento de minimo comun multiplo.
        for (int i = 2; i <= N; ++i) {
            int a = resultado; // Algoritmo de Euclides para calcular MCD (Bucle)
            int b = i;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            int valorMCD = a;
            resultado = (resultado * i) / valorMCD; //Calcular MCM con MCD
        }
        cout << "El minimo comun multiplo es: " << resultado << endl;
    }
    {
        cout << "----------Problema 13----------";
        cout << "Este programa recibe un numero y calcula la suma de todos los numeros primos menores que el ingresado." << endl;
        int N;
        cout << "Ingrese un numero: ";
        cin >> N;
        if (N <= 2) {
            cout << "El numero debe ser mayor o igual a 2." << endl;
            return 1;
        }
        int suma = 0;
        for (int i = 2; i < N; ++i) {
            if (i > 1) { // Verificar si i es primo (i se toma como contador, pero también como número para la suma final)
                bool esPrimo = true;
                if (i <= 3) esPrimo = true;
                else if (i % 2 == 0 || i % 3 == 0) esPrimo = false;
                else {
                    for (int j = 5; j * j <= i; j += 6) { // Verificar la divisibilidad desde 5 hasta la raíz cuadrada de i.
                        if (i % j == 0 || i % (j + 2) == 0) {
                            esPrimo = false;
                            break;
                        }
                    }
                }
                if (esPrimo) {
                    suma += i; //Se añade i a la suma final
                }
            }
        }
        cout << "El resultado de la suma es: " << suma << endl;
    }
    {
        cout << "----------Problema 15----------" << endl;
        cout << "Este programa se encarga de recibir un numero impar n y calcular la suma de los numeros en la diagonal de una espiral de nxn." << endl;
        cout << "La forma de la espiral es la siguiente (Tomando un ejemplo de 5x5)" << endl;
        cout << "21 22 23 24 25" << endl;
        cout << "20 7 8 9 10" << endl;
        cout << "19 6 1 2 11" << endl;
        cout << "18 5 4 3 12" << endl;
        cout << "17 16 15 14 13" << endl;
        cout << "Ingrese un número impar: ";
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << "El número debe ser impar." << endl;
        return 1;
        }
        int suma = 1; // La suma comienza en 1 (el centro de la espiral)
        int numeroActual = 1;
        // Cálculo de las diagonales sin usar memoria dinámica
        for (int capa = 1; capa <= n / 2; ++capa) {
            for (int i = 0; i < 4; ++i) {  // 4 esquinas por cada capa
                numeroActual += 2 * capa;
                suma += numeroActual;
            }
        }
        cout << "En una espiral de " << n << "x" << n << ", la suma es: " << suma << "." << endl;
        return 0;
    }
    {
        cout << "----------Problema 17----------" << endl;
        cout << "Este programa toma un numero k y calcula el primer numero triangular con mas de k divisores." << endl;
        cout << "Los numeros triangulares son los resultantes al sumar el numero anterior junto con su posicion en el arreglo de los mismos." << endl;
        int k;
        cout << "Ingrese el numero de divisores: ";
        cin >> k;
        if (k <= 0) {
            cout << "El número de divisores debe ser mayor que 0." << endl;
            return 1;
        }
        int n = 1;
        int numTriangular = 0;
        int divisorCount = 0;
        while (true) {
            numTriangular = n * (n + 1) / 2;
            divisorCount = 0;
            int raiz = 0; // Calcular la raíz cuadrada aproximada del número triangular
            int incremento = 1;
            while (incremento * incremento <= numTriangular) { // Evalúa si la raíz cuadrado aproximada del valor actual de incremento es menor o igual al número triangular (numTriangular)
                raiz = incremento;
                incremento++;
            }
            // Contar los divisores utilizando la raíz cuadrada aproximada
            for (int i = 1; i <= raiz; ++i) {
                if (numTriangular % i == 0) { // Para concluir que i es un divisor
                    divisorCount++;
                    if (i != numTriangular / i) {
                        // numTriangular / i tambien es un divisor.
                        divisorCount++;
                    }
                }
            }
            if (divisorCount > k) {
                cout << "El primer numero triangular con mas de " << k << " divisores es: " << numTriangular << endl;
                break;
            }
            ++n; // Siguiente num tringular
        }
    }
}
