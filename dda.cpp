#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main(){
    int gdriver = DETECT, gmode, x1, y1, x2, y2, i;
    float x, y, dx, dy, steps, Xinc, Yinc;
    printf("Enter value of x1 and y1: ");
    scanf("%d %d",&x1, &y1);
    printf("Enter value of x2 and y2: ");
    scanf("%d %d",&x2, &y2);
    initgraph(&gdriver, &gmode,"c:\\TC\\BGI");
    dx = x2 - x1;
    dy = y2 - y1;
    if(abs(dx)>abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
    Xinc = dx/steps;
    Yinc = dy/steps;
    x = x1;
    y = y1;

    for(i = 0; i < steps; i++){
        putpixel(x, y, 3);
        x = x + Xinc;
        y = y + Yinc;
    }
    getch();
    closegraph();
}
