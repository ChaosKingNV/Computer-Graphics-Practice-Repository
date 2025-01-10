#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, (char*)"");
    
    line(200, 200, 300, 300);

    getch();
    closegraph();
    return 0;
}