#include <stdio.h>

// Função para calcular desidade populacional e o PIB per Capita
double funcaoDivisao(double num1, double num2) {
    return (num1 / num2); // Divide os valores entre si
}

// Função para devolver o valor inverso de Densidade Populacional
double inverso(double num) {
    return (1.0 / num); // Divide 1 pelo valor
}

int main() {

    //Variável para o menu de atributos
    int menu;

    //Variáveis responsáveis por guardar as informação das cidades da primeira e segunda carta.
    char estado[60], cod_card[60], name_city[60], moeda[20];
    int turistic_points;
   unsigned long int populacao;
    double area_km, PIB, densidade_populacional, PIB_per_capita, inver;

    char estado2[60], cod_card2[60], name_city2[60], moeda2[20];
    int turistic_points2;
   unsigned long int populacao2;
    double area_km2, PIB2, densidade_populacional2, PIB_per_capita2, inver2;

    //Pedido e leitura das informações do usuário da primeira carta.
    printf("Bem-vindo(a) ao jogo Super-Trunfo de países. Para começar a jogar peço, por favor, que digite o estado que quer cadastar a primeira carta. \n");
    scanf("%s", estado);

    printf("Agora peço que digite o codigo da carta, deve ter a inicial do estado seguido do número. ex: S01. \n");
    scanf("%s", cod_card);

    printf("Digite o nome da cidade escolhida: \n");
    scanf("%s", name_city);

    printf("Ótimo! Vamos adicionar alguns valores. Digite o número da população: \n");
    scanf("%lu", &populacao);

    printf("Agora o número de pontos turísticos: \n");
    scanf("%d", &turistic_points);

    printf("Qual a área em Km²? \n");
    scanf("%lf", &area_km);

    printf("E o PIB da cidade? \n");
    scanf("%lf", &PIB);

    printf ("Qual o tipo da moeda? Ex: Reais, Dolares, etc... \n");
    scanf("%s", moeda);

    //Pedido e leitura das informações do usuário da segunda carta.

    printf("Muito bem! Agora vamos para a segunda carta, o sistema é o mesmo. \n");

    printf("Digite o estado da segunda carta. \n");
    scanf("%s", estado2);

    printf("Digite o codigo carta \n");
    scanf("%s", cod_card2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", name_city2);

    printf("Digite o número da população: \n");
    scanf("%lu", &populacao2);

    printf("Número de pontos turísticos: \n");
    scanf("%d", &turistic_points2);

    printf("Área em Km²: \n");
    scanf("%lf", &area_km2);

    printf("PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf ("Qual o tipo da moeda? \n");
    scanf("%s", moeda);

    //Devolução das informações bem organizadas de cada carta indicando qual é qual pelo codigo seguido das informações de cada uma.
    printf("\nEssas são as cartas cadastradas\n\n");
    printf("Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %lu\nNúmero de pontos turísticos: %d\nÁrea em Km²: %.2f\nPIB: %.2f %s\n", cod_card, estado, name_city, populacao, turistic_points, area_km, PIB, moeda);
    // Chamando a função e armazenando o resultado
    densidade_populacional = (double) funcaoDivisao(populacao, area_km);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional);
    PIB_per_capita = (double) funcaoDivisao(PIB, populacao);
    printf("PIB per Capita: %.2f %s\n", PIB_per_capita, moeda);
    inver = inverso(densidade_populacional);
    double SuperPower = (double) populacao + area_km + PIB + PIB_per_capita + inver;
    printf("Valor do Super Poder: %f\n\n", SuperPower);

    printf("Carta: %s\nEstado: %s\nCidade: %s\nPopulação: %lu\nNúmero de pontos turísticos: %d\nÁrea em Km²: %.2f\nPIB: %.2f %s\n", cod_card2, estado2, name_city2, populacao2, turistic_points2, area_km2, PIB2, moeda2);
    // Chamando a função e armazenando o resultado
    densidade_populacional2 = (double) funcaoDivisao(populacao2, area_km2);
    printf("Densidade Populacional: %.2f Hab/Km²\n", densidade_populacional2);
    PIB_per_capita2 = (double) funcaoDivisao(PIB2, populacao2);
    printf("PIB per Capita: %.2f %s\n", PIB_per_capita2, moeda2);
    inver2 = inverso(densidade_populacional2);
    double SuperPower2 = (double) populacao2 + area_km2 + PIB2 + PIB_per_capita2 + inver2;
    printf("Valor do Super Poder: %f\n\n", SuperPower2);

    //Menu de atributos para o usuário escolher qual comparar
    printf("\n=== MENU DE ATRIBUTOS ===\n");
    printf("Escolha o atributo que deseja comparar:\n");
    printf("1. População\n");
    printf("2. Área Km²\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("-> ");
    scanf("%d", &menu);

    //Comparação da escolha do usuário
    switch (menu) {
        case 1:
            if (populacao > populacao2) {
                printf("Venceu em população: (%s)\n", cod_card);
            } else {
                printf("Venceu em população: (%s)\n", cod_card2);
            }
            break;
        case 2:
            if (area_km > area_km2) {
                printf("Venceu em Área Km²: (%s)\n", cod_card);
            } else {
                printf("Venceu em Área Km²: (%s)\n", cod_card2);
            }
            break;
        case 3:
            if (PIB > PIB2) {
                printf("Venceu em PIB: (%s)\n", cod_card);
            } else {
                printf("Venceu em PIB: (%s)\n", cod_card2);
            }
            break;
        case 4:
            if (turistic_points > turistic_points2) {
                printf("Venceu em Pontos Turísticos: (%s)\n", cod_card);
            } else {
                printf("Venceu em Pontos Turísticos: (%s)\n", cod_card2);
            }
            break;
        case 5:
            if (densidade_populacional < densidade_populacional2) {
                printf("Venceu em Densidade Populacional: (%s)\n", cod_card);
            } else {
                printf("Venceu em Densidade Populacional: (%s)\n", cod_card2);
            }
            break;
        case 6:
            if (PIB_per_capita > PIB_per_capita2) {
                printf("Venceu em PIB per Capita: (%s)\n", cod_card);
            } else {
                printf("Venceu em PIB per Capita: (%s)\n", cod_card2);
            }
            break;
        case 7:
            if (SuperPower > SuperPower2) {
                printf("Venceu em Super Poder: (%s)\n", cod_card);
            } else {
                printf("Venceu em Super Poder: (%s)\n", cod_card2);
            }
            break;
        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}