#include <iostream>
#include <cstdlib>
using namespace std;

int main(){

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;
    int chute;
    int qntd;

    cout << "************************************" << endl;
    cout << "* Bem-vindo ao Jogo Da Adivinhação *" << endl;
    cout << "************************************" << endl;


    while (chute != NUMERO_SECRETO){
        qntd++;
        cout << "Qual o seu chute? ";
        cin >> chute;
        
        if (chute < NUMERO_SECRETO){
            cout << "O seu número é menor que o número secreto" << endl;
        }else if (chute > NUMERO_SECRETO){
            cout << "O seu número é maior que o número secreto" << endl;
        }else{
            cout << endl << "********************" << endl;
            cout << "Parabéns, você acertou em " << qntd;

            if(qntd == 1){
                cout << " tentativa :)" << endl;
            }else{
                cout << " tentativas :)" << endl;
            }
        }
    }
}