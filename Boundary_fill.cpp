#include<iostream>
#include<conio.h>
#include<graphics.h>

void boundFill(int x, int y, int f_col, int b_col){
    int current;
    current = getpixel(x, y);
	if(current != b_col && current != f_col){
		putpixel(x,y,f_col);
		delay(0.1);
		boundFill(x+1, y, f_col, b_col);
		boundFill(x-1, y, f_col, b_col);
		boundFill(x, y+1, f_col, b_col);
		boundFill(x, y-1, f_col, b_col);
	}
}


int main(){
	int gd, gm;
	gd = DETECT;
	initgraph(&gd, &gm, " ");
    setcolor(GREEN);
	rectangle(250, 200, 310, 260);

	boundFill(280, 250, RED, GREEN);
	getch();

	closegraph();

}
