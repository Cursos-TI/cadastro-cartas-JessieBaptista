// == CARTA 1 ==
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos1;

// == CARTA 2 ==
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos2;

// Variaveis de calculo
float densidade1, pibPerCapita1;
float densidade2, pibPerCapita2;
float superPoder1, superPoder2;

  // Área para entrada de dados
printf("Cadastro da carta 1\n");

printf("Estado (A a H): ");
scanf(" %c", &estado1);

printf("Codigo da carta (ex:A01): ");
scanf("%s", codigo1);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area (km2): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos1);

printf("\nCadastro da Carta 2\n");

printf("Estado (A a H): ");
scanf(" %c", &estado2);

printf("Codigo da Carta (ex: B02): ");
scanf("%s", codigo2);

printf("Nome da Cidade: ");
scanf(" %[^\n]", cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area (km2): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontos2);

// --- Cálculos ---
densidade1 = populacao1 / area1;
pibPerCapita1 = pib1 / populacao1;

densidade2 = populacao2 / area2;
pibPerCapita2 = pib2 / populacao2;

superPoder1 = (float)populacao1 + area1 + pib1 + pontos1 + pibPerCapita1 + (1.0 / densidade1);
superPoder2 = (float)populacao2 + area2 + pib2 + pontos2 + pibPerCapita2 + (1.0 / densidade2);

// Área para exibição dos dados da cidade
printf("\n===== CARTAS CADASTRADAS =====\n");

printf("\nCarta 1\n");
printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
printf("PIB per Capita: %.2f\n", pibPerCapita1);
printf("Super Poder: %.2f\n", superPoder1);

printf("\nCarta 2\n");
printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
printf("PIB per Capita: %.2f\n", pibPerCapita2);
printf("Super Poder: %.2f\n", superPoder2);

// == COMPARACOES ==
printf("\n== COMPARACAO DAS CARTAS ==\n");

printf("Populacao: %s\n", populacao1 > populacao2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Area: %s\n", area1 > area2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB: %s\n", pib1 > pib2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Pontos Turisticos: %s\n", pontos1 > pontos2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("PIB per Capita: %s\n", pibPerCapita1 > pibPerCapita2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Densidade Populacional: %s\n", densidade1 < densidade2 ? "Carta 1 venceu" : "Carta 2 venceu");
printf("Super Poder: %s\n", superPoder1 > superPoder2 ? "Carta 1 venceu" : "Carta 2 venceu");

return 0;
} 
