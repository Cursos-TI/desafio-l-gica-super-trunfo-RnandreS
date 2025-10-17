#include <stdio.h>
#include <string.h>
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

    // VARIAVEL PARA OPÇÂO.
    int opcao_um, opcao_dois;

    // VARIAVEIS PARA GUARDAR OS ATRIBUTOS
    int duelo_atributo_um, duelo_atributo_dois;

    // CARTAS PRÈ-CADASTRADAS
    // Para testar basta colocar outros valores na variaveis a baixo.
    estado_carta_um = 'a';
    strcpy(codigo_carta_um, "a01");
    strcpy(nome_carta_um, "riodejaneiro");
    populacao_carta_um = 13123;
    area_carta_um =  23123;
    pib_carta_um = 6456;
    pontos_turisticos_carta_um = 1;

    // Entrada de dados da carta dois;
    estado_carta_dois = 'b';
    strcpy(codigo_carta_dois, "b02");
    strcpy(nome_carta_dois, "saopaulo");
    populacao_carta_dois = 5312;
    area_carta_dois = 123413;
    pib_carta_dois = 56243;
    pontos_turisticos_carta_dois = 11;

    // Aqui é feito o calculo da DENSIDADE POPULACIONAL e do PIB PER CAPTA de ambas as cartas.
    densidade_carta_um = (float)populacao_carta_um / area_carta_um;
    per_capita_carta_um = (float)pib_carta_um / populacao_carta_um;
    densidade_carta_dois = (float)populacao_carta_dois / area_carta_dois;
    per_capita_carta_dois = (float)pib_carta_dois / populacao_carta_dois;

    // Aqui o jogador deve escolher os numeros de 1 a 6 de acordo com os atributos que ele vai querer duelar.
    printf(" --------------------- Hora de jogar --------------------- \n");
    printf("Escolha um numero para o duelo do primeiro atributo\n"
           "(1) - POPULAÇÂO / (2) - ÀREA  / (3) - PIB / (4) - PONTOS TURISTICOS / (5) - DENSIDADE POPULACIONAL / (6) - RENDA PER CAPITA \nOPÇÂO: ");
    scanf("%i", &opcao_um);

    // Primeiro eu comparo os dois atributos e vejo se ambos tem o mesmo valor, se sim atribuo o valor 1 a variavel duelo_atributo_um
    // caso não sejam iguais eu atribuo 0 ou 1 para a variavel duelo_atributo_um. 
    // esses numeros 2, 0 , 1 são para a comparação das cartas no final do jogo. 
    switch (opcao_um)
    {
    case 1:
        if (populacao_carta_um == populacao_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = populacao_carta_um > populacao_carta_dois ? 0 : 1;
        }

        break;
    case 2:
        if (area_carta_um == area_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = area_carta_um > area_carta_dois ? 0 : 1;
        }

        break;
    case 3:
        if (pib_carta_um == pib_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = pib_carta_um > pib_carta_dois ? 0 : 1;
        }

        break;
    case 4:
        if (pontos_turisticos_carta_um == pontos_turisticos_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = pontos_turisticos_carta_um > pontos_turisticos_carta_dois ? 0 : 1;
        }

        break;
    case 5:
        if (densidade_carta_um == densidade_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = densidade_carta_um < densidade_carta_dois ? 0 : 1;
        }

        break;
    case 6:
        if (per_capita_carta_um == per_capita_carta_dois)
        {
            duelo_atributo_um = 2;
        }
        else
        {
            duelo_atributo_um = per_capita_carta_um > per_capita_carta_dois ? 0 : 1;
        }

        break;
    default:
        printf("Numero invalido");
        break;
    }

    // Usei o termario comparando o valor da opção_um (no teste repare que a opção escolhida anteriormente ira sumir)
    // ele não imprime nada caso a opção já tenha sido escolhida.
    // ainda sim ele deixa escolher a mesma opção e o jogo continua (Isso é um bug).
    // pequisei sobre como resolver isso e achei a função exit() eu a colocaria dentro do primeiro if
    // e também colocaria no começo da primeira opção pois se colocar qualquer outro numero invalido no começo ele também continua o jogo.
    printf("\nEscolha outro numero para o duelo do segundo atributo\n");
    opcao_um == 1 ? printf("") : printf("(1) - POPULAÇÃO /");
    opcao_um == 2 ? printf("") : printf("(2) - AREA /");
    opcao_um == 3 ? printf("") : printf("(3) - PIB /");
    opcao_um == 4 ? printf("") : printf("(4) - PONTOS TURISTICOS /");
    opcao_um == 5 ? printf("") : printf("(5) - DENSIDADE POPULACIONAL /");
    opcao_um == 6 ? printf("") : printf("(6) - RENDA PER CAPITA /");
    printf("\nOPÇÃO: ");
    scanf("%i", &opcao_dois);

    // Primeiro eu comparo os dois atributos e vejo se ambos tem o mesmo valor, se sim atribuo o valor 1 a variavel duelo_atributo_um
    // caso não sejam iguais eu atribuo 0 ou 1 para a variavel duelo_atributo_um. 
    // esses numeros 2, 0 , 1 são para a comparação das cartas no final do jogo. 

    if (opcao_um == opcao_dois)
    {
        printf("NÃO É POSSIVEL ESCOLHER O MESMO ATRIBUTO PARA DUAS CARTAS!");
        // ONDE EU COLOCARIA A FUNÇÃO EXIT();
    }
    else
    {
        switch (opcao_dois)
        {
        case 1:
            if (populacao_carta_um == populacao_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = populacao_carta_um > populacao_carta_dois ? 0 : 1;
            }
            break;
        case 2:
            if (area_carta_um == area_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = area_carta_um > area_carta_dois ? 0 : 1;
            }
            break;
        case 3:
            if (pib_carta_um == pib_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = pib_carta_um > pib_carta_dois ? 0 : 1;
            }
            break;
        case 4:
            if (pontos_turisticos_carta_um == pontos_turisticos_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = pontos_turisticos_carta_um > pontos_turisticos_carta_dois ? 0 : 1;
            }
            break;
        case 5:
            if (densidade_carta_um == densidade_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = densidade_carta_um < densidade_carta_dois ? 0 : 1;
            }
            break;
        case 6:
            if (per_capita_carta_um == per_capita_carta_dois)
            {
                duelo_atributo_dois = 2;
            }
            else
            {
                duelo_atributo_dois = per_capita_carta_um > per_capita_carta_dois ? 0 : 1;
            }
            break;
        default:
            printf("Numero invalido");
            break;
        }
    }

    // Aqui começa a comparação da variavel duelo_atributo_um e duelo_atributo_dois, caso o valor seja 2 sei que deu empate, 
    // caso seja 0 a carta 1 ganha caso seja 1 a carta 2 ganha. No ternario a comparação e por 0 pela logica se não for nem 0 ela tem que ser outro numero no caso 1.
    printf("-------- DUELO DO PRIMEIRO ATRIBUTO -----------\n");
    switch (opcao_um)
    {
    case 1:
        printf("Duelo de - POPULAÇÂO - \n");
        printf("Carta 01 - %s - População: %lu \nCarta 02 - %s - População: %lu \n", nome_carta_um, populacao_carta_um, nome_carta_dois, populacao_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 2:
        printf("Duelo de - ÁREA - \n");
        printf("Carta 01 - %s - Area: %.2f \nCarta 02 - %s - Area: %.2f\n", nome_carta_um, area_carta_um, nome_carta_dois, area_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 3:
        printf("Duelo de - PIB - \n");
        printf("Carta 01 - %s - Pib: %.2f \nCarta 02 - %s - Pib: %.2f \n", nome_carta_um, pib_carta_um, nome_carta_dois, pib_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 4:
        printf("Duelo de - PONTOS TÚRISTICOS - \n");
        printf("Carta 01 - %s - Pontos Túristicos: %d \nCarta 02 - %s - Pontos Túristicos: %d\n", nome_carta_um, pontos_turisticos_carta_um, nome_carta_dois, pontos_turisticos_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 5:
        printf("Duelo de - DENSIDADE DEMOGRÁFICA - \n");
        printf("Carta 01 - %s - Densidade: %.2f \nCarta 02 - %s - Densidade: %.2f\n", nome_carta_um, densidade_carta_um, nome_carta_dois, densidade_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 6:
        printf("Duelo de - RENDA PER CAPITA - \n");
        printf("Carta 01 - %s - Renda per capita: %.2f \nCarta 02 - %s - Renda per capita: %.2f\n", nome_carta_um, per_capita_carta_um, nome_carta_dois, per_capita_carta_dois);
        if (duelo_atributo_um == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_um == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    default:
        break;
    }

    printf("-------- DUELO DO SEGUNDO ATRIBUTO -----------\n");
    switch (opcao_dois)
    {
    case 1:
        printf("Duelo de - POPULAÇÃO - \n");
        printf("Carta 01 - %s - População: %lu \nCarta 02 - %s - População: %lu\n", nome_carta_um, populacao_carta_um, nome_carta_dois, populacao_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 2:
        printf("Duelo de - ÁREA - \n");
        printf("Carta 01 - %s - Area: %.2f \nCarta 02 - %s - Area: %.2f\n", nome_carta_um, area_carta_um, nome_carta_dois, area_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 3:
        printf("Duelo de - PIB - \n");
        printf("Carta 01 - %s - Pib: %.2f \nCarta 02 - %s - Pib: %.2f\n", nome_carta_um, pib_carta_um, nome_carta_dois, pib_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 4:
        printf("Duelo de - PONTOS TÚRISTICOS - \n");
        printf("Carta 01 - %s - Pontos Túristicos: %d \nCarta 02 - %s - Pontos Túristicos: %d\n", nome_carta_um, pontos_turisticos_carta_um, nome_carta_dois, pontos_turisticos_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 5:
        printf("Duelo de - DENSIDADE DEMOGRÁFICA - \n");
        printf("Carta 01 - %s - Densidade: %.2f \nCarta 02 - %s - Densidade: %.2f\n", nome_carta_um, densidade_carta_um, nome_carta_dois, densidade_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    case 6:
        printf("Duelo de - RENDA PER CAPITA - \n");
        printf("Carta 01 - %s - Renda per capita: %.2f \nCarta 02 - %s - Renda per capita: %.2f\n", nome_carta_um, per_capita_carta_um, nome_carta_dois, per_capita_carta_dois);
        if (duelo_atributo_dois == 2)
        {
            printf("Empate entre as cartas\n");
        }
        else
        {
            duelo_atributo_dois == 0 ? printf("Carta 01 venceu\n") : printf("Carta 02 venceu\n");
        }
        break;
    default:
        break;
    }
}