#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<string.h>
void kruskals_algorithm()
{
int rad=20; //Radius of the circles

int G[7][7]={{0,0,0,0,0,0,0},//GRAPH
             {0,0,7,0,0,0,8},
             {0,7,0,6,0,4,3},
             {0,0,6,0,5,2,0},
             {0,0,0,5,0,2,0},
             {0,0,4,2,2,0,3},
             {0,8,3,0,0,3,0}};

int centre[7][2]={{0,0},  //Centres of the circles
                  {40,200},
                  {110,90},
                  {390,90},
                  {460,200},
                  {390,310},
                  {110,310}};

int l[10][4]={{0,0,0,0},     //Two corners of the edges
              {90,100,40,180},
              {130,90,370,90},
              {410,90,460,180},
              {460,220,410,300},
              {130,310,370,310},
              {40,220,90,300},
              {110,110,110,290},
              {125,105,375,295},
              {390,110,390,290}};

int lw[10][2]={{0,0},     //centre of the text for the weight of the edges
               {65,115},
               {250,70},
               {450,130},
               {450,260},
               {250,330},
               {50,250},
               {120,200},
               {250,210},
               {380,200}};
char ch[10][2]={{'0'},{'7'},{'6'},{'5'},{'2'},{'3'},{'8'},{'3'},{'4'},{'2'}}; // Weights of the vertices
char sd[10][3]={{'D','E'},//weight source destination
                {'C','E'},
                {'B','F'},
                {'E','f'},
                {'B','E'},
                {'C','D'},
                {'B','C'},
                {'A','B'},
                {'A','F'}};
char w[10][2]={{'2'},{'2'},{'3'},{'3'},{'4'},{'5'},{'6'},{'7'},{'8'}};//weights

    int i,j,k,x=120;
    int gd=DETECT,gm;
    char c[1],d[1];
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=1;i<=6;i++)
    {
        circle(centre[i][0],centre[i][1],rad);
        c[0]=(char)(i+64);
        outtextxy(centre[i][0]-5,centre[i][1]-5,c);//node number draw
    }
    for(i=1;i<=9;i++)
    {
        line(l[i][0],l[i][1],l[i][2],l[i][3]);//edge dra
        outtextxy(lw[i][0],lw[i][1],ch[i]);//weight draw
    }

    for(i=1;i<=6;i++)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]+5,centre[i][1]+5,BLACK);
    }
    delay(1000);
    setcolor(BLACK);
    outtextxy(80,20,"Sort all the edges in the increasing order of weight");
    delay(1000);
    outtextxy(100,350,"Edges in the increasing order of weight : ");
    for(i=1,j=70;i<11;i++,j+=50)
    {
        rectangle(j,375,j+50,410);
        rectangle(j,410,j+50,445);
    }
    outtextxy(73,378,"Edge:");
    outtextxy(71,411,"Weight:");
    for(i=0,j=125;i<9;i++,j+=50)
    {
        outtextxy(j,379,sd[i]);//sorted edge write
        outtextxy(j,412,w[i]);//weight
    }
    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(70,375,70+50,410);
    floodfill(71,376,BLACK);
    setfillstyle(SOLID_FILL,LIGHTRED);
    rectangle(70,410,70+50,445);
    floodfill(71,411,BLACK);
    for(i=1,j=120;i<10;i++,j+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(j,375,j+50,410);
        floodfill(j+1,376,BLACK);
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(j,410,j+50,445);
        floodfill(j+1,411,BLACK);
    }
    delay(1000);
    setcolor(WHITE);
    outtextxy(80,20,"Sort all the edges in the increasing order of weight");
    setcolor(BLACK);
    outtextxy(80,20,"Take the edge with the lowest weight and add it to the spanning tree");
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[4][0],centre[4][1],rad);
    floodfill(centre[4][0]-5,centre[4][1]-5,BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[5][0],centre[5][1],rad);
    floodfill(centre[5][0]-5,centre[5][1]-5,BLACK);
    setcolor(YELLOW);
    line(l[4][0],l[4][1],l[4][2],l[4][3]);//edge 1
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[4][0],centre[4][1],rad);
    floodfill(centre[4][0]-5,centre[4][1]-5,BLACK);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[5][0],centre[5][1],rad);
    floodfill(centre[5][0]-5,centre[5][1]-5,BLACK);
    setcolor(GREEN);
    setlinestyle(0,0,3);
    line(l[4][0],l[4][1],l[4][2],l[4][3]);
    setcolor(BLACK);
    setlinestyle(0,0,1);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[3][0],centre[3][1],rad);
    floodfill(centre[3][0]-5,centre[3][1]-5,BLACK);
    setcolor(YELLOW);
    line(l[9][0],l[9][1],l[9][2],l[9][3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[3][0],centre[3][1],rad);
    floodfill(centre[3][0]-5,centre[3][1]-5,BLACK);
    setcolor(GREEN);
    setlinestyle(0,0,3);
    line(l[9][0],l[9][1],l[9][2],l[9][3]);
    setcolor(BLACK);
    setlinestyle(0,0,1);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[2][0],centre[2][1],rad);
    floodfill(centre[2][0]-5,centre[2][1]-5,BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[6][0],centre[6][1],rad);
    floodfill(centre[6][0]-5,centre[6][1]-5,BLACK);
    setcolor(YELLOW);
    line(l[7][0],l[7][1],l[7][2],l[7][3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    setfillstyle(SOLID_FILL,LIGHTGREEN);x+=50;
    circle(centre[2][0],centre[2][1],rad);
    floodfill(centre[2][0]-5,centre[2][1]-5,BLACK);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[6][0],centre[6][1],rad);
    floodfill(centre[6][0]-5,centre[6][1]-5,BLACK);
    setcolor(GREEN);
    setlinestyle(0,0,3);
    line(l[7][0],l[7][1],l[7][2],l[7][3]);
    setcolor(BLACK);
    setlinestyle(0,0,1);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setcolor(YELLOW);
    line(l[5][0],l[5][1],l[5][2],l[5][3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setcolor(GREEN);
    setlinestyle(0,0,3);
    line(l[5][0],l[5][1],l[5][2],l[5][3]);
    setcolor(BLACK);
    setlinestyle(0,0,1);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setcolor(YELLOW);
    line(l[8][0],l[8][1],l[8][2],l[8][3]);
    setcolor(BLACK);
    delay(1000);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    delay(1500);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setcolor(WHITE);
    line(l[8][0],l[8][1],l[8][2],l[8][3]);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    outtextxy(lw[8][0],lw[8][1],ch[8]);
    setcolor(BLACK);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setcolor(YELLOW);
    line(l[3][0],l[3][1],l[3][2],l[3][3]);
    setcolor(BLACK);
    delay(1000);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    delay(1500);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setcolor(WHITE);
    line(l[3][0],l[3][1],l[3][2],l[3][3]);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    outtextxy(lw[3][0],lw[3][1],ch[3]);
    setcolor(BLACK);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setcolor(YELLOW);
    line(l[2][0],l[2][1],l[2][2],l[2][3]);
    setcolor(BLACK);
    delay(1000);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    delay(1500);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setcolor(WHITE);
    line(l[2][0],l[2][1],l[2][2],l[2][3]);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    outtextxy(lw[2][0],lw[2][1],ch[2]);
    setcolor(BLACK);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[1][0],centre[1][1],rad);
    floodfill(centre[1][0]-5,centre[1][1]-5,BLACK);
    setcolor(YELLOW);
    line(l[1][0],l[1][1],l[1][2],l[1][3]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[1][0],centre[1][1],rad);
    floodfill(centre[1][0]-5,centre[1][1]-5,BLACK);
    setcolor(GREEN);
    setlinestyle(0,0,3);
    line(l[1][0],l[1][1],l[1][2],l[1][3]);
    setcolor(BLACK);
    setlinestyle(0,0,1);
    delay(1000);

    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);
    delay(1000);
    setcolor(YELLOW);
    line(l[6][0],l[6][1],l[6][2],l[6][3]);
    setcolor(BLACK);
    delay(1000);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    delay(1500);
    setfillstyle(SOLID_FILL,LIGHTBLUE);
    rectangle(x,410,x+50,445);
    floodfill(x+1,411,BLACK);x+=50;
    setcolor(WHITE);
    line(l[6][0],l[6][1],l[6][2],l[6][3]);
    outtextxy(80,40,"If adding the edge created a cycle,then reject this edge");
    //outtextxy(450,15,"CREATES CYCLE!!!");
    outtextxy(lw[6][0],lw[6][1],ch[6]);
    setcolor(BLACK);
    delay(1000);

    setcolor(WHITE);
    outtextxy(80,20,"Take the edge with the lowest weight and add it to the spanning tree");
    outtextxy(100,350,"Edges in the increasing order of weight : ");
    /*for(i=1,j=70;i<11;i++,j+=50)
    {
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(j,375,j+50,410);
        floodfill(j+1,376,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(j,410,j+50,445);
        floodfill(j+1,411,WHITE);
    }
    setcolor(WHITE);
    for(i=1,j=70;i<11;i++,j+=50)
    {
        rectangle(j,375,j+50,410);
        rectangle(j,410,j+50,445);
    }
    outtextxy(73,378,"Edge:");
    outtextxy(71,411,"Weight:");
    for(i=0,j=125;i<9;i++,j+=50)
    {
        outtextxy(j,379,sd[i]);
        outtextxy(j,412,w[i]);
    }*/
    setcolor(BLACK);

    outtextxy(200,20,"The final minimum spanning tree");
    delay(1000);
    //getch();
    //closegraph();
}


