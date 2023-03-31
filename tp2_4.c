#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct {
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu; 
}typedef compu;

void mostrar(compu pc);
void pcMasVieja(compu pc[], int cant);
void pcMasVeloz(compu pc[], int cant);

int main () {

    int cant=5;
    compu arreglo[cant], aux;
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    srand(time(NULL));

    for (int i=0; i<cant; i++)  //Cargo el arreglo
    {

        aux.anio=2015+rand()%9;
        aux.velocidad=1+rand()%3;
        aux.cantidad=1+rand()%8;
        
        arreglo[i]=aux;
    }

    for (int i=0; i<cant; i++)
    {
        printf("\n------ Computadora [%d] ------\n", i+1);
        mostrar(arreglo[i]);
    }

    pcMasVieja(arreglo, cant);
    pcMasVeloz(arreglo, cant);
    
    return 0;
}

//Funcion para mostrar la lista de Computadoras
void mostrar(compu pc) {
    
    printf("\nAnio: %d\n", pc.anio);
    printf("Velocidad: %d\n", pc.velocidad);
    printf("Cantidad: %d\n", pc.cantidad);
}

//Funcion para Mostrar la PC mas vieja
void pcMasVieja(compu pc[], int cant) {

    int menor=2024;

    for (int i=0; i<cant; i++)
    {
        if(pc[i].anio < menor){

            menor = pc[i].anio;
        }
    }
    printf("\nLa computadora mas vieja es del anio %d", menor);
}

//Funcion para Mostrar la PC mas rapida
void pcMasVeloz(compu pc[], int cant){

    int mayorv=0;

    for (int i=0; i<cant; i++)
    {
        if(pc[i].velocidad > mayorv){

            mayorv =pc[i].velocidad;
        }
    }
    printf("\nLa computadora de mayor velocidad es de %d GHz", mayorv);
}
