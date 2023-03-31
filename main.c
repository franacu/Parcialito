#include<stdio.h>

int main()
{
    int notas, suma = 0, prom, cont = 0;
    do {
        printf("Ingrese notas de los alumnos del curso o -1 para finalizar:");
        scanf("%d", &notas);
    } while (notas > 10 || notas < -2);
    while (notas != -1) {
        cont++;
        suma = suma + notas;
        prom = suma / cont;
        printf("Ingrese notas de los alumnos del curso o -1 para finalizar:");
        scanf("%d", &notas);
    }
    printf("El promedio es de %d", prom);
    return 0;
}