#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<conio.h>
void back()
{
    settextstyle(4,0,1);
    outtextxy(10,15,"A");
    outtextxy(60,20,"BACK");
    setfillstyle(SOLID_FILL,LIGHTGRAY);
    circle(31,31,26);
    floodfill(32,32,BLACK);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(30,30,25);
    floodfill(31,31,BLACK);
}
void press(int x,int y)//button yellow
{
    setfillstyle(SOLID_FILL,YELLOW);
    circle(x,y,25);
    floodfill(x+1,y+1,BLACK);
    delay(500);
}
void screen1()//data structure,algorithm
{
    settextstyle(4,0,3);
    char txt[8][100]={"Data Structure & Algorithm",
                      "Visualization System",
                      "A","Data Structure",
                      "B","Algorithm",
                      "C","End Program"};
    int xy[8][2]={{100,50},
                  {150,100},
                  {80,235},
                  {130,240},
                  {80,335},
                  {130,340},
                  {80,435},
                  {130,440}};
    int i;
    for(i=0;i<8;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<460;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen2()//linear,non-linear
{
    char txt[7][100]={"Data Structures",
                     "A","Linear Data Structure",
                     "B","Non-linear Data Structure",
                     "C","Back"};
    int xy[7][2]={{150,50},
                  {80,235},
                  {130,240},
                  {80,335},
                  {130,340},
                  {80,435},
                  {130,440}};
    int i;
    for(i=0;i<7;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<460;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen3()//array,linklist,stack,queue
{
    char txt[13][100]={"Linear Data Structure",
                     "A","Array",
                     "B","Linked-list",
                     "C","Stack",
                     "D","Queue",
                     "E","String",
                     "F","Back"};
    int xy[13][2]={{150,50},
                   {80,235},
                   {130,240},
                   {80,335},
                   {130,340},
                   {80,435},
                   {130,440},
                   {320,235},//left side last
                   {370,240},
                   {320,335},
                   {370,340},
                   {320,435},
                   {370,440}};
    int i;
    for(i=0;i<13;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250,j=0;j<3;i+=100,j++)//i<460
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
    for(i=250,j=0;j<3;i+=100,j++)//i<460
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(341,i+1,26);
        floodfill(342,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(340,i,25);
        floodfill(341,i+1,BLACK);
    }
}
void screen4()// linked list insertion and deletion
{
    char txt[7][100]={"Linked-list",
                     "A","Linled-list Insertion",
                     "B","Linked-list Deletion",
                     "C","Back"};
    int xy[7][2]={{150,50},
                  {80,235},
                  {130,240},
                  {80,335},
                  {130,340},
                  {80,435},
                  {130,440}};
    int i;
    for(i=0;i<7;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<460;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen5()
{
    char txt[9][100]={"Binary Tree Traversal",
                     "A","Pre-order Traversal",
                     "B","In-order Traversal",
                     "C","Post-order Traversal",
                     "D","Back"};
    int xy[9][2]={{150,50},
                   {80,235},
                   {130,240},
                   {80,285},
                   {130,290},
                   {80,335},
                   {130,340},
                   {80,385},
                   {130,390}};
    int i;
    for(i=0;i<9;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<410;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen6()
{
    char txt[9][100]={"Algorithm",
                     "A","Searching ",
                     "B","Sorting ",
                     "C","Minimum Spanning Tree",
                     "D","Back"};
    int xy[9][2]={{150,50},
                   {80,235},
                   {130,240},
                   {80,285},
                   {130,290},
                   {80,335},
                   {130,340},
                   {80,385},
                   {130,390}};
    int i;
    for(i=0;i<9;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<410;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen7()
{
    char txt[5][100]={"Searching Algorithm",
                     "A","Binary Search",
                     "B","Back"};
    int xy[5][2]={{150,50},
                   {80,235},
                   {130,240},
                   {80,335},
                   {130,340}};
    int i;
    for(i=0;i<5;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<360;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen8()
{
    char txt[5][100]={"Sorting Algorithm",
                     "A","Bubble Sort",
                     "B","Back"};
    int xy[5][2]={{150,50},
                   {80,235},
                   {130,240},
                   {80,335},
                   {130,340}};
    int i;
    for(i=0;i<5;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<360;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}
void screen9()
{
    char txt[7][100]={"Minimum Spanning Tree",
                     "A","Prim's Algorithm",
                     "B","Kruskal's Algorithm",
                     "C","Back"};
    int xy[7][2]={{150,50},
                  {80,235},
                  {130,240},
                  {80,335},
                  {130,340},
                  {80,435},
                  {130,440}};
    int i;
    for(i=0;i<7;i++)
    {
        outtextxy(xy[i][0],xy[i][1],txt[i]);
    }
    for(i=250;i<460;i+=100)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle(101,i+1,26);
        floodfill(102,i+2,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(100,i,25);
        floodfill(101,i+1,BLACK);
    }
}

