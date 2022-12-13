//Imprime a média aritmética de 10 notas
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float soma = 0.0;
    const int max = 10;
    
    
    cout << setprecision(2);
    
    
    for(int i=0; i< max; i++)
    {
        cout << "\nNota  " << (i+1) << " = ";
        float nota;
        cin >> nota;
        soma += nota;
      
    }
    cout << "\nMédia = " << (soma/max);
}
