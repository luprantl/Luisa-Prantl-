#include<iostream>

int main() {
    float fahrenheit = 0;
    float celsius = 0;

    std::cout << "Digite a temperatura em graus celsius: \n";
    std::cin >> celsius;

    //formula 
    fahrenheit = ( 9 * celsius + 160 ) / 5;

    std::cout << "Temperatura convertida: " << fahrenheit;

}