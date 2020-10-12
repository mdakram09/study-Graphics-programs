#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main(){
    int gdriver = DETECT, gmode, x1, y1, x2, y2, x, y, dx, dy, p, i;
    printf("Enter value of x1 and y1: ");
    scanf("%d %d",&x1, &y1);
    printf("Enter value of x2 and y2: ");
    scanf("%d %d",&x2, &y2);
    initgraph(&gdriver, &gmode,"c:\\TC\\BGI");
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2*dy - dx;
    x = x1;
    y = y1;
    for(i = 0; i < dx; i++){
        putpixel(x, y, 3);
        if(p < 0){
            x = x+1;
            p = p + 2*dy;
        }
        else{
            x = x+1;
            y = y+1;
            p = p + 2*dy - 2*dx;
        }
    }
    getch();
    closegraph();
}
