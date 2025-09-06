#include <iostream>
#define DEBUG
// using namespace std

long double largeDecimal = 0x1452579F12C58781; // 0b1100110
int main()
{
    float height = 1.8;
    char character = 'H';
    bool opened = false;
    unsigned int count = 0;
    short score = 30;
    int x, y;
    int aux;
#ifndef DEBUG
    std::cout << "Escriba dos numeros\n";
    std::cin >> x >> y;
    aux = x;
    x = y;
    y = aux;
    std::cout << "X: " << x << "Y: " << y << std::endl;
#endif
#ifdef DEBUG
    std::cout << "Global variable " << largeDecimal << std::endl;
    std::cout << "Float variable " << height << std::endl;
    std::cout << "Char variable " << character << std::endl;
    std::cout << "bool variable " << opened << std::endl;
    std::cout << "uns int variable " << count << std::endl;
    std::cout << "short variable " << score << std::endl;
#endif
    /*Multi line comment
    Imprimir direcciones
    de variables
    */
    std::cout << "Global variable address" << &largeDecimal << std::endl;
    std::cout << "Float variable address" << &height << std::endl;
    std::cout << "Char variable address" << &character << std::endl;
    std::cout << "bool variable address" << &opened << std::endl;
    std::cout << "uns int variable address" << &count << std::endl;
    std::cout << "short variable address" << &score << std::endl;
    /*Multi line comment
    Imprimir tamaño
    de variables
    */
    std::cout << "Global variable address" << sizeof(largeDecimal) << std::endl;
    std::cout << "Float variable address" << sizeof(height) << std::endl;
    std::cout << "Char variable address" << sizeof(character) << std::endl;
    std::cout << "bool variable address" << sizeof(opened) << std::endl;
    std::cout << "uns int variable address" << sizeof(count) << std::endl;
    std::cout << "short variable address" << sizeof(score) << std::endl;
    return 0;
}