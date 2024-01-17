#include <iostream>
#include <string>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

bool letra_existe(char chute){
    for(char letra: PALAVRA_SECRETA){
        if(chute == letra){
            return true;
        }
    }
    return false;
}

int main (){


    bool nao_acertou = true;
    bool nao_enforcou = true;


    while(nao_acertou && nao_enforcou){
        char chute;
        cin >> chute;

        if(letra_existe(chute)){
            cout << "Muito Bem, a palavra possui essa letra" << endl;
        }else{
            cout << "Você errou, a palavra não possui essa letra" << endl;
        }
    }
}