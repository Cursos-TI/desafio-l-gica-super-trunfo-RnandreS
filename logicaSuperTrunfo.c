#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

       // VARIAVEIS CARTA UM
       char estado_carta_um, codigo_carta_um[4], nome_carta_um[100];
       int pontos_turisticos_carta_um;
       unsigned long int populacao_carta_um;
       float area_carta_um, pib_carta_um, densidade_carta_um, per_capita_carta_um;

       // VARIAVEIS CARTA DOIS
       char estado_carta_dois, codigo_carta_dois[4], nome_carta_dois[100];
       int pontos_turisticos_carta_dois;
       unsigned long int populacao_carta_dois;
       float area_carta_dois, pib_carta_dois, densidade_carta_dois, per_capita_carta_dois;

       // VARIAVEIS DO SUPER PODER E DE COMPARAÇÃO DAS CARTAS.
       float super_poder_carta_um, super_poder_carta_dois;

       // VARIAVEL PARA OPÇÂO.
       int opcao;

       // Entrada de dados da carta um;
       printf("DADOS DA CARTA UM \n");
       printf("DIGITE UMA LETRA DE A ATÉ H REPRESENTANDO UM DOS 8 ESTADO: \n");
       scanf(" %c", &estado_carta_um); // espaço antes do %c por conta do buffer( obs: pesquisar mais sobre o buffer )

       printf("DIGITE A LETRA ACIMA E UM NUMERO ENTRE 01 e 04 (EX:A01,B01) \n");
       scanf("%s", codigo_carta_um);

       printf("DIGITE O NOME DA CIDADE (caso seja composto digite sem o espaço): \n");
       scanf("%s", nome_carta_um);

       printf("NUMERO DA POPULAÇÃO: \n");
       scanf("%lu", &populacao_carta_um);

       printf("TAMANHO DA AREA: \n");
       scanf("%f", &area_carta_um);

       printf("NUMERO DO PIB: \n");
       scanf("%f", &pib_carta_um);

       printf("NUMERO DE PONTOS TURISTICOS: \n");
       scanf("%i", &pontos_turisticos_carta_um);

       // Entrada de dados da carta dois;
       printf("DADOS DA CARTA DOIS\n");
       printf("DIGITE UMA LETRA DE A ATÉ H REPRESENTANDO UM DOS 8 ESTADO: \n");
       scanf(" %c", &estado_carta_dois); // espaço antes do %c por conta do buffer( obs: pesquisar mais sobre o buffer )

       printf("DIGITE A LETRA ACIMA E UM NUMERO ENTRE 01 e 04 (EX:A01,B01) \n");
       scanf("%s", codigo_carta_dois);

       printf("DIGITE O NOME DA CIDADE (caso seja composto digite sem o espaço): \n");
       scanf("%s", nome_carta_dois);

       printf("NUMERO DA POPULAÇÃO: \n");
       scanf("%lu", &populacao_carta_dois);

       printf("TAMANHO DA AREA: \n");
       scanf("%f", &area_carta_dois);

       printf("NUMERO DO PIB: \n");
       scanf("%f", &pib_carta_dois);

       printf("NUMERO DE PONTOS TURISTICOS: \n");
       scanf("%i", &pontos_turisticos_carta_dois);

       // Aqui é feito o calculo da DENSIDADE POPULACIONAL e do PIB PER CAPTA de ambas as cartas.
       densidade_carta_um = (float)populacao_carta_um / area_carta_um;
       per_capita_carta_um = (float)pib_carta_um / populacao_carta_um;
       densidade_carta_dois = (float)populacao_carta_dois / area_carta_dois;
       per_capita_carta_dois = (float)pib_carta_dois / populacao_carta_dois;

       // Aqui vamos calcular o SUPER PODER de ambas as cartas.
       super_poder_carta_um = (float)populacao_carta_um + area_carta_um + pib_carta_um + pontos_turisticos_carta_um + pontos_turisticos_carta_um + (1 / densidade_carta_um);
       super_poder_carta_dois = (float)populacao_carta_dois + area_carta_dois + pib_carta_dois + pontos_turisticos_carta_dois + pontos_turisticos_carta_dois + (1 / densidade_carta_dois);

       // SAIDA DOS DADOS DE AMBAS AS CARTAS
       printf("\n====================================\n");
       printf("      CARTAS CADASTRADAS\n");
       printf("====================================\n");

       printf("\n--- Informacoes da Carta 01 ---\n"
              "Estado: %c\n"
              "Codigo: %s\n"
              "Nome da cidade: %s\n"
              "Populacao: %lu\n"
              "Area: %.2f km2\n"
              "PIB: %.2f bilhoes\n"
              "Pontos turisticos: %d\n"
              "Densidade Populacional: %.2f hab/km²\n"
              "PIB per Capita: %.2f reais\n",
              estado_carta_um,
              codigo_carta_um,
              nome_carta_um,
              populacao_carta_um,
              area_carta_um,
              pib_carta_um,
              pontos_turisticos_carta_um,
              densidade_carta_um,
              per_capita_carta_um);

       printf("\n--- Informacoes da Carta 02 ---\n"
              "Estado: %c\n"
              "Codigo: %s\n"
              "Nome da cidade: %s\n"
              "Populacao: %lu\n"
              "Area: %.2f km2\n"
              "PIB: %.2f bilhoes\n"
              "Pontos turisticos: %d\n"
              "Densidade Populacional: %.2f hab/km²\n"
              "PIB per Capita: %.2f reais\n",
              estado_carta_dois,
              codigo_carta_dois,
              nome_carta_dois,
              populacao_carta_dois,
              area_carta_dois,
              pib_carta_dois,
              pontos_turisticos_carta_dois,
              densidade_carta_dois,
              per_capita_carta_dois);

       // BLOCO DE DUELO O USUARIO DEVE ESCOLHER UMA OPÇÃO ENTRE AS SETE UTILIZANDO NUMEROS QUE VÃO DE 1 A 7 CASO O NUMERO SEJA
       // CASO O NUMERO SEJA 0 OU QUALQUER NUMERO MAIOR QUE 7 O JOGO SE ENCERRADO E AVISA QUE O NUMERO É INVALIDO
       // PESQUISAR EM COMO FAZER QUANDO O USUARIO NÃO COLOCAR NUMERO NENHUM.
       printf("\n --- DUELO DE CARTAS ---- \n");
       printf("Escolha um numero para o duelo entre as cartas \n"
              "(1) - POPULAÇÂO / (2) - ÀREA  / (3) - PIB / (4) - PONTOS TURISTICOS / (5) - DENSIDADE POPULACIONAL / (6) - RENDA PER CAPITA / (7) - SUPER PODER \nOPÇÂO: ");
       scanf("%d", &opcao);

       switch (opcao)
       {
       case 1:
              printf("\n -- POPULAÇÃO -- \n");
              printf("Carta 1 - %s - População: %lu \n", nome_carta_um, populacao_carta_um);
              printf("Carta 2 - %s - População: %lu \n", nome_carta_dois, populacao_carta_dois);
              if (populacao_carta_um > populacao_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (populacao_carta_dois > populacao_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 2:
              printf("\n -- ÁREA -- \n");
              printf("Carta 1 - %s - Área: %2.f \n", nome_carta_um, area_carta_um);
              printf("Carta 2 - %s - Área: %2.f \n", nome_carta_dois, area_carta_dois);
              if (area_carta_um > area_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (area_carta_dois > area_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 3:
              printf("\n -- PIB -- \n");
              printf("Carta 1 - %s - PIB: %2.f \n", nome_carta_um, pib_carta_um);
              printf("Carta 2 - %s - PIB: %2.f \n", nome_carta_dois, pib_carta_dois);
              if (pib_carta_um > pib_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (pib_carta_dois > pib_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 4:
              printf("\n -- PONTOS TURISTICOS -- \n");
              printf("Carta 1 - %s - Pontos Turisticos: %d \n", nome_carta_um, pontos_turisticos_carta_um);
              printf("Carta 2 - %s - Pontos Turisticos: %d \n", nome_carta_dois, pontos_turisticos_carta_dois);
              if (pontos_turisticos_carta_um > pontos_turisticos_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (pontos_turisticos_carta_dois > pontos_turisticos_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 5:
              printf("\n -- DENSIDADE POPULACIONAL -- \n");
              printf("Carta 1 - %s - Densidade Populacional: %2.f \n", nome_carta_um, densidade_carta_um);
              printf("Carta 2 - %s - Densidade Populacional: %2.f \n", nome_carta_dois, densidade_carta_um);
              if (densidade_carta_um < densidade_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (densidade_carta_dois < densidade_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 6:
              printf("\n -- RENDA PER CAPITA -- \n");
              printf("Carta 1 - %s - Renda Per Capita: %2.f \n", nome_carta_um, per_capita_carta_um);
              printf("Carta 2 - %s - Renda Per Capita: %2.f \n", nome_carta_dois, per_capita_carta_um);
              if (per_capita_carta_um > per_capita_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (per_capita_carta_dois > per_capita_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       case 7:
              printf("\n -- SUPER PODER -- \n");
              printf("Carta 1 - %s - Super Poder: %2.f \n", nome_carta_um, super_poder_carta_um);
              printf("Carta 2 - %s - Super Poder: %2.f \n", nome_carta_dois, super_poder_carta_dois);
              if (super_poder_carta_um > super_poder_carta_dois)
              {
                     printf("Carta 1 - %s - VENCEU", nome_carta_um);
              }
              else if (super_poder_carta_dois > super_poder_carta_um)
              {
                     printf("Carta 2 - %s - VENCEU", nome_carta_dois);
              }
              else
              {
                     printf("Houve um empate entre as cartas");
              }
              break;
       default:
              printf("NUMERO INVALIDO FIM DE JOGO");
              break;
       }
       return 0;
}
