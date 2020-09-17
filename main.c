#include<stdio.h>
#include<stdlib.h>

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

int main()
{
    int opc, salir;
    do{
        printf("Selecciona una opcion\n(1)Suma y promedio de 5 numeros\n(2)Funcion mostrar\n(3)Personajes\n(4)Salir\n");
        scanf("%i",&opc);
        switch (opc)
        {
        case 1:
            capturar_enteros();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            salir=0;
            break;
        }
    }
    while(salir!=0);
    return 0;
}
