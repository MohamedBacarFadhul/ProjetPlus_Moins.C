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
        int NIVEAU_FACILE;
        int NIVEAU_MOYEN=25;
        int NIVEAU_DIFFICILE=10;
        int i=0;
        int niveau;
        printf("********* BIENVENUE DANS LE JEU PLUS OU MOINS *******\n\n");
        printf("########## VEILLEZ CHOISIR UN NIVEAU ##########\n\n");
        printf("1. NIVEAU FACILE\n\n");
        printf("2. NIVEAU MOYEN\n\n");
        printf("3. NIVEAU DIFFICILE\n\n");
        printf("VOTRE CHOIX:");
        scanf("%d",&niveau);

        switch(niveau)
        {
        case 1:
                  if(a!=b)
                   {
                       while(a!=b)
                        {
                        printf("VEILLEZ CHOISIR UN NOMBRE ENTRE 1 ET 100 :\n");
                        scanf("%d",&b);
                        plus_moins(a,b);
                        }
                         if(a==b)
                        printf("\n");break;

                   }


        case 2:

                for(int i=0; i<=NIVEAU_DIFFICILE;i++)

                {
                        printf("VEILLEZ CHOISIR UN NOMBRE ENTRE 1 ET 100 :\n");
                        scanf("%d",&b);
                        plus_moins(a,b);
                        if(i==NIVEAU_MOYEN)
                        {
                            printf(" PERDUE ! VOUS AVEZ EPUSER TOUS VOS ESSAI ,VOUS AVEZ PERDU !\n");
                            printf("LA BONNE REPONSE ETAIT : %d",a);
                            printf("\n");break;
                        }

                }

        default:

                for(int j=0; j<=NIVEAU_DIFFICILE;j++)

                {       printf("VEILLEZ CHOISIR UN NOMBRE ENTRE 1 ET 100 :\n");
                        scanf("%d",&b);
                        plus_moins(a,b);
                        if(j==NIVEAU_DIFFICILE)
                        {
                            printf(" PERDUE ! VOUS AVEZ EPUSER TOUS VOS ESSAI ,VOUS AVEZ PERDU !\n");
                            printf("LA BONNE REPONSE ETAIT : %d",a);
                            printf("\n");break;
                        }

                }

        }

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
