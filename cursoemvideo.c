#include <stdio.h> //essa linha ''puxa'' ou ''chama'' a biblioteca. existem varias

// curso intelectual tec
int main (){
int num = 10; //atribuindo valor
float n2 = 6.79; //variavel com decimais. mais precisa que int e menos que double
char letra = 'a'; //variavel com caracter - usar %c para marcar
char frase[10] = "Bom dia!"; //entre colchetes ou chaves n sei o limite de caracteres
double n3 = 1.23456; //permite maior precisão armazenando mais casas do que float

printf("Hello, World!\n");
printf("%s \n", frase);
printf("Exibindo o numero inteiro %d.\n", num);
printf("Exibindo o numero com decemais %.2f.\n", n2);
printf("Exibindo a letra ou o caracter %c.\n", letra);
printf("Exibindo o numero do tipo double: %f.", n3);
printf("Valores: %d, %.2f, %c, %s, %f", num, n2, letra, frase, n3);
    
return 0;


}
//apenas comentários
//usaria <stdlib.h> e a função system("pause") - gera a mensagem de pressionar tecla para continuar
//se eu estivesse usando alguma ide mais antiga como o devc++ por exemplo
//variaveis nao podem ter ''ç'', acentos gráficos ou espaços




//