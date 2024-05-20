#include <iostream>
using namespace std;

int main()
 {
    int cpf, d1, d2, d3, d4, d5, d6, d7, d8, d9, soma, dv1, dv2; //Com o comando "INT", estamos definindo valores inteiros para as variáveis.

    cout << "Digite um CPF de 8 a 9 digitos: ";
    cin >> cpf;

   if (cpf > 999999999 or cpf < 9999999){
     cout << "CPF inválido" <<endl;
   }

     else {

    d9 = cpf % 10;
    cpf = cpf / 10;
    d8 = cpf % 10;
    cpf = cpf / 10;
    d7 = cpf % 10;
    cpf = cpf / 10;
    d6 = cpf % 10;
    cpf = cpf / 10;
    d5 = cpf % 10;
    cpf = cpf / 10;
    d4 = cpf % 10;
    cpf = cpf / 10;
    d3 = cpf % 10;
    cpf = cpf / 10;
    d2 = cpf % 10;
    cpf = cpf / 10;
    d1 = cpf % 10;
    cpf = cpf / 10;
    //Nesse caso utilizamos o mod ("%") e a divisão por 10 para desmembrar o CPF e utilizarmos os dígitos para dar valor as variáveis d1 à d9


    soma = d1 * 10 + d2 * 9 + d3 * 8 + d4 * 7 + d5 * 6 + d6 * 
    5 + d7 * 4 + d8 * 3 + d9 * 2;



    dv1 = soma % 11;

    if (dv1 < 2 ) dv1 = 0; //Neste "IF" estamos definindo que se o resto da divisão da variável "soma" por 11 for menor que 2, a variável "dv1" recebe o valor 0.

      else  dv1 = 11 - dv1;            

    dv2 = d1 * 11 + d2 * 10 + d3 * 9 + d4 * 8 + d5 * 7 + d6 * 
    6 + d7 * 5 + d8 * 4 + d9 * 3 + dv1 * 2;



    dv2 = dv2 % 11;

    if (dv2 < 2 ) dv2 = 0;

       else   dv2 = 11 - dv2;             

    cout << "O seu CPF é: " << endl;
    cout << d1 << d2 << d3 << "." << d4 << d5 << d6 << "." << d7 << d8 << 
    d9 << "-" << dv1 << dv2; //Com este "COUT" estamos imprimindo os valores das variáveis, formando assim o  CPF completo.

    return 0;
     }
   }