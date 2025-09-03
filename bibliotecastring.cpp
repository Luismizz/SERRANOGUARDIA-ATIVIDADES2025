#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase = "Programar em C++ é útil";
    //O .find() retorna o índice (posição) do primeiro caractere encontrado.
    int pos = frase.find("C++");
    cout<< pos;
    
//-----------------------------------------------------------------------------
    string texto = "\nEu gosto de Java";
    //O .replace(pos, length, nova_string) substitui parte do conteúdo de uma string por outro texto.
    texto.replace (13,4,"C++");
    cout << texto;
    
    
//-----------------------------------------------------------------------------

    string nome = "\nLuis Miguel";
    //O .erase(pos, length) remove caracteres de uma string.
    nome.erase(5,7);
    cout << nome;
    
//-----------------------------------------------------------------------------

    string palavra = "\nOi Miguel!";
    //O .insert(pos, "texto") insere uma nova sequência de caracteres em uma posição específica da string.
    palavra.insert (3, " Luis");
    cout <<palavra;
    
//-----------------------------------------------------------------------------

   string troca =  "\nOlá nome, gosto de estudo e esporte";
    int posicao = troca.find("nome");
    troca.replace(posicao, 4, "Fernando");
    posicao = troca.find("estudo");
    troca.replace(posicao, 6, "Matematica");
    posicao = troca.find("esporte");
    troca.replace(posicao, 7, "futebol");
    troca.insert(0,  "Mensagem: ");
    cout << troca;
   
    return 0;

    


}