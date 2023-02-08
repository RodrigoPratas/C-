
#include <stdio.h>

//
// Created by rodrigo on 2/8/23.
//

int main(){
    int h, m, s, t;  		/*t is the total of seconds*/
    printf("What time do you want to convert into seconds(Format HH:MM:SS)? \n");
    scanf("%d:%d:%d",&h,&m,&s);
    t=h*3600+m*60+s;
    printf("It is a total of %d seconds!!! \n", t);
    return 0;
}

