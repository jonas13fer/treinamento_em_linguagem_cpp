//Conta caracteres de uma frase 

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int cont = 0;

    while(getchar() != '\r')
        cont++;
        
        
    cout << "\nO número de caracteres é " << cont;
}
