#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre=0;

    int nombre_aleatoire=0;
    int a=1, b=10, i=0;

	srand(time(NULL)); // initialisation de rand

		nombre_aleatoire = rand_a_b(a, b);
		printf("%d :", nombre_aleatoire);
		for (i=0; i<3; i++)
		{
		printf("saisie le nombre  : ");
		scanf("%d", &nombre);
            if (nombre_aleatoire== nombre)
            {
            printf("Gagner !!! \n");

            }
            if (nombre_aleatoire > nombre)
            {
            printf("nombre aleatoire superieur au nobmre saisie \n");

            }
            if (nombre_aleatoire < nombre)
            {
            printf("nombre aleatoire inférieur au nobmre saisie \n");

            }

		}











  /*  printf( "Entrer un nombre : ");
    scanf("%d", &nombre);
    if (nombre >= 0 && nombre <= 10)
    {
        if (nombre<5)
        {
        printf("trop bas");
        }
        if (nombre>5)
        {
        printf("trop grand");

        }
        if (nombre==5)
        printf("c'est bon");

    }*/


    return 0;
}

int rand_a_b(int a, int b){
    return rand()%(b-a) +a;
    }
