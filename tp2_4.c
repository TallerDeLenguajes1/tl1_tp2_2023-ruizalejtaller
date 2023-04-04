#include <stdio.h>
#include <stdlib.h>
#define cant 5

//4)

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
};

struct compu pcs[cant];

void cargar (struct compu pcs[cant], char tipos[6][10]);
void mostrar (struct compu pcs[cant]);
void vieja (struct compu pcs[cant]);
void velocidad (struct compu pcs[cant]);

int main ()
{
    char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};

    cargar(pcs,tipos);
    mostrar(pcs);
    vieja(pcs);
    velocidad(pcs);

    return 0;

}

// 4b)

void cargar (struct compu pcs[cant], char tipos[6][10])
{
    int i, tipo;
    for(i=0; i<cant; i++)
    {
        printf("\n(0)Intel (1)AMD (2)Celeron (3)Athlon (4)Core (5)Pentium \n");
        printf("Ingrese tipo de procesador de PC %d: ", i+1);
        scanf("%d", &tipo);

        pcs[i].tipo_cpu = tipos[tipo];
        pcs[i].velocidad = 1 + rand()%3;
        pcs[i].anio = 2015 + rand()%9;
        pcs[i].cantidad = 1 + rand()%8;

    }
}

// 4c)

void mostrar (struct compu pcs[cant])
{
    printf("\n------------------------------------\n");
    for (int i=0; i<cant; i++)
    {
        printf("PC: %d\n", i+1);
        printf("Tipo de procesador: %s\n", pcs[i].tipo_cpu);
        printf("Velocidad: %d Ghz\n", pcs[i].velocidad);
        printf("Cantidad de núcleos: %d\n", pcs[i].cantidad);
        printf ("Año de fabricación: %d \n", pcs[i].anio);
        printf("------------------------------------\n");
    }
}


// 4d)

void vieja (struct compu pcs[cant])
{
    int older, old = 2023;
    for (int i=0; i<cant; i++)
    {
        if (pcs[i].anio < old) {
            old = pcs[i].anio;
            older = i;
        }
    }

        printf("\n------------------------------------\n");
        printf("La PC ---más vieja--- es la núm: %d\n", older+1);
        printf("Tipo de procesador: %s\n", pcs[older].tipo_cpu);
        printf("Velocidad: %d Ghz\n", pcs[older].velocidad);
        printf("Cantidad de núcleos: %d\n", pcs[older].cantidad);
        printf ("Año de fabricación: %d \n", pcs[older].anio);
        printf("------------------------------------\n");
}

// 4e)

void velocidad (struct compu pcs[cant])
{
    int faster, fast = 0;
    for (int i=0; i<cant; i++)
    {
        if (pcs[i].velocidad > fast) {
            fast = pcs[i].velocidad;
            faster = i;
        }
    }

        printf("\n------------------------------------\n");
        printf("La PC ---más veloz--- es la núm: %d\n", faster+1);
        printf("Tipo de procesador: %s\n", pcs[faster].tipo_cpu);
        printf("Velocidad: %d Ghz\n", pcs[faster].velocidad);
        printf("Cantidad de núcleos: %d\n", pcs[faster].cantidad);
        printf ("Año de fabricación: %d \n", pcs[faster].anio);
        printf("------------------------------------\n");
}
