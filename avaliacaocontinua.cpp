#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, sobrenome;

    cout << "Digite seu primeiro nome: ";
    cin >> nome;

    cout << "Digite seu sobrenome: ";
    cin >> sobrenome;

    cout << "Quantidade de letras no primeiro nome: " << nome.length() << endl;

    string nomeCompleto = nome;
    nomeCompleto.append(" ");  
    nomeCompleto.append(sobrenome);
    cout << "Nome completo: " << nomeCompleto << endl;

    char resposta;
    cout << "Deseja substituir o sobrenome? (s/n): ";
    cin >> resposta;

    if (resposta == 's' || resposta == 'S') {
        string novoSobrenome;
        cout << "Digite o novo sobrenome: ";
        cin >> novoSobrenome;

        int pos = nomeCompleto.find(sobrenome);
        if (pos != string::npos) {
            nomeCompleto.replace(pos, sobrenome.length(), novoSobrenome);
            sobrenome = novoSobrenome;  
            cout << "Nome atualizado: " << nomeCompleto << endl;
        } else {
            cout << "Sobrenome antigo não encontrado!" << endl;
        }
    }

    cout << "Deseja remover alguma parte do nome completo? (s/n): ";
    cin >> resposta;

    if (resposta == 's' || resposta == 'S') {
        int posRemover, qtd;
        cout << "Digite a posição inicial para remoção (0 a " << nomeCompleto.length() - 1 << "): ";
        cin >> posRemover;
        cout << "Digite a quantidade de caracteres a remover: ";
        cin >> qtd;

        if (posRemover >= 0 && posRemover < (int)nomeCompleto.length() && qtd > 0) {
            nomeCompleto.erase(posRemover, qtd);
            cout << "Nome após remoção: " << nomeCompleto << endl;
        } else {
            cout << "Posição ou quantidade inválida." << endl;
        }
    }

    return 0;
}
