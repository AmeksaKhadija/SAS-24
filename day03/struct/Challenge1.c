#include <stdio.h>
#include <string.h>

struct Personne {
    char nom[50];
    char prenom[50];
    int age;
};

int main() {
    struct Personne p;

    strcpy(p.nom, "ameksa");
    strcpy(p.prenom, "khadija");
    p.age = 19;


    printf("Nom : %s\n", p.nom);
    printf("Pr�nom : %s\n", p.prenom);
    printf("�ge : %d\n", p.age);

    return 0;
}
