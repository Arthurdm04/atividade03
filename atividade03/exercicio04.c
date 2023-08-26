#include<stdio.h>

main(){
// Leia o peso e imprima se é menor que 60kg

float peso;

printf("Digite seu peso:");
scanf("%f", &peso);

if(peso <= 60){

printf("Frango");

} else {

printf("Bruto");

}

}