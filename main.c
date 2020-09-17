#include<stdio.h>
#include "personaje.h"
void capturar_enteros()
{
    int enteros[5];
    float promedio;
    int suma=0;
    for (size_t i = 0; i < 5; i++)
    {
        scanf("%i",&enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%i ",enteros[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {
        suma=suma + enteros[i];
    }
    printf("\nSuma: %i\n",suma);
    printf("Promedio:%.2f",suma/5.0);
}

void mostrar(int n,char cadena[]){
    for (size_t i = 0; i < n; i++)
    {
        printf("%s",cadena);
    }
    
}

int main()
{
    char opc;
    int n;
    char cadena[20];
    do{
        printf("\nSelecciona una opcion\n(1)Capturar enteros\n(2)Mostrar cadena n veces\n(3)Agregar personaje\n(4)Mostrar personajes\n(0)Salir\n");
        fflush(stdin);
        scanf("%c",&opc);
        switch (opc)
        {
        case '1':
            capturar_enteros();
            break;
        case '2':
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena,sizeof(cadena),stdin);
            printf("n: ");
            scanf("%i",&n);
            mostrar(n,cadena);
            break;
        case '3':
            capturar_personajes();
            break;
        case '4':
            mostrar_personajes();
            break;
        }
    }
    while(opc!='0');
}
