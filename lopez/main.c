#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int edad;
    float altura;
    char sexo;
    char seguir = 's';
    int edadMujerMasVieja;
    float alturaMujerMasVieja;
    int minimaEdad;
    float alturaPersonaMasJoven;
    int flagPersonaJoven=0;
    int flagVieja=0;
    int edadHombreMasBajo;
    float minimaAltura;
    int flagPetiso=0;
    int acumuladorDeEdades=0;
    int contadorPersonas=0;
    float promedioEdades;







    do
    {
        printf("Ingrese la edad : ");
        scanf("%d",&edad);
        while(edad<0 || edad>100)
        {
            printf("reingrese la edad: ");
            scanf("%d",&edad);
        }
        printf("ingrese la altura: ");
        scanf("%f",&altura);
        while(altura<1 || altura>2)
        {
            printf("Reingrese la altura: ");
            scanf("%f",&altura);
        }
        printf("ingrese el sexo: ");
        fflush(stdin);
        scanf("%c",&sexo);


        while(sexo!='f' && sexo!='m')
        {
            printf("\nReingrese el sexo: ");
            sexo=tolower(getche());
        }

        //altura de la mujer mas vieja
        if(sexo=='f')
        {
            if(flagVieja==0 || edad>edadMujerMasVieja)
            {
                edadMujerMasVieja=edad;
                alturaMujerMasVieja=altura;
                flagVieja=1;
            }

        }
        else  //edad del hombre mas bajo
        {
            if(flagPetiso==0 || altura<minimaAltura)
            {
                minimaAltura=altura;
                edadHombreMasBajo=edad;
                flagPetiso=1;
            }
        }
        //altura de la persona mas joven

        if(flagPersonaJoven==0 || edad<minimaEdad)
        {
            minimaEdad=edad;
            alturaPersonaMasJoven=altura;
            flagPersonaJoven=1;
        }

        //sexo de la persona mas alta (if (flagpersonajoven==0 || altura<...

        //promedio de edades

        contadorPersonas++;
        acumuladorDeEdades=acumuladorDeEdades + edad; //acumuladorDeEdades+=edad;


        printf("\nDesea continuar? s/n");
        fflush(stdin);
        scanf("%c",&seguir);
        // o en vez del scanf ,se puede usar getche o getch para no usar fflush
        //seguir=getche();


    }
    while(seguir=='s');
    promedioEdades=(float)acumuladorDeEdades/contadorPersonas;//el acumulador se transforma en un flotante(para que me de numeros con coma)

    printf("La altura de la mujer mas vieja es: %f\n",alturaMujerMasVieja);
    printf("La altura de la persona mas joven es: %f\n",alturaPersonaMasJoven);
    printf("La edad del hombre mas bajo es: %d\n",edadHombreMasBajo);
    printf("El promedio es: %f\n",promedioEdades);

    return 0;
}
