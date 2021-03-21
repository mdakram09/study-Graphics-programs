#include<iostream>
#include<conio.h>
#include<graphics.h>


void floodFill(int x, int y, int newcol, int oldcol){
	if(getpixel(x,y) == oldcol){

		putpixel(x,y,newcol);
        delay(0.1);
		floodFill(x+1, y, newcol, oldcol);
		floodFill(x-1, y, newcol, oldcol);
		floodFill(x, y+1, newcol, oldcol);
		floodFill(x, y-1, newcol, oldcol);
	}
}


int main(){
	int x, y,gm, gd = DETECT;

	initgraph(&gd, &gm, " ");

    rectangle(50,50,100,100);
	floodFill(55, 55, 4, 0);
	getch();

	closegraph();

}
