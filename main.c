#include <stdio.h>

#define Ex85

#ifdef Ex81
/*
1 - Receba 2 string de ate 10 caracteres via teclado na funcao main(). Faça uma
    funcao para compara-las usando ponteiros e retorne como resultado se
    sao IGUAIS 1 ou se sao DIFERENTES 0 para a funcao main().
    Imprima o resultado na funcao main(). Declare os vetores como variavel global
    */

char str1[11];
char str2[11];


int comparaString() {
    char *string1, *string2;
    string1 = &str1[0];
    string2 = &str2[0];

    for (; *string1 != '\0' && *string2 != '\0';) {
        string1++;
        string2++;

        if (*string1 != *string2) {
            return 0;
        }
    }
    return 1;
}



    int main() {
        printf("Digite a primeira string: \n");
        scanf("%s", &str1);

        printf("Digite a segunda string: \n");
        scanf("%s", &str2);

        if (comparaString() == 1) {
            printf("As strings sao iguais \n");
        } else {
            printf("As strings sao diferentes \n");
        }

        printf("\nDigite X para sair  \n");
        char saida;
        while (saida != 'X' && saida != 'x') {
            scanf(" %c", &saida);

            if (saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
            }
        }
        return 0;

    }



#endif


#ifdef Ex82

char caracteres[] = {'b', 'd', 'f', 'h', 'j', 'k', 'm', 'o', 'q', 's', 'u', 'w', 'y'};

int pesquisaCaractere(char *pCaractere)
{
    char *pCaracteresArray;
    pCaracteresArray = &caracteres[0];

    for (int i = 0; *pCaracteresArray != '\0'; i++, pCaracteresArray++)
    {
        if (*pCaractere == *pCaracteresArray)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    char caractere;
    char *pCaractere;

    pCaractere = &caractere;

    printf("Digite um caractere: \n");
    scanf(" %c", pCaractere);

    int resultado = pesquisaCaractere(pCaractere);

    if (resultado == 1)
    {
        printf("O caractere foi encontrado!");
    }
    else
    {
        printf("O caractere nao foi encontrado!");
    }


    return 0;
}

#endif // Ex82

#ifdef Ex83
int main()
{
int valorInt, *pValorInt;
    long valorLong, *pValorLong;
    unsigned valorUnsigned, *pValorUnsigned;
    float valorFloat, *pValorFloat;
    double valorDouble, *pValorDouble;
    char valorChar, *pValorChar;
    unsigned long valorUnsignedLong, *pValorUnsignedLong;
    unsigned char valorUnsignedChar, *pValorUnsignedChar;

    pValorInt = &valorInt;
    pValorLong = &valorLong;
    pValorUnsigned = &valorUnsigned;
    pValorFloat = &valorFloat;
    pValorDouble = &valorDouble;
    pValorChar = &valorChar;
    pValorUnsignedLong = &valorUnsignedLong;
    pValorUnsignedChar = &valorUnsignedChar;



    printf("Digite um valor inteiro: ");
    scanf("%d", pValorInt);

    printf("Digite um valor longo: ");
    scanf("%ld", pValorLong);

    printf("Digite um valor unsigned: ");
    scanf("%u", pValorUnsigned);

    printf("Digite um valor de ponto flutuante: ");
    scanf("%f", pValorFloat);

    printf("Digite um valor double: ");
    scanf("%lf", pValorDouble);

    printf("Digite um caractere: ");
    scanf(" %c", pValorChar);  // Note o espaço antes do %c para consumir a quebra de linha anterior

    printf("Digite um valor unsigned long: ");
    scanf("%lu", pValorUnsignedLong);

    printf("Digite um valor unsigned char: ");
    scanf(" %c", pValorUnsignedChar);

    printf("\n123456789012345678901234567890123456789012345678901234567890\n");
    printf("    %-8d            %-11ld         %-8d \n", valorInt, valorLong, valorUnsigned);
    printf("              %-8.1f            %-8.2f                %-1c\n", valorFloat, valorDouble, valorChar);
    printf("         %-11lu                   %-1c\n", valorUnsignedLong, valorUnsignedChar);

    printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x') {
        scanf(" %c", &saida);
        }



    return 0;
    }

#endif

#ifdef Ex84

