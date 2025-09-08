#include <stdio.h>
#include <string.h>

/*Challenge 3 : Concaténation de Chaînes
Écrivez un programme C qui lit deux chaînes de caractères et les concatène en une seule chaîne. Affichez la chaîne résultante.*/

int main(){

    char name1[40];
    char name2[40];
    char mix[100];
    printf("enter first name: ");
    scanf(" %[^\n]s", &name1);
    printf("enter last name: ");
    scanf(" %[^\n]s", &name2);
    
    strcat(name1,name2);
    
    printf("full name: %s", name1);




    return 0;
}