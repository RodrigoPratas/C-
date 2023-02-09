//
// Created by rodrigo on 2/8/23.
//
//Write the program that reads from the keyboard four integer values to be stored in the variables a, b,
//c, d which mean grades on the scale of 0 to 20 values, these values to be validated and
//write the following calculations in the terminal:
//- What is the exact mean to 6 decimal places and the mean rounded to two decimal places;
//- What is the first highest grade and the name of the variable that contains it;
//- What are the values of the two worst grades;
//- What is the average of the top three;
//- How many banknotes have odd value;
//- Write the ascending order of the notes.


#include "stdio.h"

int main(){
    int mean;
    float a, b, c, d, g1, g2, g3, g4;
    class hgv;
    printf("Type the 4 grades(a,b,c,d) : \n");
    scanf("%f,%f,%f,%f", &a, &b, &c, &d);
    mean= (a+b+c+d) / 4;
    if(a>=b && a>=c && a>=d){
        hgv="a";
        g1=a;
    }
    if(b>=a && b>=c && b>=d){
        hgv="b";
    }
    if(c>=b && c>=a && c>=d){
        hgv="c";
    }
    if(d>=b && d>=c && d>=a){
        hgv="d";
    }




}