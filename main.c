#include <stdio.h>
#include <stdlib.h>

// 1) Crear una función que permita llenar una matriz
void llenarMatriz(float matriz[][3], int filas, int columnas){
    float valorCasilla = 1.0; 
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            valorCasilla += 0.1;
            matriz[i][j] = valorCasilla; 
        }
        valorCasilla += 0.7;
    }
}

// 2) Crear una función para mostrar la matriz creada anteriormente
void mostrarMatriz(float matriz[][3], int filas, int columnas){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++)
            printf("%.1f\t", matriz[i][j]);
        printf("\n");
    }
}

// 3) Se solicita representar mediante el uso de matrices y estructuras un hotel de 3 pisos con 2 habitaciones por cada uno. En cada habitación se debe registrar una persona y luego se deben mostrar. (*Utilizar funciones)
typedef struct persona{
    char nombre[20];
    int dias;
} persona;

void llenarHabitacion(persona *cliente){
    system("cls");
    printf("Nombre: \n");
    scanf("%s", &cliente->nombre);
    printf("dias: \n");
    scanf("%i", &cliente->dias);
    system("pause");
}

void mostrarHabitacion(persona *cliente){
    printf("Cliente: Nombre: %s Dias: %i\n",cliente->nombre, cliente->dias);
}

int main(){
    // float matriz[3][3];
    // llenarMatriz(matriz, 3, 3);
    // mostrarMatriz(matriz, 3, 3);

    // persona hotel[3][2];
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<2; j++){
    //         llenarHabitacion(&hotel[i][j]);
    //     }
    // }
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<2; j++){
    //         mostrarHabitacion(&hotel[i][j]);
    //     }
    // }
    return 0;
}