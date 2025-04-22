#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define classe_max 1
#define notas_max 1
#define nome 1
#define buffer_max 100

typedef struct alunos {
    int classe[classe_max];
    float notas_maximas[notas_max];
    char nomes[nome][buffer_max];
} alunos;

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    struct alunos* ptrAlunos = (struct alunos*)malloc(sizeof(struct alunos));
    FILE* arquivo = fopen("notas.txt", "w");

    if(ptrAlunos) printf("Alocado dinamicamente com sucesso!\n");
    if(!ptrAlunos) return 1;
    if(arquivo) printf("arquivo criado com sucesso!\n");
    if(!arquivo) return 1;

    do {
        for(int i = 0; i < classe_max; ++i) {
            printf("Insira as classes[%d]: ", i + 1);
            scanf("%d", &ptrAlunos->classe[i]);
            limparBuffer();
        }

        for(int i = 0; i < notas_max; ++i) {
            printf("Insira as notas[%d]: ", i + 1);
            scanf("%f", &ptrAlunos->notas_maximas[i]);
            limparBuffer();
        }

        for(int i = 0; i < nome; ++i) {
            printf("Insira os nomes[%d]: ", i + 1);
            fgets(ptrAlunos->nomes[i], buffer_max, stdin);
            ptrAlunos->nomes[i][strcspn(ptrAlunos->nomes[i], "\n")] = '\0';
        }

        
        for(int i = 0; i < nome; ++i) {
            fprintf(arquivo, "Classe: %d | Nota: %.2f | Nome: %s\n\n", 
                ptrAlunos->classe[i], 
                ptrAlunos->notas_maximas[i], 
                ptrAlunos->nomes[i], stdin);
            fclose(arquivo);
        }

    } while(1);

    /*
    fprintf(arquivo,
            "Classe: %d | nota %.2f | Nome: %s\n",
            ptrAlunos->classe[i] m);
    */

    free(ptrAlunos);
    return EXIT_SUCCESS;
}
