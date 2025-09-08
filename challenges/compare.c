#include <stdio.h>
#include <string.h>


int main(){

char name1[40];
    char name2[40];
    printf("enter first name: ");
    scanf(" %[^\n]s", &name1);
    printf("enter last name: ");
    scanf(" %[^\n]s", &name2);
    
    if (strlen(name1) == strlen(name2))
    {
        printf("they are the same");
    }else{
        printf("they are NOT the same");
    }
    
    
    



    return 0;
}