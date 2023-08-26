#include<stdio.h>


main(){
//Leia o salário e imprima se ganha mais que op mínimo
int salario;

    printf("Digite seu salario:");
    scanf("%d", &salario);

    if(salario >= 1320){

        printf("Salario alto");

    } else {
        printf("Salario abaixo");

    }

}
