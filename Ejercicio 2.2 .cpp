#include <iostream>

int main() {
    int num = 0;
    while (num <= 30) {

        num += 3;
        if (num % 2 != 0) {
            break;
        }
    }

    std::cout << "El primer numer impar despues de 30 es: " << num << std::endl;

    return 0;
}
