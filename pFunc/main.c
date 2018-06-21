#include <stdio.h>
#include <stdlib.h>

void funcionDespedida(char* nombre);
void funcionBienvenida(char* nombre);
void fDel(void(*punteroFuncion)(char* eldato),char* nombre);
void funcionDespedidaSin();
void funcionDespedidaMas(char* nombre,char* apellido);

int main()
{
    fDel(funcionBienvenida,"natalia natalia");
    getche();
    fDel(funcionDespedida,"natalia natalia");
    getche();
    fDel(funcionDespedidaSin,"natalia natalia");
    getche();
    fDel(funcionDespedidaMas,"natalia natalia");
    getche();
    return 0;
}

void funcionBienvenida(char* nombre)
{
    printf("Bienvenida %s , a la empresa.",nombre);
}

void funcionDespedida(char* nombre)
{
    printf("vos %s estas despedida ---->",nombre);
}

void fDel(void(*punteroFuncion)(char* eldato),char* nombre)
{
    punteroFuncion(nombre);
}

void funcionDespedidaMas(char* nombre,char* apellido)
{
    printf("vos %s %s estas despedida ---->",nombre,apellido);
}

void funcionDespedidaSin()
{
    printf("Estas despedida ---->");
}
