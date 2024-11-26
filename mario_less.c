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

 int main(void)
 {
    int altura;

    // Solicitar a altura da piramide

    do
    {
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);

    // Constroi a piramide
    for (int i = 1; i <= altura; i++)
    {
        // Imprime os espaços antes das #
        for (int j = 0; j < altura - i; j++)
        {
            printf(" ");
        }

        // Imprime o #
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        //Pula para próxima linha
        printf("\n");
    }
 }