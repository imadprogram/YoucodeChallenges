#include <stdio.h>
#include <string.h>

/*Challenge 2 : Longueur de la Chaîne
Écrivez un programme C qui calcule et affiche la longueur d'une chaîne de caractères sans utiliser la fonction strlen().*/


int main(){

    char chaine[100];
    printf("entrer un nom: ");
    scanf(" %[^\n]s", &chaine);
    
    printf("%d", strlen(chaine));



    return 0;
}