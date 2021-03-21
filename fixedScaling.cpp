#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<dos.h>
void fixedScaling(int, int, int, int, double, double);
int main(){
    int x1, x2, y1, y2;
    double sx, sy;
    int gdriver = DETECT, gmode;
    printf("\nEnter value of X1 and y1: ");
    scanf("%d %d", &x1, &y1);
    printf("\nEnter value of x2 and y2: ");
    scanf("%d %d", &x2, &y2);
    printf("\nEnter scaled factors: ");
    scanf("%lf %lf", &sx, &sy);
    initgraph(&gdriver, &gmode, " ");
    rectangle (x1, y1, x2, y2);
    delay(1000);
    fixedScaling (x1, y1, x2, y2, sx, sy);
    closegraph();
}
void fixedScaling(int x1, int y1, int x2, int y2, double sx, double sy){
    x2  = (x2-x1)*sx;
    y2 = (y2-y1)*sy;
    printf("\n x1: %d\t y1: %d\t x2: %d\t y2: %d", x1, y1, x2, y2);
    setcolor(YELLOW);
    rectangle(x1,y1, x1+x2, y1+y2);
    getch();
}
