#include<stdio.h>
#include<graphics.h>
int main()
{
   int gd = DETECT, gm;
   int xc,yc,x,y;float p;
   long rx,ry;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   printf("Enter coordinates of centre : ");
   scanf("%d%d",&xc,&yc);
   printf("Enter x,y radius of ellipse: ");
   scanf("%d%d",&rx,&ry);

   //Calculating points for the Region 1
   p=ry*ry-rx*rx*ry+rx*rx/4;
   x=0;y=ry;
   floodfill(2,2,WHITE);
   while(2.0*ry*ry*x <= 2.0*rx*rx*y)
   {
	if(p < 0)
	{
		x++;
		p = p+2*ry*ry*x+ry*ry;
	}
	else
	{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y-ry*ry;
	}
	putpixel(xc+x,yc+y,0);
	putpixel(xc+x,yc-y,0);
	putpixel(xc-x,yc+y,0);
	putpixel(xc-x,yc-y,0);
   }

  //Calculating points for the Region 2
   p=ry*ry*(x+0.5)(x+0.5)+rx*rx(y-1)*(y-1)-rx*rx*ry*ry;
   while(y > 0)
   {
	if(p <= 0)
	{
		x++;y--;
		p = p+2*ry*ry*x-2*rx*rx*y+rx*rx;
	}
	else
	{
		y--;
		p = p-2*rx*rx*y+rx*rx;
	}
	putpixel(xc+x,yc+y,0);
	putpixel(xc+x,yc-y,0);
	putpixel(xc-x,yc+y,0);
	putpixel(xc-x,yc-y,0);
   }
   getch();
   closegraph();
   return 0;
}
