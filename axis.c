//
// Created by rodrigo on 2/8/23.
//
//PROBLEM:
/*
Write the program that calculates which quadrant the point is in and to do so you must read from the keyboard
two integer values: abscissa x1 and ordinate y1, which corresponds to a localized point of the Cartesian axis
as the objective of classifying it in: it is in the 1st quadrant, or in the 2nd quadrant, or in the 3rd quadrant, or in the 4th
quadrant or is on any of the axes, writing messages appropriate to the value of the entrance.//
*/

#include "stdio.h"

int main(){
    int x, y;
    printf("Type the point(x,y) :  \n");
    scanf("%d,%d", &x, &y);
    if(x==0 && y!=0){
        printf("The point is in the Y axis!!!");
        return 0;
    }
    if(x!=0 && y==0){
        printf("The point is in the X axis!!!");
        return 0;
    }
    if(x==0 && y==0){
        printf("The point is in 0 !!!");
        return 0;
    }
    if(x>0 && y>0){
        printf("The point is in the 1ºQuadrant!!!");
        return 0;
    }
    if(x<0 && y>0){
        printf("The point is in the 2ºQuadrant!!!");
        return 0;
    }
    if(x<0 && y<0){
        printf("The point is in the 3ºQuadrant!!!");
        return 0;
    }
    if(x>0 && y<0){
        printf("The point is in the 4ºQuadrant!!!");
        return 0;
    }
    printf("Invalid Values!!!");
    return 0;
}
