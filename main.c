#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct box celula;

        struct box
        {
            char conteudo;
            celula *prox;

        };
        celula *inicio, *novo, *temp1 , *temp2; //ponteiros auxiliadores do tipo estrutura
int main()
{

//primeira questao
        inicio=(celula*)malloc(sizeof(celula));//alocando memoria do tipo struct para o inicio, criando um conteudoo e um ponteiro porximo
        inicio->conteudo= 'a';//uma variavel de controle, como se fosse de uma struct recendo o conteudo.
        (*inicio).prox= NULL;// a proxima estrutura de endereço recebe null

                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO 'A' NA ULTIMA POSCICAO. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);//imprimindo o conteudo de temp1
                                                    temp1 = (*temp1).prox;// incrementando para o proximo endereço

                                                            }
                                            printf("\n------------------------------------\n");



//segunda questao
         novo=(celula*)malloc(sizeof(celula));// criando uma nova celula
         novo->conteudo= 'b';// o conteudo da nova celula recebe o caractere desejado
         (*novo).prox= inicio; // o endereço recebendo o inicio, para que fique no começo da lista encadeada
         inicio=novo; // o inicio recebendo a nova celula

                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'B' NO INICIO DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");



//questao 3
                                            //descobrindo o ultimo endereço
                                            temp2 = inicio;
                                            while (temp2->prox != NULL) {
                                                temp2 = temp2 -> prox;
                                                            }


        novo=(celula*)malloc(sizeof(celula)); //criando uma nova celula
        novo-> conteudo= 'c'; // conteudo da nova celula recebendo o caractere desejado
        (*temp2).prox = novo; // o ultimo endereço recebendo a nova celula auxiliar
         novo->prox= NULL;//sempre o ultimo da lista precisa ser reiniciado e apontado para null




                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'c' NO FINAL DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");



//questao 4
 //mesmo algoritimo anterior

                                            temp2 = inicio;
                                            while (temp2->prox != NULL) {
                                                temp2 = temp2 -> prox;
                                                            }


        novo=(celula*)malloc(sizeof(celula));
        (*temp2).prox = novo;
        novo-> conteudo= 'd';
        novo->prox= NULL;


                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'D' NO FINAL DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");

//questao 5

                                            temp2 = inicio;  // variavel auxiliar recebe o endereço do inicio
                                            while (temp2->conteudo != 'a') {  //enquant a variavel auxiliar conteudo nao for a eu ando um endereço
                                                temp2 = (*temp2).prox;
                                                            }
        temp1=(celula*)malloc(sizeof(celula));//criando uma nova celula aux
        temp1= temp2->prox; // o temp 1 recebe o endereço do conteudo 'c'
        novo=(celula*)malloc(sizeof(celula)); // criando o novo conteudo auxia
        novo-> conteudo= 'e'; // o novo conteudo recebe o desejado
        (*temp2).prox = novo; // o endereço depois do a recebe o que esta na frente do a recebe o novo que contem 'e'
        novo->prox= temp1; // o proximo do novo recebe o endereço do temp1, onde esta o 'c'

                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o end    ereço da primeira struct
                                                printf("ADICIONANDO  'E' ENTRE A E C . \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");


//questao 6
//adicionando no final da lista
                                            temp2 = inicio;
                                            while (temp2->prox != NULL) {
                                                temp2 = temp2 -> prox;
                                                            }


        novo=(celula*)malloc(sizeof(celula));
        (*temp2).prox = novo;
        novo-> conteudo= 'f';
        novo->prox= NULL;


                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'F' NO FINAL DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");

//questao 7
//adicionando no inicio da lista, algoritimo ja mostrado
         novo=(celula*)malloc(sizeof(celula));
         novo->conteudo= 'g';
         (*novo).prox=inicio;
         inicio=novo;

                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'g' NO INICIO DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");



