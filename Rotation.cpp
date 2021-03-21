#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
#include<math.h>
#define PI atan(1)
void rotation(int, int, int, int, double);
int main(){
    int x1, x2, y1, y2;
    double D;
    int gdriver = DETECT, gmode;
    printf("\nEnter value of X1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);
    printf("\nEnter rotation amount in degree: ");
    scanf("%lf", &D);
    initgraph(&gdriver, &gmode, " ");
    line(x1, y1, x2, y2);
    delay(1000);
    rotation(x1, y1, x2, y2, D);
    closegraph();
}
void rotation(int x1, int y1, int x2, int y2, double D){
    double X1, X2, Y1, Y2, x;
    x = D*PI/180.0;
    X1 = (x1*cos(x)) - (y1*sin(x));
    Y1 = (x1*sin(x)) + (y1*cos(x));
    X2 = (x2*cos(x)) - (y2*sin(x));
    Y2 = (x2*sin(x)) + (y2*cos(x));
    printf("\n x1: %d\t y1: %d\t x2: %d\t y2: %d", X1, Y1, X2, Y2);
    setcolor(YELLOW);
    line(X1, Y1, X2, Y2);
    getch();
}
