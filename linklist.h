#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
int i,j,k;
void begin()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    outtextxy(300,20,"LINKED LIST");
    delay(1000);
    j=0;
    for(i=100;i<499;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    for(i=110;i<440;i+=150)outtextxy(i,115,"Data");
    for(i=160;i<490;i+=150)outtextxy(i,115,"Next");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    delay(1000);
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    delay(1000);
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    delay(1000);
    setcolor(WHITE);
    /*outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);*/
    for(i=110;i<440;i+=150)outtextxy(i,115,"Data");
    for(i=160;i<490;i+=150)outtextxy(i,115,"Next");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    setcolor(BLACK);
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
}
void insert_at_begin()
{
    char txt[6][100]={"Insertion in singly linked list",
                      "Insertion at the beginning",
                      "Suppose the data 44 is to be inserted at the beginning",
                      "Step-1 : Create a new node",
                      "Step-2 : Assign the new data to the new node",
                      "Step-3 : Link the new node to the head"};
    int txt_pos[6][2]={{220,300},
                        {220,330},
                        {160,350},
                        {150,380},
                        {150,410},
                        {150,440}};
    setcolor(BLACK);
    for(i=0;i<6;i++)
    {
        if(i<3)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    outtextxy(235,230,"44");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(BLACK);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    setcolor(BLACK);
    delay(1000);

    setcolor(WHITE);
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,WHITE);
    }
    j=0;
    for(i=100;i<420;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
            line(i+150,125,i+198,125);
            line(i+190,115,i+198,125);
            line(i+190,135,i+198,125);
        }
        j++;
    }
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    setcolor(BLACK);
    j=0;
    for(i=200;i<660;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    outtextxy(210,115,"11");
    outtextxy(360,115,"22");
    outtextxy(520,115,"33");
    outtextxy(260,115,"Next");
    outtextxy(410,115,"Next");
    outtextxy(560,115,"NULL");
    for(i=200;i<660;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    outtextxy(510,50,"Tail");
    line(515,75,515,95);
    line(510,90,515,95);
    line(520,90,515,95);
    delay(1000);

    setcolor(WHITE);
    outtextxy(235,230,"44");
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,WHITE);
    rectangle(220,220,269,270);
    rectangle(270,220,319,270);
    delay(500);
    setcolor(BLACK);
    rectangle(50,100,99,150);
    rectangle(100,100,149,150);
    outtextxy(60,115,"44");
    outtextxy(110,115,"Next");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(50,100,99,150);
    floodfill(51,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(100,100,149,150);
    floodfill(101,101,BLACK);
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    delay(1000);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    line(150,125,198,125);
    line(190,115,198,125);
    line(190,135,198,125);
    outtextxy(80,160,"Node 1");
    outtextxy(230,160,"Node 2");
    outtextxy(380,160,"Node 3");
    outtextxy(530,160,"Node 4");

    delay(2000);
    for(i=200;i<660;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,WHITE);
    }
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(50,100,99,150);
    floodfill(51,101,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(100,100,149,150);
    floodfill(101,101,WHITE);
    setcolor(WHITE);
    j=0;
    for(i=200;i<660;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    outtextxy(510,50,"Tail");
    line(515,75,515,95);
    line(510,90,515,95);
    line(520,90,515,95);
    rectangle(50,100,99,150);
    rectangle(100,100,149,150);
    outtextxy(60,115,"44");
    outtextxy(110,115,"Next");

    outtextxy(210,115,"11");
    outtextxy(360,115,"22");
    outtextxy(520,115,"33");
    outtextxy(260,115,"Next");
    outtextxy(410,115,"Next");
    outtextxy(560,115,"NULL");
    line(150,125,198,125);
    line(190,115,198,125);
    line(190,135,198,125);
    outtextxy(80,160,"Node 1");
    outtextxy(230,160,"Node 2");
    outtextxy(380,160,"Node 3");
    outtextxy(530,160,"Node 4");
    for(i=1;i<6;i++)
    {
       outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    setcolor(BLACK);
}
void insert_at_index()
{
    delay(1000);
    char txt[7][150]={"Insertion after a node",
                      "Suppose the data 44 is to be inserted after node 1",
                      "Step-1 : Create a new node",
                      "Step-2 : Assign the new data to the new node",
                      "Step-3 : Traverse to the given node 1",
                      "Step-4 : Link the new node with the next node of node 1",
                      "Step-5 : Link the new node as the next node of node 1"};
    int txt_pos[7][2]={{220,330},
                        {150,350},
                        {150,370},
                        {150,390},
                        {150,410},
                        {150,430},
                        {150,450}};
    j=0;
    for(i=100;i<499;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    delay(1000);
    for(i=0;i<7;i++)
    {
        if(i<2)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    outtextxy(235,230,"44");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    delay(1000);

    setcolor(GREEN);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(BLACK);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(100,100,149,150);
    floodfill(101,101,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(100,100,149,150);
    floodfill(101,101,BLACK);
    delay(1000);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(GREEN);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    setcolor(BLACK);
    delay(1000);
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,WHITE);
    }
    setcolor(WHITE);
    j=0;
    for(i=100;i<499;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    setcolor(BLACK);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    rectangle(50,100,99,150);
    rectangle(100,100,149,150);
    for(i=350;i<660;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
    }
    line(450,125,498,125);
    line(490,115,498,125);
    line(490,135,498,125);

    outtextxy(60,115,"11");
    outtextxy(360,115,"22");
    outtextxy(520,115,"33");
    outtextxy(110,115,"Next");
    outtextxy(410,115,"Next");
    outtextxy(560,115,"NULL");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(50,100,99,150);
    floodfill(51,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(100,100,149,150);
    floodfill(101,101,BLACK);
    for(i=350;i<660;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,WHITE);
    setcolor(WHITE);
    outtextxy(235,230,"44");
    rectangle(220,220,269,270);
    rectangle(270,220,319,270);
    setcolor(BLACK);
    delay(500);
    rectangle(200,100,249,150);
    rectangle(250,100,299,150);
    outtextxy(210,115,"44");
    outtextxy(260,115,"Next");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(200,100,249,150);
    floodfill(201,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(250,100,299,150);
    floodfill(251,101,BLACK);
    delay(500);
    outtextxy(80,160,"Node 1");
    outtextxy(230,160,"Node 2");
    outtextxy(380,160,"Node 3");
    outtextxy(530,160,"Node 4");
    delay(1000);
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    outtextxy(510,50,"Tail");
    line(515,75,515,95);
    line(510,90,515,95);
    line(520,90,515,95);
    setcolor(GREEN);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    setcolor(BLACK);
    line(300,125,348,125);
    line(340,115,348,125);
    line(340,135,348,125);
    delay(1000);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    setcolor(GREEN);
    outtextxy(txt_pos[6][0],txt_pos[6][1],txt[6]);
    setcolor(BLACK);
    line(150,125,198,125);
    line(190,115,198,125);
    line(190,135,198,125);
    outtextxy(txt_pos[6][0],txt_pos[6][1],txt[6]);
    delay(2000);
    for(i=50;i<660;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,WHITE);
    }
    setcolor(WHITE);
    j=0;
    for(i=50;i<660;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+250,125,i+298,125);
            line(i+290,115,i+298,125);
            line(i+290,135,i+298,125);
        }
        j++;
    }
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    outtextxy(510,50,"Tail");
    line(515,75,515,95);
    line(510,90,515,95);
    line(520,90,515,95);
    outtextxy(60,115,"11");
    outtextxy(110,115,"Next");
    outtextxy(210,115,"44");
    outtextxy(360,115,"22");
    outtextxy(520,115,"33");
    outtextxy(260,115,"Next");
    outtextxy(410,115,"Next");
    outtextxy(560,115,"NULL");
    line(150,125,198,125);
    line(190,115,198,125);
    line(190,135,198,125);
    outtextxy(80,160,"Node 1");
    outtextxy(230,160,"Node 2");
    outtextxy(380,160,"Node 3");
    outtextxy(530,160,"Node 4");
    for(i=0;i<7;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    setcolor(BLACK);
}
void insert_at_end()
{
    delay(1000);
    char txt[5][150]={"Insertion at the end",
                      "Suppose the data 44 is to be inserted at end",
                      "Step-1 : Create a new node",
                      "Step-2 : Assign the new data to the new node and link the next address as NULL",
                      "Step-3 : Link the last node to the new node"};
    int txt_pos[5][2]={{220,330},
                        {100,360},
                        {100,390},
                        {100,410},
                        {100,430}};
    j=0;
    for(i=100;i<499;i+=150)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<2)
        {
            line(i+100,125,i+148,125);
            line(i+140,115,i+148,125);
            line(i+140,135,i+148,125);
        }
        j++;
    }
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    delay(1000);
    for(i=0;i<5;i++)
    {
        if(i<2)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,WHITE);
    outtextxy(235,230,"44");
    outtextxy(285,230,"NULL");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(220,220,269,270);
    floodfill(221,221,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270,220,319,270);
    floodfill(271,221,BLACK);
    delay(1000);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(BLACK);
    delay(1000);

    for(i=100;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
    }
    for(i=150;i<460;i+=150)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,WHITE);
    }
    setcolor(WHITE);
    for(i=150;i<460;i+=150)
    {
        rectangle(i,100,i+49,150);
    }
    for(i=100;i<420;i+=150)
    {
        rectangle(i,100,i+49,150);
    }
    outtextxy(110,50,"Head");
    line(115,75,115,95);
    line(110,90,115,95);
    line(120,90,115,95);
    outtextxy(460,50,"Tail");
    line(465,75,465,95);
    line(460,90,465,95);
    line(470,90,465,95);
    outtextxy(160,115,"Next");
    outtextxy(310,115,"Next");
    outtextxy(460,115,"NULL");
    outtextxy(110,115,"11");
    outtextxy(260,115,"22");
    outtextxy(420,115,"33");
    outtextxy(130,160,"Node 1");
    outtextxy(280,160,"Node 2");
    outtextxy(430,160,"Node 3");
    line(200,125,248,125);
    line(240,115,248,125);
    line(240,135,248,125);
    line(350,125,398,125);
    line(390,115,398,125);
    line(390,135,398,125);
    setcolor(BLACK);
    outtextxy(60,115,"11");
    outtextxy(110,115,"Next");
    line(300,125,348,125);
    line(340,115,348,125);
    line(340,135,348,125);
    outtextxy(210,115,"22");
    outtextxy(360,115,"33");
    outtextxy(260,115,"Next");
    outtextxy(410,115,"Next");
    line(150,125,198,125);
    line(190,115,198,125);
    line(190,135,198,125);
    for(i=50;i<420;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
    }
    for(i=100;i<460;i+=150)
    {
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
    }
    delay(500);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(220,220,269,270);
    floodfill(221,221,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,220,319,270);
    floodfill(271,221,WHITE);
    setcolor(WHITE);
    rectangle(220,220,269,270);
    rectangle(270,220,319,270);
    outtextxy(235,230,"44");
    outtextxy(285,230,"NULL");
    setcolor(BLACK);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    rectangle(550,100,599,150);
    rectangle(500,100,549,150);
    outtextxy(520,115,"44");
    outtextxy(560,115,"NULL");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(500,100,549,150);
    floodfill(501,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(550,100,599,150);
    floodfill(551,101,BLACK);
    delay(500);
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    outtextxy(510,50,"Tail");
    line(515,75,515,95);
    line(510,90,515,95);
    line(520,90,515,95);
    outtextxy(80,160,"Node 1");
    outtextxy(230,160,"Node 2");
    outtextxy(380,160,"Node 3");
    outtextxy(530,160,"Node 4");
    delay(1000);
    line(450,125,498,125);
    line(490,115,498,125);
    line(490,135,498,125);
}
void begin1()//................................................................deletion..................................................
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    outtextxy(300,20,"LINKED LIST");
    delay(1000);
    j=0;
    for(i=10;i<599;i+=130)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<4)
        {
            setfillstyle(SOLID_FILL,BLUE);
            rectangle(i+100,122,i+128,128);
            floodfill(i+101,123,BLACK);
        }
        j++;
    }
    for(i=20;i<599;i+=130)outtextxy(i,115,"Data");
    for(i=70;i<599;i+=130)outtextxy(i,115,"Next");
    for(i=10;i<599;i+=130)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    delay(1000);
    outtextxy(40,160,"Node 1");
    outtextxy(170,160,"Node 2");
    outtextxy(300,160,"Node 3");
    outtextxy(430,160,"Node 4");
    outtextxy(560,160,"Node 5");
    delay(1000);
    outtextxy(20,50,"Head");
    line(25,75,25,95);
    line(20,90,25,95);
    line(30,90,25,95);
    outtextxy(540,50,"Tail");
    line(545,75,545,95);
    line(540,90,545,95);
    line(550,90,545,95);
    delay(1000);
    setcolor(WHITE);
    outtextxy(20,50,"Head");
    line(25,75,25,95);
    line(20,90,25,95);
    line(30,90,25,95);
    outtextxy(540,50,"Tail");
    line(545,75,545,95);
    line(540,90,545,95);
    line(550,90,545,95);
    for(i=20;i<599;i+=130)outtextxy(i,115,"Data");
    for(i=70;i<599;i+=130)outtextxy(i,115,"Next");
    for(i=10;i<599;i+=130)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    setcolor(BLACK);
    char next[5][10]={"1214","3361","2200","1534","NULL"};
    char val[5][5]={"11","22","33","44","55"};
    for(i=20,j=0;i<599;i+=130,j++)
    {
        outtextxy(i,115,val[j]);
        outtextxy(i+50,115,next[j]);
    }
    for(i=10;i<599;i+=130)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    setcolor(WHITE);
    outtextxy(20,50,"Head");
    line(25,75,25,95);
    line(20,90,25,95);
    line(30,90,25,95);
    setcolor(BLACK);
}
void basic()
{
    outtextxy(300,20,"LINKED LIST");
    delay(1000);
    j=0;
    for(i=10;i<599;i+=130)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<4)
        {
            setfillstyle(SOLID_FILL,BLUE);
            rectangle(i+100,122,i+128,128);
            floodfill(i+101,123,BLACK);
        }
        j++;
    }
    char next[5][10]={"1214","3361","2200","1534","NULL"};
    char val[5][5]={"11","22","33","44","55"};
    for(i=20,j=0;i<599;i+=130,j++)
    {
        outtextxy(i,115,val[j]);
        outtextxy(i+50,115,next[j]);
    }
    for(i=10;i<599;i+=130)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    delay(1000);
    outtextxy(40,160,"Node 1");
    outtextxy(170,160,"Node 2");
    outtextxy(300,160,"Node 3");
    outtextxy(430,160,"Node 4");
    outtextxy(560,160,"Node 5");
    delay(1000);
    outtextxy(20,50,"Head");
    line(25,75,25,95);
    line(20,90,25,95);
    line(30,90,25,95);
    outtextxy(540,50,"Tail");
    line(545,75,545,95);
    line(540,90,545,95);
    line(550,90,545,95);
    delay(1000);
}
void delete_from_begin()
{
    char txt[4][100]={"Deletion in a singly linked list",
                      "Deletion from the beginning",
                      "Step-1 : Point head to the next node",
                      "Step-2 : Free up the memory of the first node"};
    int txt_pos[4][2]={{220,280},
                        {220,350},
                        {160,400},
                        {150,430}};
    setcolor(BLACK);
    for(i=1;i<4;i++)
    {
        if(i<3)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(WHITE);
    setcolor(GREEN);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    outtextxy(20,30,"Head");
    outtextxy(540,50,"Tail");
    line(545,75,545,95);
    line(540,90,545,95);
    line(550,90,545,95);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(10,100,59,150);
    floodfill(11,101,BLACK);
    delay(1000);
    int point[]={20,60,20,80,110,80,110,90,140,70,110,50,110,60,20,60};
    drawpoly(8, point);
    setfillstyle(SOLID_FILL,BLUE);
    fillpoly(8, point);
    floodfill(20,60,BLACK);
    delay(1000);
    setcolor(WHITE);
    outtextxy(20,30,"Head");
    setcolor(BLACK);
    outtextxy(150,30,"Head");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(10,100,59,150);
    floodfill(11,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(140,100,189,150);
    floodfill(141,101,BLACK);
    delay(1000);
    setcolor(WHITE);
    drawpoly(8, point);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(8, point);
    setcolor(BLACK);
    line(155,75,155,95);
    line(150,90,155,95);
    line(160,90,155,95);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(140,100,189,150);
    floodfill(141,101,BLACK);
    delay(1000);
    setcolor(BLACK);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(10+100,122,10+128,128);
    floodfill(10+101,123,BLACK);
    setcolor(WHITE);
    rectangle(10+100,122,10+128,128);
    setcolor(BLACK);

    delay(1000);
    i=10;
    setcolor(WHITE);
    outtextxy(20,115,"11");
    outtextxy(70,115,"1214");
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(i,100,i+49,150);
    floodfill(i+1,101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(i+50,100,i+99,150);
    floodfill(i+51,101,BLACK);
    delay(1000);
    i=10;
    setcolor(WHITE);
    outtextxy(20,115,"11");
    outtextxy(70,115,"1214");
    outtextxy(40,160,"Node 1");
    outtextxy(170,160,"Node 2");
    outtextxy(300,160,"Node 3");
    outtextxy(430,160,"Node 4");
    outtextxy(560,160,"Node 5");

    setfillstyle(SOLID_FILL,WHITE);
    rectangle(i,100,i+49,150);
    floodfill(i+1,101,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(i+50,100,i+99,150);
    floodfill(i+51,101,WHITE);
    setcolor(BLACK);
    outtextxy(170,160,"Node 1");
    outtextxy(300,160,"Node 2");
    outtextxy(430,160,"Node 3");
    outtextxy(560,160,"Node 4");
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    delay(2000);
}
void delete_from_mid()
{
    cleardevice();
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(1,1,1,280);
    floodfill(2,2,WHITE);
    setcolor(BLACK);
    basic();
    char txt[7][200]={"Deletion of a given node",
                      "Suppose, we are deleting node-3",
                      "Step-1 : Traverse to the given node",
                      "Step-2 : Change the next address of the previous node",
                      "         by the next address of current node",
                      "Step-3 : Link the previous node with the next node of the current node",
                      "Step-4 : Free up the memory of the given node"};
    int txt_pos[7][2]={{220,330},
                        {150,350},
                        {150,370},
                        {150,390},
                        {150,410},
                        {150,430},
                        {150,450}};
    setcolor(BLACK);
    for(i=0;i<7;i++)
    {
        if(i<2)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    i=10;
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(i,100,i+49,150);
    floodfill(i+1,101,BLACK);
    delay(1000);
    for(i=140;i<300;i+=130)
    {
        delay(2000);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i-130,100,i+49-130,150);
        floodfill(i+1-130,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
    }
    setcolor(BLACK);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    delay(2000);
    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(190,100,139,150);
    floodfill(191,101,BLACK);
    delay(2000);
    setcolor(YELLOW);
    outtextxy(200,115,"3361");
    setcolor(BLACK);
    outtextxy(200,115,"2200");
    delay(2000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(190,100,139,150);
    floodfill(191,101,BLACK);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(240,122,268,128);
    floodfill(241,123,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(370,122,398,128);
    floodfill(371,123,BLACK);
    setcolor(WHITE);
    rectangle(240,122,268,128);
    rectangle(370,122,398,128);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(270,100,319,150);
    floodfill(271,101,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,100,270+49,150);
    floodfill(270+1,101,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270+50,100,270+99,150);
    floodfill(270+51,101,WHITE);
    setcolor(WHITE);
    rectangle(270,100,270+49,150);
    rectangle(270+50,100,270+99,150);
    outtextxy(300,160,"Node 3");
    outtextxy(280,115,"33");
    outtextxy(330,115,"2200");
    delay(1000);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(270,170,270+49,220);
    floodfill(271,171,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(270+50,170,270+99,220);
    floodfill(270+51,171,BLACK);
    outtextxy(280,185,"33");
    outtextxy(330,185,"2200");
    outtextxy(300,230,"Node 3");
    delay(1000);
    setfillstyle(SOLID_FILL,BLUE);
    rectangle(240,122,398,128);
    floodfill(241,123,BLACK);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[6][0],txt_pos[6][1],txt[6]);
    setcolor(BLACK);
    delay(1000);
    setcolor(WHITE);
    outtextxy(280,185,"33");
    setcolor(WHITE);
    outtextxy(330,185,"2200");
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270,170,270+49,220);
    floodfill(271,171,BLACK);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(270+50,170,270+99,220);
    floodfill(270+51,171,BLACK);
    setcolor(WHITE);
    rectangle(270,170,270+49,220);
    rectangle(270+50,170,270+99,220);
    outtextxy(300,230,"Node 3");
    outtextxy(430,160,"Node 4");
    outtextxy(560,160,"Node 5");
    setcolor(BLACK);
    outtextxy(txt_pos[6][0],txt_pos[6][1],txt[6]);
    outtextxy(430,160,"Node 3");
    outtextxy(560,160,"Node 4");
    delay(1000);
    cleardevice();
    setcolor(BLACK);
    for(i=0;i<7;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    outtextxy(300,20,"LINKED LIST");
    j=0;
    for(i=50;i<450;i+=130)
    {
        rectangle(i,100,i+49,150);
        rectangle(i+50,100,i+99,150);
        if(j<3)
        {
            setfillstyle(SOLID_FILL,BLUE);
            rectangle(i+100,122,i+128,128);
            floodfill(i+101,123,BLACK);
        }
        j++;
    }
    char next[4][10]={"1214","3361","1534","NULL"};
    char val[4][5]={"11","22","44","55"};
    for(i=60,j=0;i<480;i+=130,j++)
    {
        outtextxy(i,115,val[j]);
        outtextxy(i+50,115,next[j]);
    }
    for(i=50;i<450;i+=130)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i+50,100,i+99,150);
        floodfill(i+51,101,BLACK);
    }
    delay(1000);
    outtextxy(80,160,"Node 1");
    outtextxy(210,160,"Node 2");
    outtextxy(340,160,"Node 3");
    outtextxy(470,160,"Node 4");
    delay(1000);
    outtextxy(60,50,"Head");
    line(65,75,65,95);
    line(60,90,65,95);
    line(70,90,65,95);
    outtextxy(450,50,"Tail");
    line(450,75,450,95);
    line(445,90,450,95);
    line(455,90,450,95);
    delay(3000);

}
void delete_from_end()
{
    cleardevice();
    setcolor(BLACK);
    outtextxy(220,280,"Deletion in singly linked list");
    outtextxy(300,20,"LINKED LIST");
    setcolor(BLACK);
    char next[5][10]={"1214","3361","2200","1534","NULL"};
    char val[5][5]={"11","22","33","44","55"};
    for(i=20,j=0;i<599;i+=130,j++)
    {
        outtextxy(i,115,val[j]);
        outtextxy(i+50,115,next[j]);
    }
    basic();
    char txt[4][200]={"Deletion of the last node",
                      "Step-1 : Traverse to the previous node of the last node",
                      "Step-2 : Set the next address of the current node as NULL",
                      "Step-3 : Free up the memory of the last node"};
    int txt_pos[4][2]={{220,330},
                        {150,350},
                        {150,370},
                        {150,390}};
    setcolor(BLACK);
    for(i=0;i<4;i++)
    {
        if(i<2)delay(1000);
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    setcolor(BLACK);
    delay(1000);
    i=10;
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(i,100,i+49,150);
    floodfill(i+1,101,BLACK);
    for(i=10;i<400;i+=130)
    {
        delay(1000);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,100,i+49,150);
        floodfill(i+1,101,BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i+130,100,i+49+130,150);
        floodfill(i+131,101,BLACK);
    }
    delay(1000);
    setcolor(BLACK);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(2000);
    setcolor(GREEN);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(60+(130*3),100,109+(130*3),150);
    floodfill(61+(130*3),101,BLACK);
    delay(1000);
    setcolor(WHITE);
    outtextxy(70+(130*3),115,next[3]);
    setcolor(BLACK);
    outtextxy(70+(130*3),115,"NULL");
    delay(1000);
    setcolor(WHITE);
    outtextxy(540,50,"Tail");
    line(545,75,545,95);
    line(540,90,545,95);
    line(550,90,545,95);
    setcolor(BLACK);
    outtextxy(425,50,"Tail");
    line(425,75,425,95);
    line(420,90,425,95);
    line(430,90,425,95);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(10+(130*3),100,59+(130*3),150);
    floodfill(11+(130*3),101,BLACK);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(60+(130*3),100,109+(130*3),150);
    floodfill(61+(130*3),101,BLACK);

    setcolor(GREEN);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    delay(1000);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(500,122,528,128);
    floodfill(501,123,BLACK);
    setcolor(WHITE);
    rectangle(500,122,528,128);
    delay(1000);
    outtextxy(540,115,val[4]);
    outtextxy(590,115,next[4]);
    delay(1000);
    outtextxy(560,160,"Node 5");
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(530,100,579,150);
    floodfill(531,101,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(580,100,629,150);
    floodfill(581,101,WHITE);
    rectangle(530,100,579,150);
    rectangle(580,100,629,150);
    delay(1000);
    setcolor(BLACK);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
}
void linkedlist_insertion()
{
    begin();
    insert_at_begin();
    insert_at_index();
    insert_at_end();
}
void linkedlist_deletion()
{
    begin1();
    delete_from_begin();
    delete_from_mid();
    delete_from_end();
}
