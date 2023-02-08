#include <stdio.h>
#include <math.h>

int main(){
	int n1, n2, y1, y2, l1, l2;
    double d;
	printf("Type the values n1, n2, y1, y2 : ");
	scanf("%d,%d,%d,%d", &n1, &n2, &y1, &y2);
	l1= n2-n1;
	l2= y2-y1;
	d = sqrt(l1*l1 + l2*l2);
	printf("The distance between p1(%d,%d) and p2(%d,%d) is =%lf \n", n1, n2, y1, y2, d);
	return 0;
}
//
// Created by rodrigo on 2/7/23.
//
