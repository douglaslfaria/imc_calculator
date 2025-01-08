
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nome;
    int idade;
    float altura;
    float peso;
    float imc;

    // Pergunta os dados da pessoa
    std::cout << " Qual e o seu nome? ";
    std::cin >> nome;
    std::cout << " Quantos anos voce tem? ";
    std::cin >> idade;
    std::cout << " Qual o seu peso? ";
    std::cin >> peso;
    std::cout << " Qual a sua altura? ";
    std::cin >> altura;

    // Exibe um saudação
    std::cout << " Ola " << nome << "! Voce tem " << idade << " anos, pesa " << peso << "kg e tem " << altura << " de altura. " << std::endl;

    // Verifica se a pessoa é maior ou menor de idade
    if( idade >= 18){
        std::cout << " Voce e maior de idade. " << std::endl;
    }else{
        std::cout << " voce e menor de idade. " << std::endl;
    }

    // calculo imc

    imc = peso / (altura * altura);

    // Verifica se a pessoa esta dentro do peso ideal
    if (imc < 18.5) {
        cout << " Classificacao: Abaixo do peso " << endl;
    } else if (imc >= 18.5 && imc < 24.9) {
        cout << " Classificacao: Peso normal " << endl;
    } else if (imc >= 25 && imc < 29.9) {
        cout << " Classificacao: Sobrepeso " << endl;
    } else {
        cout << " Classificacao: Obesidade " << endl;
    }

return 0;

}
