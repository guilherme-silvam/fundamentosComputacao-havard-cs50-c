/**
 * IDENTIFICAÇÃO DO ESTUDANTE:
 * Preencha seus dados e leia a declaração de honestidade abaixo. NÃO APAGUE
 * nenhuma linha deste comentário de seu código!
 *
 *    Nome completo: Guilherme Silva Machado
 *    Matrícula: 202422632
 *    Turma: CC1N
 *    Email: guilhermemachado019@gmail.com
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
#include <stdio.h>

/**
 * Função main
 */
int main(void)
{
    // Solicita o valor da comida:
    float n = get_float("Valor da comida: ");
    while (n < 10.00 || n > 999.99)
    {
        n = get_float("Valor da comida: ");
    }
    // Solicita o percentual de gorjeta:
    float i = get_float("Porcentagem da gorteja: ");
    while (i < 0.00 || i > 100.00)
    {
        // Solicita o percentual de impostos:
        i = get_float("Porcentagem de impostos: ");
    }
    int g = get_int("Porcentagem de impostos: ");
    while (g < 0 || g > 100)
    {
        g = get_int("Porcentagem da gorjeta: ");
    }

    float totalimposto = n + (n * i * 0.01);
    float totalgorjeta = totalimposto + (totalimposto * g * 0.01);
    float totalpessoa = totalgorjeta / 2;

    if (n >= 10.00 || n <= 999.99)
    {
        printf("Cada um pagará R$ %0.2f!\n", totalpessoa);
    }
    // Termina o programa:
    return 0;
}