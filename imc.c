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

#include <stdio.h>

float get_float(const char *prompt)
{
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    return value;
}

int main(void)
{
    float peso = get_float("Informe seu peso (kg): ");

    while (peso < 40.00 || peso > 200.00)
    {
        peso = get_float("Peso inválido. Informe seu peso (Kg):");
    }

    float altura = get_float("Informe sua altura (m): ");

    while (altura < 1.40 || altura > 2.50)
    {
        altura = get_float("Altura inválido. Informe sua altura (m):");
    }

    float imc = peso / (altura * altura);
    printf("IMC: %0.2f; ", imc);

    if (imc < 16.00)
    {
        printf("Classificação: Magreza grau III.\n");
    }
    else if (imc >= 16.00 && imc < 17.00)
    {
        printf("Classificação: Magreza grau II.\n");
    }
    else if (imc >= 17.00 && imc < 18.50)
    {
        printf("Classificação: Magreza grau I.\n");
    }
    else if (imc >= 18.50 && imc < 25.00)
    {
        printf("Classificação: Peso adequado.\n");
    }
    else if (imc >= 25.00 && imc < 30.00)
    {
        printf("Classificação: Pré-obeso.\n");
    }
    else if (imc >= 30.00 && imc < 35.00)
    {
        printf("Classificação: Obesidade grau I.\n");
    }
    else if (imc >= 35.00 && imc < 40.00)
    {
        printf("Classificação: Obesidade grau II.\n");
    }
    else
    {
        printf("Classificação: Obesidade grau III.\n");
    }

    return 0;
}
