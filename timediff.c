//
// Created by rodrigo on 2/8/23.
//
#include <stdio.h>

int main(){

    int hp, mp, sp, hc, mc, sc, hd, md, sd;
    printf("Type the departure time(HH:MM:SS) : \n");
    scanf("%d:%d:%d", &hp, &mp, &sp);
    printf("Type the arrival time(HH:MM:SS) : \n");
    scanf("%d:%d:%d", &hc, &mc, &sc);
    if(hc>23 || hp>23){
        printf("Invalid Time!!! \n");
        return 0;
    }
    if(mp>59 || mc>59){
        printf("Invalid Time!!! \n");
        return 0;
    }
    if(sp>59 || sc>59){
        printf("Invalid Time!!! \n");
        return 0;
    }
    if(hp>hc){
        hd=(24-hp)+hc;
        if(mp>mc){
            md=60-(mp-mc);
            hd=hd-1;
            if(sp>sc){
                sd=60-(sp-sc);
                md=md-1;
            }
            else{
                sd=sc-sp;
            }
        }
        else{
            md=mc-mp;
            if(sp>sc){
                sd=60-(sp-sc);
                md=md-1;
            }
            else{
                sd=sc-sp;
            }
        }

    }
    else {
        hd = hc - hp;
        if (mp > mc) {
            md = 60 - (mp - mc);
            hd = hd - 1;
            if (sp > sc) {
                sd = 60 - (sp - sc);
                md = md - 1;
            }
            else {
                sd = sc - sp;
            }
        } else {
            md = mc - mp;
            if (sp > sc) {
                sd = 60 - (sp - sc);
                md = md - 1;
            }
            else {
                sd = sc - sp;
            }

        }
    }
    printf("The difference between both times is %d:%d:%d!!! \n", hd, md, sd);
}
