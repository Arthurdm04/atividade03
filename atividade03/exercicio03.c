#include<stdio.h>

main(){
// Leia a altura e imprima se é maior que 1.8m

float altura;

printf("Digite sua altura:");
scanf("%f", &altura);

if(altura >= 1.8){

printf("Maior");

} else {
printf("Menor");

}
}