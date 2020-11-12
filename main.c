#include <stdio.h>
#include <ctype.h>

void saisie();
void verification();
void test();
char devinette='8';  //attention char pour le bon fonctionnement de isdigit
char saisieu=' ';
int main() {
    while(devinette!=saisieu) { //boucle infinie
        saisie();
        verification();
        test();
    }
    return 0;
}

void saisie()
{
    printf("Veuillez saisir un nombre entre 1 et 9\n");
    scanf(" %c",&saisieu); //mettre un espace avant le % car appels successifs
}

void verification()
{
    if(!isdigit(saisieu)) //si le saisie contient un caractere
    {
        printf("Le nombre n'est pas numérique\n");


    }
}
void test()
{
    if(devinette==saisieu) //si le saisie est égale à la devinette
    {
        printf("Vous avez gagné");
    }
    else
    {
        printf("Vous n'avez pas trouvé le nombre\n");

    }
}
