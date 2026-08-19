#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    float volume, raio;
    printf("Insira o raio do circulo: ");
    scanf ("%f", &raio);

    volume = (4.0 / 3.0) * pi * raio * raio * raio;

    printf("Volume = %.3f", volume);

}
