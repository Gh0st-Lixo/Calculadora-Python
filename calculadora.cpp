
#include <iostream>
#include <stdlib.h>

int main()
{   
    float num1, num2;
    int Operador;
    
    system ("cls");
    printf ("***  Calculadora  ***\n");
    printf ("Escolha UM operador matematico:\nDigite [ 1 ] para somar       [ + ]\nDigite [ 2 ] para subtrair    [ - ]\nDigite [ 3 ] para dividir     [ / ]\nDigite [ 4 ] para multiplicar [ x ]\n--> ");
    
    std::cin >> Operador;
    printf ("Digite o primeiro numero --> ");
    std::cin >> num1;

     switch (Operador) {
        case 1:
            std::cout << "Digite o segundo número para somar com: " << num1 << " + ";
            std::cin >> num2;
            std::cout << "Resultado: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Digite o segundo número para subtrair de: " << num1 << " - ";
            std::cin >> num2;
            std::cout << "Resultado: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Digite o segundo número para dividir por: " << num1 << " / ";
            std::cin >> num2;
            std::cout << "Resultado: " << num1 / num2 << std::endl;
            break;
        case 4:
            std::cout << "Digite o segundo número para multiplicar por: " << num1 << " x ";
            std::cin >> num2;
            std::cout << "Resultado: " << num1 * num2 << std::endl;
            break;
        default:
        //std::cout << "erro";
    ;}
    return 0;
    
}
