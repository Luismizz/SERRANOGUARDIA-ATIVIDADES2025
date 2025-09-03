#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50]= "Ana";
    char nome1[50] = "Ana";
    
    // strcmp compara duas strings
    // Retorna 0 se forem iguais, <0 se a primeira for "menor" e >0 se a primeira for "maior"
    if(strcmp(nome, nome1)== 0){
        printf("São iguais");
    } else{
        printf("Não são Iguais");
    }
    
//-----------------------------------------------------------------------------

    char curso[100] = "Engenharia de Software ";
    char faculdade[1000] = "PUC São Paulo";
    char copiaCurso[50];  

    strcpy(copiaCurso, curso); // Copia o conteúdo de "curso" para "copiaCurso"

    strcat(curso, faculdade); // Concatena (junta) o conteúdo de "faculdade" no final da string "curso"

    printf("\nCurso e Faculdade: %s\n", curso); // Mostra a string "curso" já com os dois textos unidos
    printf("Cópia do curso: %s", copiaCurso); // Mostra a cópia feita de "curso"

return 0;
}

