#include<iostream>

using namespace std;

int main () {
    float c = 0;
    float f = 0;

    cout << "Apresente um valor para converter para c : \n";
    cin >> f;


    c=((f-32)*5)/9;
    
    cout << "resultado: " << c ;

}