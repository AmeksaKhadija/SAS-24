#include <stdio.h>

int main()
{
    // Write C code here
    char nom[20];
    char prenom[20];
    int age;
    char sexe;
    char email[50];

    printf("entrer vote sexe(F/M) :");
    scanf(" %c",&sexe);
    printf("entrer votre nom :");
    scanf("%s",nom);
    printf("entrer votre prenom :");
    scanf("%s",prenom);
    printf("entrer votre age :");
    scanf("%d",&age);
    printf("entrer votre email :");
    scanf("%s",email);

    printf("mes info est : \n");
    printf("Nom : %s\n",nom);
    printf("prenom : %s\n",prenom);
    printf("age : %d\n",age);
    printf("Sexe : %c\n",sexe);
    printf("Email : %s\n",email);
    return 0;
}
