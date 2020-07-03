#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void plus_moins(int valeur_a_trouver,int choix_joueur);
int main()
{
const int VALEUR_MAX=100,VALEUR_MIN=1;
srand(time(NULL));
int valeur_a_trouver=(rand()%(VALEUR_MAX-VALEUR_MIN+1));
int choix_joueur;
int a=valeur_a_trouver;
int b=choix_joueur;
do
{
printf("VEILLEZ CHOISIR UN NOMBRE ENTRE 1 ET 100 :\n");
scanf("%d",&b);
plus_moins(a,b);

}
 while(a!=choix_joueur);

    return 0;
}

 void plus_moins(int valeur_a_trouver,int choix_joueur)
{

        if(valeur_a_trouver>choix_joueur)
        {
            printf("C'est moins !\n");
        }

        else if(valeur_a_trouver<choix_joueur)
        {
            printf("C'est plus !\n");
        }

        else

        {
            printf("Bingo ! , vous avez trouver\n");
        }


}
