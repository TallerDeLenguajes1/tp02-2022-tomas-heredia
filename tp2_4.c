#include <stdio.h>
#include <time.h>
#include <stdlib.h>

struct compu {
int velocidad;//entre 1 y 3 Gherz
int anio;//entre 2000 y 2017
int cantidad;//entre 1 y 4
int tipo_cpu; //valores del arreglo tipos
};typedef struct compu computadora;

computadora ingresar(int i);
void mostrar(computadora pc);
void masVieja(computadora compus[5]);
void masVeloz(computadora compus[5]);

void main(){
    srand((int)time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    
    computadora compus[5];
    for (int i = 0; i < 5; i++)
    {   
        compus[i] = ingresar(i);
    }
    for (int i = 0; i < 5; i++)
    {   
        printf("\n Computadora %d",i+1);
        mostrar(compus[i]);
    }
    masVieja(compus);
    masVeloz(compus);
    getchar();
}

computadora ingresar(int i){
    computadora pc;
    int aux;
    printf("\nIngrese la velocidad de la maquina %d (entre 1 y 3 Gherz)", i+1);

    scanf("%d", &pc.velocidad);
    printf("\nIngrese el anio de fabricacion de la maquina %d (2000 y 2017)", i+1);
    scanf("%d", &pc.anio);

    printf("\nIngrese la cantidad nucleos de maquinas %d (1 a 8)", i+1);
    scanf("%d", &pc.cantidad);

    printf("\nIngrese el tipo de las maquinas %d (1_Intel, 2_AMD, 3_Celeron, 4_Athlon, 5_Core, 6_Pentium)", i+1);
    scanf("%d", &pc.tipo_cpu);
    //pc.tipo_cpu=(p+((aux-1)*10 ));

    return pc;
}

void mostrar(computadora pc){
    printf("\n la velocidad es: %d Ghz", pc.velocidad);
    printf("\n el anio de fabricacion es: %d ", pc.anio);
    printf("\n la cantidad nucleos de la maquinas es: %d ", pc.cantidad);
    switch (pc.tipo_cpu)
    {
    case 1:
        printf("\n el tipo de la maquina es: Intel ");
        break;
    case 2:
        printf("\n el tipo de la maquina es: AMD ");
        break;
    case 3:
        printf("\n el tipo de la maquina es: Celeron ");
        break;
    case 4:
        printf("\n el tipo de la maquina es: Athlon ");
        break;
    case 5:
        printf("\n el tipo de la maquina es: Core ");
        break;
    default:
            printf("\n el tipo de la maquina es: Pentium ");

        break;
    }
    printf("\n el tipo de la maquina es: %s ", pc.tipo_cpu);

}

void masVieja(computadora compus[5]){
    computadora vieja;
    vieja = compus[0];
    int aux = 0;
    for (int i = 1; i <= 5; i++)
    {
        if (vieja.anio<compus[i].anio)
        {
            vieja = compus[i];
            aux = i;
        }
        
    }
    printf("\n La compu mas vieja es la numero %d. De especificaciones: ", aux+1);
    mostrar(vieja);
}

void masVeloz(computadora compus[5]){
    computadora veloz;
    veloz = compus[0];
    int aux = 0;
    for (int i = 0; i < 5; i++)
    {
        if (veloz.velocidad<compus[i].velocidad)
        {
            veloz = compus[i];
            aux = i;
        }
        
    }
    printf("\n La compu mas veloz es la numero %d. De especificaciones: ", aux+1);
    mostrar(veloz);
}