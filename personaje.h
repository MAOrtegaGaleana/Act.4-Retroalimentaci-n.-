#ifndef PERSONAJE_H
#define PERSONAJE_H 

#include<stdio.h>

struct personaje
{
    char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
}personajes[5];

unsigned int cont=0;

void capturar_personajes()
{
    if(cont<5){
        printf("Nombre: ");
        fflush(stdin);
        scanf("%s",personajes[cont].nombre);
        printf("Tipo: ");
        fflush(stdin);
        scanf("%s",personajes[cont].tipo);
        printf("Fuerza: ");
        scanf("%f",&personajes[cont].fuerza);
        printf("Salud: ");
        scanf("%i",&personajes[cont].salud);
        cont++;
    }
    else{
        printf("El arreglo de personajes esta lleno\n");
    }
}

void mostrar_personajes(){
    for (size_t i = 0; i < cont; i++)
    {
        printf("\nNombre: %s\n",personajes[i].nombre);
        printf("Tipo: %s\n",personajes[i].tipo);
        printf("Fuerza: %.2f\n",personajes[i].fuerza);
        printf("Salud: %i\n",personajes[i].salud);
    }
}

#endif