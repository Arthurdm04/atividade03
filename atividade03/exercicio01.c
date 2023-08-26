#include<stdio.h>
#include<math.h>

main(){
//Leia a idade e imprima se a pessoa é de maior
int idade;

printf("Digite sua idade:");
scanf("%d", &idade);

//estrutura condicional ou de selação
if(idade >= 18){
// verdadeiro
printf("E maior de idade");

} else {
    printf("Menor de idade");


}

}