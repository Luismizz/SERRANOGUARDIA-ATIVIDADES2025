#include <iostream>
#include <string>

using namespace std;

// Função que exibe uma mensagem usando o nome fornecido
void exibirMensagem(string nome);

int main() {
    string nome;

    cout << "Digite seu nome: ";
    getline(cin, nome);  // Lê o nome completo, incluindo espaços

    exibirMensagem(nome);  // Chama a função para exibir a mensagem

    return 0;
}

// Implementação da função
void exibirMensagem(string nome) {
    cout << "Olá, " << nome << endl;
}
