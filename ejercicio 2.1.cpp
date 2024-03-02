#include <iostream>

int main() {
    int a = 0; //Es la variable de la suma de los numeros impares
    int b = 0; // Es la variable de la suma de los numeros pares

    for (int i = 0; i <= 50; ++i) {
        if (i % 2 == 0) {
            // Si el numero es par se tiene que agregar ala variable "b'
            b += i;
        } else {
            // Si el número es impar, agrégalo a la variable 'a'
            a += i;
        }
    }

    std::cout << "Suma de numeros impares (a): " << a << std::endl;
    std::cout << "Suma de numeros pares (b): " << b << std::endl;

    return 0;
}
