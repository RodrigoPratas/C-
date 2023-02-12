//
// Created by rodrigo on 2/12/23.
//
//1. Elabore o programa que lê do teclado uma sequência de números inteiros (número a número) e
//termine com letra, ou seja, qualquer letra pára a sequência, use while( (scanf(“%d”, &n))==1 ) e calcule:
//1.1 Quantos números foram lidos;
//1.2 Qual é o último maior e em que posição relativa dentro da sequência lida se encontra.
//1.3 Total de mudanças de sinal de número positivo para número negativo;
//1.4 Quantos números dos lidos formam a primeira maior subsequência crescente;

#include <stdio.h>

int main(){
    int n, oldn, count, schange, bign, bigpos;
    count=0;
    schange=0;
    oldn=0;
    printf("Type numbers and end the sequence with a letter : \n");
    while((scanf("%d", &n))==1){
        count++;
        if(n<0 && oldn>=0){
            schange++;
        }
        if(n>=oldn){
            bign=n;
            bigpos=count;
        }
        oldn=n;
    }
    printf("There were %d numbers read!!! \n The biggest was %d in the position %d!!! \n There were %d changes from positive to negative numbers!!! ", count, bign, bigpos, schange);
    return 0;
}

