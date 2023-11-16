/*
Devin Alexander Vazquez Alonso
23310138
Programa que calcula el promedio y te dice si estas aprobado o reprobado
*/

#include <stdio.h>
int main(){
    int parcial1, parcial2, parcial3, promedio;
    printf("ingrese sus calificaciones de los parciales:\nparcial 1: ");
    scanf("%d",&parcial1);
    printf("parcial 2: ");
    scanf("%d",&parcial2);
    printf("parcial 3: ");
    scanf("%d",&parcial3);

    promedio = (parcial1+parcial2+parcial3)/3;
    if (promedio>=70)
    {
        printf("su promedio fue de %d, estas aprobado",promedio);
    }else{
        printf("su promedio fue de %d, estas reprobado",promedio);
    }
    
    return 0;
}