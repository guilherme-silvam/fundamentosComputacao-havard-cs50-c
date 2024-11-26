// Nome: Guilherme Silva Machado
// Matrícula: 202422632
// Turma: CC1N
// Email: guilhermemachado019@gmail.com

#include <stdio.h>

int main()
{
    int n, i, f;
    printf("Você quer a tabuada de qual número? ");
    scanf("%d", &n);
    if(n < 1 || n > 99)
    {
        printf("Você quer a tabuada de qual número? ");
        return 1;
    }

    printf("Você quer começar a tabuada em qual número? ");
    scanf("%d", &i);
    if(i < 0 || i > 10)
    {
        printf("Você quer começar a tabuada em qual número? ");
        return 1;
    }

    printf("Você quer terminar a tabuada em qual número? ");
    scanf("%d", &f);
    if(f < i || f > 10)
    {
        printf("Você quer terminar a tabuada em qual número? ");
        return 1;
    }

    for(int t = n; i <= f; i++ )
    {
        printf("%d x %d = %d\n", t, i, i * t);
    }

    return 0;
}
