#include<graphics.h>
#include<conio.h>
#include<iostream>
#include<cmath>

using namespace std;

void bresenham(int x1, int y1, int x2, int y2)
{
	int dx = abs(x1- x2), dy = abs(y1 - y2);
	int x, y, end;

	if(x1 != x2)
	{
		int twoDy = 2*dy, twoDyDX = 2*(dy-dx);
		int step = dy!=0? (y2-y1)/abs(dy) : 0;
		int p = 2 * dy - dx;
		if(x1 > x2)
		{
			x = x2;
			y = y2;
			end = x1;
		}

		else
		{
			x = x1;
			y = y1;
			end = x2;
		}

		putpixel(x, y, WHITE);

		while(x <= end)
		{
			x++;
			if(p > 0)
			{
				y += step;
				p += twoDyDX;
			}
			else
			{
				p += twoDy;
			}
			putpixel(x, y, WHITE);
		}
	}

	else
	{
		int twoDy = 2*dx, twoDyDX = 2*(dx-dy);
		int step = dx!=0? (x1-x2)/abs(dx) : 0;
		int p = 2 * dx - dy;
		if(y1 > y2)
		{
			x = x2;
			y = y2;
			end = y1;
		}

		else
		{
			x = x1;
			y = y1;
			end = y2;
		}

		putpixel(x, y, WHITE);

		while(y <= end)
		{
			y++;
			if(p > 0)
			{
				x += step;
				p += twoDyDX;

			}
			else
			{
				p += twoDy;
			}
			putpixel(x, y, WHITE);
		}
	}
}

int main()
{
	initwindow(800, 800);
//	bresenham(100, 100, 200, 100);
	bresenham(100, 100, 100, 200);
//	bresenham(100, 100, 150, 250);
//	bresenham(100, 250, 200, 50);
	getch();
	closegraph();
}
