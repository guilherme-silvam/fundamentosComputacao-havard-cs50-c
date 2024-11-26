/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Guilherme Silva Machado
 *    Matrícula: 202422632
 *    Turma: CC1N
 *    Email:  guilhermemachado019@gmail.com
 *
 * DECLARAÇÃO DE HONESTIDADE ACADÊMICA:
 * Eu afirmo que o código abaixo foi de minha autoria. Também afirmo que não
 * pratiquei nenhuma forma de "cola" ou "plágio" na elaboração do programa,
 * e que não violei nenhuma das normas de integridade acadêmica da disciplina.
 * Estou ciente de que todo código enviado será verificado automaticamente
 * contra plágio e que caso eu tenha praticado qualquer atividade proibida
 * conforme as normas da disciplina, estou sujeito à penalidades conforme
 * definidas pelo professor da disciplina e/ou instituição.
 */


/**
 * Inclusão de bibliotecas:
 */

#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

bool primos(int n);

/**
 * Função main:
 */
int main(void)
{
    int menor;
    do
    {
        menor = get_int("Menor número: ");
    }
    while (menor < 1);

    int maior;
    do
    {
        maior = get_int("Maior número: ");
    }
    while (maior <= menor || maior > 100);

    // TODO: escreva aqui o código para imprimir todos os números primos dentro
    // da faixa especificada pelo usuário. Pode ser útil utilizar dois loops (um
    // dentro do outro) e algumas estruturas condicionais. O operador módulo
    // também pode ser útil!

    for (int j = menor; j <= maior; j++)
    {
        if (primos(j))
        {
            printf("%d\n", j);
        }
    }

    // Finaliza o programa:
    return 0;
}

bool primos(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