int main()
{
    int numero, *pNumero, soma = 0, *pSoma, contador = 0;
    pNumero = &numero;
    pSoma = &soma;

    do
    {
        printf("Digite um numero inteiro positivo (digite um negativo para encerrar):\n");
        scanf("%d", pNumero);

        if (*pNumero >= 0)
        {
            contador++;
            *pSoma += *pNumero;
        }
        else
        {
            printf("Numero negativo digitado, encerrando o loop...\n");
        }
    } while (*pNumero >= 0);

    if (contador > 0)
    {
        printf("A media dos valores digitados e: %lf", (double)soma / contador);
    }
    else
    {
        printf("Nenhum valor positivo foi digitado.");
    }

    return 0;
}
#endif

#ifdef Ex85

struct Pessoa {
    char nome[20];
    char endereco[25];
    char cidade[15];
    char estado[18];
    char cep[12];
};

typedef struct Pessoa Individuo;

Individuo registros[4];
Individuo *pRegistros = &registros[0];

void exibirRegistros() {
    int i;

    for (i = 0; i < 4; i++) {
        printf("\nDados da pessoa %d:\n", i + 1);
        printf("Nome: %s\n", (pRegistros + i)->nome);
        printf("Endereco: %s\n", (pRegistros + i)->endereco);
        printf("Cidade: %s\n", (pRegistros + i)->cidade);
        printf("Estado: %s\n", (pRegistros + i)->estado);
        printf("CEP: %s\n", (pRegistros + i)->cep);
        printf("-------------------------------\n");
    }
}

void cadastrarPessoas() {
    int i;

    for (i = 0; i < 4; i++) {
        printf("Digite o nome da pessoa %d:\n", i + 1);
        gets((pRegistros + i)->nome);
        printf("Digite o endereco da pessoa %d:\n", i + 1);
        gets((pRegistros + i)->endereco);
        printf("Digite a cidade da pessoa %d:\n", i + 1);
        gets((pRegistros + i)->cidade);
        printf("Digite o estado da pessoa %d:\n", i + 1);
        gets((pRegistros + i)->estado);
        printf("Digite o CEP da pessoa %d:\n", i + 1);
        gets((pRegistros + i)->cep);
        printf("-------------------------------\n");
    }
}

int main() {
    cadastrarPessoas();
    exibirRegistros();

    return 0;
}

#endif

#ifdef Ex86

#include <stdio.h>

struct Data
{
    int dia, mes, ano;
};

typedef struct Data Datas;

int calcularDiferencaDias(Datas *calendarios)
{
    int diasPorMes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dias1 = calendarios[0].dia;
    int dias2 = calendarios[1].dia;

    for (int i = 0; i < calendarios[0].mes; i++)
    {
        dias1 += diasPorMes[i];
    }

    for (int i = 0; i < calendarios[1].mes; i++)
    {
        dias2 += diasPorMes[i];
    }

    for (int ano = calendarios[0].ano; ano < calendarios[1].ano; ano++)
    {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0))
        {
            dias2 += 366;
        }
        else
        {
            dias2 += 365;
        }
    }

    return dias2 - dias1;
}

int main()
{
    Datas *pCalendarios;
    Datas calendariosFunc[2];

    pCalendarios = &calendariosFunc[0];

    char resposta;

    do
    {
        printf("Digite a primeira data (dd MM AAAA): ");
        scanf("%d %d %d", &(pCalendarios + 0)->dia, &(pCalendarios + 0)->mes, &(pCalendarios + 0)->ano);

        printf("Digite a segunda data (dd MM AAAA): ");
        scanf("%d %d %d", &(pCalendarios + 1)->dia, &(pCalendarios + 1)->mes, &(pCalendarios + 1)->ano);

        int diferencaDias = calcularDiferencaDias(pCalendarios);

        if (diferencaDias > 0)
        {
            printf("A diferenca entre as datas e de: %d dias\n", diferencaDias);
        }
        else if (diferencaDias == 0)
        {
            printf("As datas sao iguais!\n");
        }
        else
        {
            printf("A segunda data deve ser maior que a primeira.\n");
        }

        printf("Deseja encerrar o programa? (s/n): ");
        scanf(" %c", &resposta);
    } while (resposta != 's' && resposta != 'S');

    return 0;
}


#endif