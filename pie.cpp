#include<stdio.h>
#include <graphics.h>
#include<conio.h>

int main()
{
   int gdriver = DETECT, gmode;

   initgraph(&gdriver, &gmode, (char*)"");

   outtextxy(120, 50, "Pie Chart");

    setfillstyle(HATCH_FILL, RED);
    pieslice (200, 200, 0, 90, 100);
    setfillstyle(HATCH_FILL, BLUE); 
    pieslice (200, 200, 90, 150, 100);
    setfillstyle(HATCH_FILL, GREEN);
    pieslice (200, 200, 150, 360, 100);


    getch();
    closegraph();

   return 0;
}