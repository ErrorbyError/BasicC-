#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

// registro.

struct Consulta
{
    char nome[100];
    int dia;
    int hora;
};

// variáveis globais
struct Consulta agenda[100];


int quantidadeAgendamento = 0;
// erro, variável sem atribuição e sendo usada em um loop para determinar a quantidade de agendamentos.
//solução: atribuição a 0;

bool verificarDisponibilidade(int diaAgenda, int horaAgenda){
    // o horário é das 8 até as 20h
    if (horaAgenda < 8 || horaAgenda > 20)     // solução MAPA BUG 1
    {
        printf("clínica fechada neste horário.\n");
        return false;
    }
    
    return true;
}

void agendarConsulta(){
    int diaAgenda;
    printf("Qual dia do mês você quer agendar?\n");
    fflush(stdin);
    scanf("%d", &diaAgenda);

   int horaAgenda;
   printf("Qual hora do dia você quer agendar?\n");
   fflush(stdin);
   scanf("%d", &horaAgenda);


   if (verificarDisponibilidade(diaAgenda, horaAgenda)){
    printf("horário disponível\n");
    printf("Vamos confirmar seu agendamento\n");
   //possível erro\/.
   // como a quantidadeAgendamento n foi atribuída. essa parte não irá funcionar como esperado.


    agenda[quantidadeAgendamento].dia = diaAgenda;
    agenda[quantidadeAgendamento].hora = horaAgenda;
    printf("Qual o seu nome?\n");
    fflush(stdin);
    gets(agenda[quantidadeAgendamento].nome);
    printf("Agendamento realizado!\n");
    quantidadeAgendamento++;
   }else
   {
    printf("horário não disponível.\n");
   }
}

void listarConsulta(){
    

    // esta parte não está sendo executada pois a variável: quantidadeAgendamento está com o valor null pois não foi atribuído nenhum valor a ela. 
    // se atribuímos a ela o valor 0 e colocarmos nosso loop para verificar se é maior ou igual a 0. ele irar executar. porém, não gravará os demais agendamentos e sim, substitui-lo na posição 0. 
    //
    //precisamos incrementar cada vez que o função for chamada para que tenhamos o registro de cada agendamento criado em suas respectivas posições.

    //solução por '<=' para ele enxergar o primeiro agendamento. 
    for (int i = 0; i <= quantidadeAgendamento; i++)
    {
        printf("==============================\n");
        printf("Nome: %s\n", agenda[i].nome);
        printf("Dia: %d\n", agenda[i].dia);
        printf("Hora: %d\n", agenda[i].hora);
        printf("==============================\n");

        if (agenda[i+1].dia == 0)
        {
            break;
        }
        
        
    }


    
}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, " ");
    int option;

    quantidadeAgendamento = 0;

    do
    {
        printf("Deseja uma opção listada abaixo?\n");
        printf("1 - Agendar\n");
        printf("2 - Listar\n");
        printf("3 - Sair\n");
        fflush(stdin);

        scanf("%d", &option);

        switch (option)
        {
        case 1:
            agendarConsulta();
            break;  // SOLUÇÃO MAPA BUG 2
        case 2:
            listarConsulta();
            break; // SOLUÇÃO MAPA BUG 2
        case 3:
            printf("Saindo do programa...\n");
            break; // SOLUÇÃO MAPA BUG 2

        default:
            printf("opção inválida\n");
            break; // SOLUÇÃO MAPA BUG 2
        }





    } while (option != 3);
    
    return 0;
}
