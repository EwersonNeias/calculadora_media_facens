#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//aqui fica a biblioteca usada no codigo

//variaveis ultilizada para armazenar 
int main() {
   char continuar;
   string nome;
   int idade;
   int i = 0;
   bool login_sucesso = false;
//cout usado para se comunicar com o usuario
   cout << "Seja Bem vindo a tela de login\n\n";
//DO é usado para começar a repetição
   do{

//interface que pede para o usúario colocar suas informações
   cout << "Digite seu nome: ";
   cin >> nome;

   cout << "Digite seu RA: ";
   cin >> idade;
   
     {
            
            cout << "Login relizado com sucesso!\n\n";
            login_sucesso=true;
            
    
        }

//variaveis sendo nomeadas
    double ac1, ac2, ag, af;

//interface para o usuario digitar suas notas
    cout << "Digite a sua nota da ac1: ";
    cin >> ac1;

    cout << "Digite a sua nota da ac2: ";
    cin >> ac2;

    cout << "Digite a sua nota da ag: ";
    cin >> ag;

    cout << "Digite a sua nota da af: ";
    cin >> af;


//formula para medir o calculo de cada nota
    ac1 = (ac1 * 0.15);
    ac2 = (ac2 * 0.35);
    ag = (ag * 0.10);
    af = (af * 0.50);

//fazendo as somas das notas
    double soma = (ac1 + ac2 + af + ag);

//aqui o codigo se comunica com o usuario informando sua media
    cout << "A sua média do semestre foi: " << soma << endl << endl;

//caso sua nota foi de 5 para cima o sistema ira informar que foi aprovado
    if (soma >= 5) {
        cout << "Parabéns! Você foi aprovado " << nome << " " << idade << endl;
    }

//caso sua nota foi entre 3 e 5 o sistema ira informar que esta de recuperação com chance de prova subistitutiva
    else if (soma >=3 && soma <5) {
        cout << "Você está em recuperação. Deverá fazer uma prova substitutiva " << nome << " " << idade << endl;
    }

//caso sua nota foi abaixo de 3 o sistema informa que foi reprovado
    else if (soma < 3) {
        cout << "Eita! Você foi reprovado " << nome << " " << idade << endl;
    }

//aqui o codigo se comunica pergutando ao usuario se ele quer continuar ou não com (S) para sim e (N) para não
    cout << "Deseja continuar? (s/n) >>> ";
    cin >> continuar;

//Quando você faz a sua escolha, caso for (S) o programa retorna para o começo 
   } while (continuar == 's' || continuar == 'S');

    return 0;

}