//questao 8


                                      temp2 = inicio;
                    //fazendo um while para descobrir o penultimo da lista, assim sabendo o penultimo sabemos o ultimo, que no caso é o proximo dele
                                                while (temp2->prox->prox != NULL) {
                                                            temp2 = temp2 -> prox;
                                                                                   }
                //sabendo o endereço da penultima celula se faz o seguinte:

       temp1=(celula*)malloc(sizeof(celula));// criando uma nova celula auxiliadora
       temp1->prox = temp2->prox; // colocasse a ultima posição que se da pelo proximo da penulmtima da lista.
       free(temp1); // liberando o ultimo endereço que agora esta em temp1
       temp2->prox = NULL; // por ultimo, o penultimo endereço passa a ser o ultimo, assim tendo que apontar para NULL.




       //printando a lista
                                         temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                             printf("EXCLUINDO NO FINAL DA LISTA. \n");
                                printf("\n------------------------------------\n");


                                          while (temp1 != NULL) {
                                      printf(" %c - ", (*temp1).conteudo);
                                          temp1 = (*temp1).prox;

                                                         }
                                  printf("\n------------------------------------\n");



//questao 9
         temp1=(celula*)malloc(sizeof(celula));// criando uma nova celula
         temp1= (*inicio).prox;// O TEMP1 recebendo o endereço da segunda celula, DEPOIS DO INICIO
         free(inicio); // liberando o inicio
         inicio=temp1; // o inicio recebe o endereço da celula auxiliar (TEMP1), se tornando o inicio da lista



                        //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO NO COMECO DA LISTA. \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");
//questao 10
//botando entre duas letras, algoritimo ja demonstrado




                                              temp2 = inicio;  // variavel auxiliar recebe o endereço do inicio
                                              while (temp2->conteudo != 'a') {  //enquant a variavel auxiliar conteudo nao for a eu ando um endereço
                                                 temp2 = (*temp2).prox;
                                                          }
         temp1=(celula*)malloc(sizeof(celula));
          temp1= temp2->prox;
          novo=(celula*)malloc(sizeof(celula));
          novo-> conteudo= 'h';
          (*temp2).prox = novo;
          novo->prox= temp1;

                                            //printando a lista
                                           temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                  printf("ADICIONANDO  'H' ENTRE A | E . \n");
                                                printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                printf(" %c - ", (*temp1).conteudo);
                                                     temp1 = (*temp1).prox;

                                                             }
                                             printf("\n------------------------------------\n");
 //questao 11

            while (temp2->conteudo != 'a') {// achando a celula que contem o caractere a
            temp2 = (*temp2).prox;
                                           }
         (*inicio).prox= (*temp2).prox; // apontando o endereço antes de 'a' para o depois de 'a', assim estabelecendo uma nova conexao e nao perder as celulas depois disso
        free(temp2); // liberando a celula com conteudo a
//printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO O CARACTERE 'A' . \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                  printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");

//questao 12 obs: o que vem depois de é 'c', entao ele fica entre e e c
//colocando entre duas letras, algoritmo ja demonstrado


                                              temp2 = inicio;  // variavel auxiliar recebe o endereço do inicio
                                              while (temp2->conteudo != 'e') {  //enquant a variavel auxiliar conteudo nao for a eu ando um endereço
                                                 temp2 = (*temp2).prox;
                                                          }
         temp1=(celula*)malloc(sizeof(celula));
          temp1= temp2->prox;
          novo=(celula*)malloc(sizeof(celula));
          novo-> conteudo= 'i';
          (*temp2).prox = novo;
          novo->prox= temp1;

                                            //printando a lista
                                           temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                  printf("ADICIONANDO  'i' ENTRE E | C . \n");
                                                printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                printf(" %c - ", (*temp1).conteudo);
                                                     temp1 = (*temp1).prox;

                                                             }
                                             printf("\n------------------------------------\n");

//questao 13
//colocando no inicio da lista, algoritimo ja demonstrado
 temp2 = inicio;
                                            while (temp2->prox != NULL) {
                                                temp2 = temp2 -> prox;
                                                            }


        novo=(celula*)malloc(sizeof(celula));
        novo-> conteudo= 'j';
        (*temp2).prox = novo;
         novo->prox= NULL;//sempre o ultimo da lista precisa ser reiniciado e apontado para null




                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'j' NO FINAL DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");
