// Nome: Guilherme Silva Machado
// Matrícula: 202422632
// Turma: CC1N
// Email: guilhermemachado019@gmail.com

#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &n);

    if (n < 1 || n > 99)
    {
        printf("Você quer a tabuada de qual número? ");
        return 1;
    }
    else
    {
        for (int i = 0; i <= 10; i++)
        {
            printf("%d x %d = %d\n", n, i, n * i);
        }
        return 0;
    }
}
