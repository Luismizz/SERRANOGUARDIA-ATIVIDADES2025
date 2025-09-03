//Você será responsável por criar um programa em C++ para o Opina.com, um site de avaliações de filmes. O programa permitirá que os usuários informem o nome do filme, deixem uma opinião e atribuam uma nota de 1 a 5 estrelas ao filme.

#include <iostream>
#include <string>

using namespace std;

struct filme {
    string nome;
    string opiniao;
    int nota;
};


void apinapontocom(filme app);

int main() {


    filme app;


    cout << "Seja bem-vindo ao Opina.com!\nDigite o nome do filme que você gostaria de ver: ";
    getline(cin, app.nome);

    cout << "Digite a sua opiniao sobre o filme: ";
    getline(cin, app.opiniao);

    cout << "Quantas estrelas voce da para o filme? (Entre 1 e 5): ";
    cin >> app.nota;

    while (app.nota < 1 || app.nota > 5) {
        cout << "ERRO!! O numero tem que estar entre 1 e 5. Tente novamente: ";
        cin >> app.nota;
    }

    cout << "\nObrigado pela avaliacao. Confira os dados:\n";

    apinapontocom(app);

    return 0;
}


void apinapontocom(filme app) {
    cout << "Filme Escolhido: " << app.nome << endl;
    cout << "Opiniao do Filme: " << app.opiniao << endl;
    cout << "Sua Nota sobre o Filme: " << app.nota << endl;
}