//questao 14
                                    temp2 = inicio;  // variavel auxiliar recebe o endereço do inicio
                                            while (temp2->conteudo != 'b') {  //enquant a variavel auxiliar conteudo nao for a eu ando um endereço
                                                temp2 = (*temp2).prox; //incrementação
                                                            }
        temp1=(celula*)malloc(sizeof(celula));//criando uma nova celula aux
        temp1= temp2->prox; // o temp 1 recebe o endereço do conteudo 'c', QUE NO CASO É O PROXIMO DE B
        novo=(celula*)malloc(sizeof(celula)); // criando o novo conteudo auxia
        novo-> conteudo= 'k'; // o novo conteudo recebe o desejado
        (*temp2).prox = novo; // o endereço depois do B recebe o que esta na frente do a recebe o novo que contem 'e'
        novo->prox= temp1; // o proximo do novo recebe o endereço do temp1, onde esta o 'c'

                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o end    ereço da primeira struct
                                                printf("ADICIONANDO  'K' ENTRE B E H . \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");

//questao 15
     temp2=inicio;

            while (temp2->conteudo != 'c') {// achando a celula que contem um caractere antes do 'd'
            temp2 = (*temp2).prox;//incremento
                                           }
          temp1=(celula*)malloc(sizeof(celula));//criando uma celula auxiliar
          temp1= temp2->prox;
          temp2->prox= temp1->prox;
          free(temp1); // liberando a celula com conteudo a


//printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO O CARACTERE 'd' . \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                  printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");

                                            //SEGUNDO ITEM DA QUESTAO 15

                                         temp2=inicio;

            while (temp2->conteudo != 'b') {// achando a celula que contem um caractere antes do 'k'
            temp2 = (*temp2).prox;//incremento
                                           }
          temp1=(celula*)malloc(sizeof(celula));//criando uma celula auxiliar
          temp1= temp2->prox;
          temp2->prox= temp1->prox;
          free(temp1); // liberando a celula com conteudo a


//printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO O CARACTERE 'K' . \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                  printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");

                                           //TERCEIRO ITEM DA QUESTAO 15


                                                 temp2=inicio;

            while (temp2->conteudo != 'e') {// achando a celula que contem um caractere antes do 'i'
            temp2 = (*temp2).prox;//incremento
                                           }
          temp1=(celula*)malloc(sizeof(celula));//criando uma celula auxiliar
          temp1= temp2->prox;
          temp2->prox= temp1->prox;
          free(temp1); // liberando a celula com conteudo a


//printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO O CARACTERE 'i' . \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                  printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");



//questao 16
//COMO B ESTA NO INICIO, BASTA EXCLUIR O INICIO DA LISTA
         temp1=(celula*)malloc(sizeof(celula));// criando uma nova celula
         temp1= (*inicio).prox;// O TEMP1 recebendo o endereço da segunda celula, DEPOIS DO INICIO
         free(inicio); // liberando o inicio
         inicio=temp1; // o inicio recebe o endereço da celula auxiliar (TEMP1), se tornando o inicio da lista



                        //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                              printf("EXCLUINDO CARACTERE 'B'. \n");
                                            printf("\n------------------------------------\n");


                                                 while (temp1 != NULL) {
                                                  printf(" %c - ", (*temp1).conteudo);
                                                  temp1 = (*temp1).prox;

                                                             }
                                         printf("\n------------------------------------\n");
//questao 17
//colocando final da lista, agoritimo ja demonstrado

 temp2 = inicio;
                                            while (temp2->prox != NULL) {
                                                temp2 = temp2 -> prox;
                                                            }


        novo=(celula*)malloc(sizeof(celula));
        novo-> conteudo= 'l';
        (*temp2).prox = novo;
         novo->prox= NULL;//sempre o ultimo da lista precisa ser reiniciado e apontado para null




                                            //printando a lista
                                            temp1 = inicio; // variavel de controle recebe o endereço da primeira struct
                                                printf("ADICIONANDO  'l' NO FINAL DA LISTA. \n");
                                                printf("\n------------------------------------\n");


                                                while (temp1 != NULL) {
                                                    printf(" %c - ", (*temp1).conteudo);
                                                    temp1 = (*temp1).prox;

                                                            }
                                            printf("\n------------------------------------\n");





    return 0;
}
