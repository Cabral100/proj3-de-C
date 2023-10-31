#include <stdio.h>
#include <string.h>
#include "lab.h"

int criarTarefa(ListaDeTarefas *lt) {
    if (lt->qtd >= 100) {
        printf("A lista de tarefas está cheia.\n");
        return 1;
    }

    printf("Tarefa: ");
    scanf("%s", lt->tarefas[lt->qtd].tarefa);
    printf("Descricao da Tarefa: ");
    scanf("%s", lt->tarefas[lt->qtd].descricao);
    printf("Prioridade da Tarefa: ");
    scanf("%d", &lt->tarefas[lt->qtd].prioridade);
    printf("Estado da Tarefa (0 - Não Iniciado, 1 - Em Andamento, 2 - Completo): ");
    scanf("%d", &lt->tarefas[lt->qtd].estado);
    printf("Categoria da Tarefa: ");
    scanf("%s", lt->tarefas[lt->qtd].categoria);

    lt->qtd += 1;
    return 0;
}