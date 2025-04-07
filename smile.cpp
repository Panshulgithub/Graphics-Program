#include<graphics.h>
#include<stdio.h>
#include<conio.h>
     int main(){
        int gd = DETECT,gm;

        initgraph(& gd, & gm,"C:\\Turboc3\\BGI");

        circle(300,200,100);
        circle(270,180,10);
        circle(330,180,10);

        arc(300,200,200,340,60);

        line(300,190,300,210);

        getch();
        closegraph();

        return 0;
     }