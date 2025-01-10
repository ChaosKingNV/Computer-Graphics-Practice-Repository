#include<stdio.h>
#include <graphics.h>
#include<conio.h>

int main()
{
   int gdriver = DETECT, gmode;

   initgraph(&gdriver, &gmode, (char*)"");

   outtextxy(200, 150, "Program to draw using Graphics Mode");

    setfillstyle(HATCH_FILL, RED);
    bar (150, 150, 200, 350);
    setfillstyle(HATCH_FILL, BLUE); 
    bar (200, 80, 250, 350);
    setfillstyle(HATCH_FILL, GREEN);
    bar (250, 80, 300, 350);


    getch();
    closegraph();

   return 0;
}