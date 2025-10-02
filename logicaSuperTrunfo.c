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

       // VARIAVEIS DE RESULTADO.
       int resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade_populacional, resultado_per_capita, resultado_super_poder;

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

       // BLOCO DE COMPARAÇÃO DAS CARTAS - FIZ COM TODAS PARA ENTENDER MELHOR COMO FUNCIONA O IF E ELSE
       printf("\n DUELO DE CARTAS \n");

       printf("\n----- POPULAÇÃO -----\n");
       printf("Carta 1 - %s - POPULAÇÃO: %lu \n", nome_carta_um, populacao_carta_um);
       printf("Carta 2 - %s - POPULAÇÃO: %lu \n", nome_carta_dois, populacao_carta_dois);
       if (populacao_carta_um > populacao_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- AREA -----\n");
       printf("Carta 1 - %s - AREA: %.2f \n", nome_carta_um, area_carta_um);
       printf("Carta 2 - %s - AREA: %.2f \n", nome_carta_dois, area_carta_dois);
       if (area_carta_um > area_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", area_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- PIB -----\n");
       printf("Carta 1 - %s - PIB: %.2f \n", nome_carta_um, pib_carta_um);
       printf("Carta 2 - %s - PIB: %.2f \n", nome_carta_dois, pib_carta_dois);
       if (pib_carta_um > pib_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- PONTOS TURISTICOS -----\n");
       printf("Carta 1 - %s - PONTOS TURISTICOS: %d \n", nome_carta_um, pontos_turisticos_carta_um);
       printf("Carta 2 - %s - PONTOS TURISTICOS: %d \n", nome_carta_dois, pontos_turisticos_carta_dois);
       if (pontos_turisticos_carta_um > pontos_turisticos_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- DENSIDADE -----\n");
       printf("Carta 1 - %s - DENSIDADE: %.2f \n", nome_carta_um, densidade_carta_um);
       printf("Carta 2 - %s - DENSIDADE: %.2f \n", nome_carta_dois, densidade_carta_dois);
       if (densidade_carta_um < densidade_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- PER CAPITA -----\n");
       printf("Carta 1 - %s - PER CAPITA: %.2f \n", nome_carta_um, per_capita_carta_um);
       printf("Carta 2 - %s - PER CAPITA: %.2f \n", nome_carta_dois, per_capita_carta_dois);
       if (per_capita_carta_um > per_capita_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       printf("\n----- SUPER PODER -----\n");
       printf("Carta 1 - %s - SUPER PODER: %2.f \n", nome_carta_um, super_poder_carta_um);
       printf("Carta 2 - %s - SUPER PODER: %2.f \n", nome_carta_dois, super_poder_carta_dois);
       if (super_poder_carta_um > super_poder_carta_dois)
       {
              printf("Carta 1 - %s - VENCEU \n", nome_carta_um);
       }
       else
       {
              printf("Carta 2 - %s - VENCEU \n", nome_carta_dois);
       }

       return 0;
}
