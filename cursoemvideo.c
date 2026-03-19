#include <stdio.h> //essa linha ''puxa'' ou ''chama'' a biblioteca. existem varias

// curso intelectual tec
int main (){
int num = 10; //atribuindo valor
float n2 = 6.79; //variavel com decimais. mais precisa que int e menos que double
char letra = 'a'; //variavel com caracter - usar %c para marcar
char frase[10] = "Bom dia!"; //entre colchetes ou chaves n sei o limite de caracteres
double n3 = 1.234567; //permite maior precisão armazenando mais casas do que float
int valor1, valor2, soma, sub, mult, numero, resto, dia;
float divi;
float nota1, nota2, media;

/*
//usando a função print para mostrar valores com variaveis distintas;
printf("Hello, World!\n");
printf("%s. \n", frase);
printf("Exibindo o numero inteiro %d.\n", num);
printf("Exibindo o numero com decemais %.2f.\n", n2);
printf("Exibindo a letra ou o caracter %c.\n", letra);
printf("Exibindo o numero do tipo double: %f.\n", n3);
printf("Valores: %d, %.2f, %c, %s, %f. \n", num, n2, letra, frase, n3);

printf("Digite um numero inteiro: \n", valor1);
scanf("%d", &valor1);

printf("Digite um segundo numero: \n", valor2);
scanf("%d", &valor2);

//declarando as funcoes aritmeticas
soma = valor1 + valor2;
sub = valor1 - valor2;
mult = valor1 * valor2;
divi = (float) valor1 / valor2;

printf("O valor da soma de %d e %d é igual a: %d.\n", valor1, valor2, soma); //soma
printf("O valor da subtracao de %d e %d é igual a: %d.\n", valor1, valor2, sub);
printf("O valor da multiplicacao de %d e %d é igual a: %d.\n", valor1, valor2, mult);
printf("O valor da divisao de %d e %d é igual a: %.2f.\n", valor1, valor2, divi);


//testando sobras e fazendo um sistem que mostra se o numero é par ou impar

printf("Digite um numero inteiro: \n", numero);
scanf("%d", &numero);

resto = numero % 2;

printf("Resto da divisão: %d. \n", resto);
//if - else//

if (resto == 0){
    printf("O numero é par!\n");
} else {
    printf("O numero é impar!\n");
}
    
//vamos formatar variaveis//

printf("Digite a primeira nota: .\n", nota1);
scanf("%f", &nota1);

printf("Digite a segunda nota: .\n", nota2);
scanf("%f", &nota2);

media = (float) (nota1 + nota2)/2;

printf("A média é: %.2f. \n", media);

//if aninhado//

if (media >= 6){
    printf("Voce foi aprovado!\n");
} else 
if (media < 3){
printf("O aluno está reprovado");
} else {
    printf("O aluno está de recuperação!");
}
    */
// switch - case //

printf("Digite um numero de 1 a 7:", dia);
scanf("%d", &dia);
switch(dia)
{
    case 1 :
    printf("Domingo\n");
    break;
    case 2 :
    printf("Segunda\n");
    break;
    case 3 :
    printf("Terça\n");
    break;
    case 4 :
    printf("Quarta\n");
    break;
    case 5 :
    printf("Quinta\n");
    break;
    case 6 :
    printf("Sexta\n");
    break;
    case 7 :
    printf("Sábado\n");
    break;

    default :
    printf("Valor inválido!\n");
}

return 0;


}
//apenas comentários
//usaria <stdlib.h> e a função system("pause") - gera a mensagem de pressionar tecla para continuar
//se eu estivesse usando alguma ide mais antiga como o devc++ por exemplo
//variaveis nao podem ter ''ç'', acentos gráficos ou espaços




//