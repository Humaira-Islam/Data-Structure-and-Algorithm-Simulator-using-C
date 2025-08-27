#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void rear(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    drawpoly(4,point);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(4, point);
    floodfill(501,x+1,BLACK);
    outtextxy(530,x-10,"Rear");
}
void remove_rear(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4, point);
    floodfill(501,x+1,WHITE);
    setcolor(WHITE);
    drawpoly(4,point);
    outtextxy(530,x-10,"Rear");
}
void front(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    drawpoly(4,point);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(4, point);
    floodfill(501,x+1,BLACK);
    outtextxy(530,x-10,"Front");
    outtextxy(250,x-10,"First Out");
}
void remove_front(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4, point);
    floodfill(501,x+1,WHITE);
    setcolor(WHITE);
    drawpoly(4,point);
    outtextxy(530,x-10,"Front");
    outtextxy(250,x-10,"First Out");
}
void enqueue()
{
    int i,j,k,l;
    char val[6][5]={"A","B","C","D","E","F"};
    int rear_pos=425;
    char txt[6][100]={"ENQUEUE Operation",
                   "If queue is full",
                   "produce overflow",
                   "else ",
                   "assign value to queue[rear]"};
    int txt_pos[6][2]={{50,170},
                    {10,220},
                    {10,250},
                    {10,300},
                    {10,330}};
    settextstyle(4,0,1);
    setcolor(BLACK);
    for(i=0;i<5;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    for(i=0;i<5;i++)
    {
        delay(1000);
        setcolor(GREEN);
        outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
        delay(1000);
        setcolor(BLACK);
        outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
        setcolor(GREEN);
        outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
        delay(1000);
        outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
        setcolor(BLACK);
        delay(1000);
        setcolor(BLACK);
        if(i==1)
        {
            outtextxy(530,rear_pos-10,"Front");
        }
        else remove_rear(rear_pos);
        setcolor(BLACK);
        rear_pos-=50;
        rear(rear_pos);
        outtextxy(340,110,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(300,100,387,148);
        floodfill(301,101,BLACK);
        delay(1000);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(300,100,387,148);
        floodfill(301,101,BLACK);
        setcolor(WHITE);
        rectangle(300,100,387,148);
        outtextxy(340,110,val[i]);
        setcolor(BLACK);
        outtextxy(440,170,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(401,150,488,198);
        floodfill(402,151,BLACK);
        for(j=150;j<rear_pos-25;j+=50)
        {
            delay(500);
            setcolor(WHITE);
            outtextxy(440,j+20,val[i]);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            rectangle(401,j,488,j+48);
            floodfill(402,j+1,BLACK);
            setcolor(BLACK);
            outtextxy(440,j+70,val[i]);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            rectangle(401,j+50,488,j+98);
            floodfill(402,j+51,BLACK);
        }
        setcolor(BLACK);
        outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
        outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    }
    outtextxy(340,110,val[i]);
    setfillstyle(SOLID_FILL,LIGHTGREEN);//over flow rectangle
    rectangle(300,100,387,148);
    floodfill(301,101,BLACK);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    for(k=300;k<700;k+=20)//overflow remove
    {
        delay(100);
        setcolor(WHITE);
        outtextxy(k+40,110,val[i]);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(k,100,k+87,148);
        floodfill(k+1,101,WHITE);
        setcolor(WHITE);
        outtextxy(k+40,110,val[i]);
        rectangle(k,100,k+87,148);
        setcolor(BLACK);
        outtextxy(k+40+20,110,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(k+20,100,k+107,148);
        floodfill(k+21,101,BLACK);
    }
    setcolor(BLACK);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(2000);
    setcolor(WHITE);
    for(i=0;i<5;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
}
void dequeue()
{
    int i,j,k,l;
    char txt[6][100]={"Dequeue Operation",
                   "If queue is empty",
                   "return underflow",
                   "else ",
                   "return the front"};
    int txt_pos[5][2]={{50,130},
                    {10,220},
                    {10,250},
                    {10,300},
                    {10,330}};
    char val[5][5]={"A","B","C","D","E"};
    settextstyle(4,0,1);
    setcolor(BLACK);
    for(i=0;i<5;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    int pos=350;
    for(i=0;i<5;i++)
    {
        delay(1000);
        setcolor(GREEN);
        outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
        delay(1000);
        setcolor(BLACK);
        outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
        setcolor(GREEN);
        outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
        delay(1000);
        outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
        setcolor(BLACK);
        delay(1000);
        for(j=pos;j<=350;j+=50)
        {
            delay(500);
            setcolor(WHITE);
            outtextxy(440,j+20,val[i]);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            rectangle(401,j,488,j+48);
            floodfill(402,j+1,BLACK);
            outtextxy(440,j+70,val[i]);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            rectangle(401,j+50,488,j+98);
            floodfill(402,j+51,BLACK);
        }
        remove_front(pos+25);
        setcolor(BLACK);
        pos-=50;
        front(pos+25);
        for(k=401;k<700;k+=20)
        {
            delay(100);
            setcolor(WHITE);
            outtextxy(k+40,420,val[i]);
            setfillstyle(SOLID_FILL,WHITE);
            rectangle(k,400,k+87,448);
            floodfill(k+1,401,WHITE);
            setcolor(WHITE);
            outtextxy(k+40,420,val[i]);
            rectangle(k,400,k+87,448);
            setcolor(BLACK);
            outtextxy(k+40+20,420,val[i]);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            rectangle(k+20,400,k+107,448);
            floodfill(k+21,401,BLACK);
        }
    }
    setcolor(BLACK);
    outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
    setcolor(GREEN);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    delay(1000);
    setcolor(BLACK);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
}
void queue()
{
    int i,j,k,l;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    delay(1000);
    setcolor(BLUE);
    settextstyle(10,0,7);
    outtextxy(200,0,"QUEUE");
    delay(1000);
    setcolor(CYAN);
    settextstyle(10,0,4);
    outtextxy(130,60,"First In First Out");
    delay(1000);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,MAGENTA);
    rectangle(394,150,399,400);
    floodfill(395,151,BLACK);
    setfillstyle(SOLID_FILL,MAGENTA);
    rectangle(490,150,495,400);
    floodfill(491,151,BLACK);
    for(i=150;i<390;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        rectangle(401,i,488,i+48);
        floodfill(402,i+1,BLACK);
    }
    enqueue();
    dequeue();
    //getch();
    //closegraph();
}



