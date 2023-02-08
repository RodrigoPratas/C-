//
// Created by rodrigo on 2/8/23.
//

#include <stdio.h>

int main(){
    double qt;
    int m2, m1 ,m50, m20, m10, m05, m02, m01, qti;
    printf("Type the ammount of money to change for coins : ");
    scanf("%lf", &qt);
    qti = qt * 100;

    m2 =  qti / 200;
    qti = qti % 200;
    printf("%d moedas de 2€\n", m2);

    m1 =  qti / 100;
    qti = qti % 100;
    printf("%d moedas de 1€\n", m1);

    m50 =  qti / 50;
    qti = qti % 50;
    printf("%d moedas de 0.50€\n", m50);

    m20 =  qti / 20;
    qti = qti % 20;
    printf("%d moedas de 0.20€\n", m20);

    m10 =  qti / 10;
    qti = qti % 10;
    printf("%d moedas de 0.10€\n", m10);

    m05 =  qti / 5;
    qti = qti % 5;
    printf("%d moedas de 0.05€\n", m05);

    m02 =  qti / 2;
    qti = qti % 2;
    printf("%d moedas de 0.02€\n", m02);

    m01 =  qti;
    printf("%d moedas de 0.01€\n", m01);
    return 0;
}
