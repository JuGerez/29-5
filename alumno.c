#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "alumno.h"

stAlumno cargaUnAlumno ()
{
    stAlumno a;
    printf("Ingrese nro de legajo: ");
    scanf("%d", &a.legajo);
    printf("Ingrese el Nombre: ");
    fflush(stdin);
    gets(a.nombre);
    printf("Ingrese el Apellido: ");
    fflush(stdin);
    gets(a.apellido);
    printf("Ingrese dia de nacimiento: ");
    scanf("%d", &a.diaNac);
    printf("Ingrese mes de nacimiento: ");
    scanf("%d", &a.mesNac);
    printf("Ingrese a%co de nacimiento: ", 164);
    scanf("%d", &a.anioNac);
    printf("Ingrese el genero F o M: ");
    fflush(stdin);
    scanf("%c", &a.genero);

    return a;
}
void muestraUnAlumno (stAlumno a)
{
    printf(" \n Legajo nro:   %d", a.legajo);
    printf(" \n Nombre:       %s", a.nombre);
    printf(" \n Apellido:     %s", a.apellido);
    printf(" \n Fecha de nacimiento:    %d / %d / %d", a.diaNac, a.mesNac, a.anioNac);
    printf(" \n Genero:       %c", a.genero);
    printf("\n-------------------------------------------\n");
}
