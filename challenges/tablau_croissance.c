#include <stdio.h>

/* Écrivez un programme C qui demande à l'utilisateur
de saisir un tableau d'entiers, puis affiche le tableau trié
 en ordre croissant sans utiliser de fonction de tri prédéfinie. */

int main()
{

    int elements;
    printf("enter number of elements: ");
    scanf("%d", &elements);
    int numbers[elements];

    for (int i = 0; i < elements; i++)
    {
        printf("enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < elements-1; i++)
    {
        for (int j = 0; j < elements-i-1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j + 1]=temp;
            }
        }
    }
    for (int i = 0; i < elements; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}