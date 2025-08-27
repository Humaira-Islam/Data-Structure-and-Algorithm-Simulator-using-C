#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void top(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    drawpoly(4,point);
    setfillstyle(SOLID_FILL,RED);
    fillpoly(4, point);
    floodfill(501,x+1,BLACK);
    outtextxy(530,x-10,"TOP");
}
void remove_top(int x)
{
    int i,j,k,l;
    int point[]={500,x,525,x+20,525,x-20,500,x};
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(4, point);
    floodfill(501,x+1,WHITE);
    setcolor(WHITE);
    drawpoly(4,point);
    outtextxy(530,x-10,"TOP");
}
void push()
{
    int i,j,k,l;
    char val[6][5]={"A","B","C","D","E","F"};
    int top_pos=475;
    char txt[6][100]={"PUSH Operation",
                   "If stack is full",
                   " return",
                   "else ",
                   "increment top",
                   "assign value to stack[top]"};
    int txt_pos[6][2]={{50,170},
                    {10,220},
                    {10,250},
                    {10,300},
                    {10,330},
                    {10,360}};
    settextstyle(4,0,1);
    setcolor(BLACK);
    for(i=0;i<6;i++)
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
        remove_top(top_pos);
        setcolor(BLACK);
        top_pos-=50;
        top(top_pos);
        outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
        delay(1000);
        setcolor(GREEN);
        outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
        setcolor(BLACK);
        outtextxy(340,120,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(300,110,387,158);
        floodfill(301,111,BLACK);
        delay(1000);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(300,110,387,158);
        floodfill(301,111,BLACK);
        setcolor(WHITE);
        rectangle(300,110,387,158);
        outtextxy(340,120,val[i]);
        setcolor(BLACK);
        outtextxy(440,220,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(401,200,488,248);
        floodfill(402,201,BLACK);
        for(j=200;j<top_pos-25;j+=50)
        {
            delay(1000);
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
        outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    }
    outtextxy(340,120,val[i]);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(300,110,387,158);
    floodfill(301,111,BLACK);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    setcolor(BLACK);
    for(k=300;k<700;k+=20)
    {
        delay(100);
        setcolor(WHITE);
        outtextxy(k+40,120,val[i]);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(k,110,k+87,158);
        floodfill(k+1,111,WHITE);
        setcolor(WHITE);
        outtextxy(k+40,120,val[i]);
        rectangle(k,110,k+87,158);
        setcolor(BLACK);
        outtextxy(k+40+20,120,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(k+20,110,k+107,158);
        floodfill(k+21,111,BLACK);
    }
    setcolor(BLACK);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(2000);
    setcolor(WHITE);
    for(i=0;i<6;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
}
void first_out()
{
    int i,j,k,l;
    setcolor(BLACK);
    int p[]={420,120,420,100,470,100,470,95,480,105,470,115,470,110,430,110,430,120,420,120};
    drawpoly(10,p);
    /*setfillstyle(SOLID_FILL,RED);
    fillpoly(10, p);
    floodfill(421,101,BLACK);*/
    //outtextxy(300,100,"First Out");

}
void pop()
{
    int i,j,k,l;
    char txt[6][100]={"POP Operation",
                   "If stack is empty",
                   "return",
                   "else ",
                   "decrement top",
                   "return value"};
    int txt_pos[6][2]={{50,170},
                    {10,220},
                    {10,250},
                    {10,300},
                    {10,330},
                    {10,360}};
    char val[5][5]={"E","D","C","B","A"};
    settextstyle(4,0,1);
    setcolor(BLACK);
    for(i=0;i<6;i++)
    {
        outtextxy(txt_pos[i][0],txt_pos[i][1],txt[i]);
    }
    int top_pos=175;
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
        remove_top(top_pos);
        setcolor(BLACK);
        top_pos+=50;
        top(top_pos);
        outtextxy(txt_pos[4][0],txt_pos[4][1],txt[4]);
        delay(1000);
        setcolor(GREEN);
        outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
        setcolor(BLACK);
        outtextxy(250,top_pos-10,"First Out");
        delay(1000);
        first_out();
        for(j=top_pos-25;j>190;j-=50)
        {
            delay(1000);
            setcolor(WHITE);
            outtextxy(440,j+20,val[i]);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,LIGHTGRAY);
            rectangle(401,j,488,j+48);
            floodfill(402,j+1,BLACK);
            outtextxy(440,j+20-50,val[i]);
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            rectangle(401,j-50,488,j+48-50);
            floodfill(402,j-49,BLACK);
        }
        delay(1000);
        for(k=400;k<700;k+=20)
        {
        delay(100);
        setcolor(WHITE);
        outtextxy(k+40,170,val[i]);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(k+1,150,k+88,198);
        floodfill(k+2,151,WHITE);
        setcolor(WHITE);
        outtextxy(k+40,170,val[i]);
        rectangle(k,150,k+88,158);
        setcolor(BLACK);
        outtextxy(k+40+20,170,val[i]);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(k+21,150,k+108,198);
        floodfill(k+22,151,BLACK);
        }
        setcolor(WHITE);
        outtextxy(250,top_pos-10,"First Out");
        setcolor(BLACK);
        outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
        outtextxy(txt_pos[3][0],txt_pos[3][1],txt[3]);
    }
    setcolor(BLACK);
    outtextxy(txt_pos[5][0],txt_pos[5][1],txt[5]);
    delay(1000);
    setcolor(GREEN);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    delay(1000);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
    remove_top(top_pos);
    setcolor(WHITE);
    int p[]={420,120,420,100,470,100,470,95,480,105,470,115,470,110,430,110,430,120,420,120};
    drawpoly(10,p);
    outtextxy(300,100,"First Out");
    setcolor(BLACK);
    outtextxy(txt_pos[1][0],txt_pos[1][1],txt[1]);
    outtextxy(txt_pos[2][0],txt_pos[2][1],txt[2]);
}
void stack()
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
    outtextxy(200,0,"STACK");
    delay(1000);
    setcolor(CYAN);
    settextstyle(10,0,4);
    outtextxy(130,60,"Last In First Out");
    delay(1000);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,MAGENTA);
    rectangle(394,200,399,450);
    floodfill(395,201,BLACK);
    setfillstyle(SOLID_FILL,MAGENTA);
    rectangle(394,450,495,455);
    floodfill(395,451,BLACK);
    setfillstyle(SOLID_FILL,MAGENTA);
    rectangle(490,200,495,450);
    floodfill(491,201,BLACK);
    for(i=200;i<440;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        rectangle(401,i,488,i+48);
        floodfill(402,i+1,BLACK);
    }
    push();
    pop();
    //getch();
    //closegraph();
}


