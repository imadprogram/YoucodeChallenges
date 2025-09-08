#include <stdio.h>
/*Challenge 1 : Affichage d'une Chaîne
Écrivez un programme C qui lit une chaîne de caractères entrée par l'utilisateur et l'affiche à l'écran.*/

int main(){

    char chaine[100];
    printf("entrer un nom: ");
    scanf(" %[^\n]s", &chaine);
    
    printf("%s", chaine);


    return 0;
}