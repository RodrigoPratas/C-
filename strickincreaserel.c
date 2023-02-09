//
// Created by rodrigo on 2/8/23.
//
//Assignment:
//Write the program that reads from the keyboard three valid integer values for the variables x,y,z and writes in the
//terminal the strictly ascending order between the values contained in the variables or if there is none
//strictly order relation “There is no strictly increasing relation!”.
//Two illustrative Examples among several in which, in the 1st there is no and the 2nd there is a strictly increasing relationship:
//Example: input x, y, z: 5 7 5
//output: There is no strictly increasing relation!
//input x, y, z: 5 10 7
//output: There is a strictly increasing relation! with: 5 < 7 < 10
//

#include <stdio.h>

int main(){
    int a, b, c, o1, o2, o3;
    printf("Type the values of a, b, c : \n");
    scanf("%d,%d,%d", &a, &b, &c);
    if(a==b || a==c || b==c){
        printf("There is no strictly increasing relation!");
        return 0;
    }
    else{
        if(a>b && a>c){
            o3=a;
            if(b>c){
                o2=b;
                o1=c;
            }
            else{
                o2=c;
                o1=b;
            }
        }
        if(b>a && b>c){
            o3=b;
            if(a>c){
                o2=a;
                o1=c;
            }
            else {
                o2 = c;
                o1 = a;
            }
        }
        if(c>b && c>a){
            o3=c;
            if(b>a){
                o2=b;
                o1=a;
            }
            else{
                o2=a;
                o1=b;
            }
        }

    }
    printf("There is a strictly increasing relation! with: %d < %d < %d !!! \n", o1, o2, o3);
    return 0;
}
