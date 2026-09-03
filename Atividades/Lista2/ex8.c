#include

int sec, horas, min;
printf("Insira o tempo em segundo \n");
scanf("%d", &sec);
horas = sec/3600;
min = (sec - (sec%3600))/60;
sec = sec - ((horas*3600)
