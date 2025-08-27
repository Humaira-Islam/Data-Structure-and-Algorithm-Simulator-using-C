#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void blink(int m,int n)
{
    int point1[]={m,98,m-20,70,m+20,70,m,98};
    int point2[]={n,98,n-20,70,n+20,70,n,98};
    int i;
    for(i=0;i<3;i++)
    {
        setcolor(BLACK);
        drawpoly(4, point1);
        drawpoly(4, point2);
        setfillstyle(SOLID_FILL,LIGHTRED);
        fillpoly(4, point1);
        floodfill(m-19,71,BLACK);
        setfillstyle(SOLID_FILL,LIGHTRED);
        fillpoly(4, point2);
        floodfill(n-19,71,BLACK);
        delay(250);
        setcolor(WHITE);
        drawpoly(4, point1);
        drawpoly(4, point2);
        setfillstyle(SOLID_FILL,WHITE);
        fillpoly(4, point1);
        floodfill(m-19,71,WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        fillpoly(4, point2);
        floodfill(n-19,71,WHITE);
        delay(250);
    }
}
void blink1(int m)
{
    int point1[]={m,98,m-20,70,m+20,70,m,98};
    int i;
    for(i=0;i<3;i++)
    {
        setcolor(BLACK);
        drawpoly(4, point1);
        setfillstyle(SOLID_FILL,LIGHTRED);
        fillpoly(4, point1);
        floodfill(m-19,71,BLACK);
        delay(250);
        setcolor(WHITE);
        drawpoly(4, point1);
        setfillstyle(SOLID_FILL,WHITE);
        fillpoly(4, point1);
        floodfill(m-19,71,WHITE);
        delay(250);
    }
}

void binarysearch()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    int arr[9]={2,5,11,15,18,27,31,34};
    int s=18;
    char decl[8][100]={"BINARY SEARCH",
                   "Suppose the search key is 18",
                   "Steps : ",
                   "Set the left and right index of the search area",
                   "Find the middle index of the search area",
                   "If array[middle] == key , then the key is found",
                   "Else if array[middle] > key , then set the (middle-1) index as right",
                   "Else if array[middle] < key , then set the (middle+1) index as left"};

    int decl_pos[8][2]={{200,250},
                    {180,280},
                    {50,310},
                    {50,310},
                    {50,340},
                    {50,370},
                    {50,400},
                    {50,430}};
    int i,j,k,m,p;
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=50,j=100;i<500;i+=60)
    {
        rectangle(i,j,i+59,j+49);
        rectangle(i,j+50,i+59,j+99);
    }
    char c[1],d[2];
    for(i=50,j=0;i<500;i+=60,j++)
    {
        c[0]=(char)(j+48);
        c[1]='\0';
        outtextxy(i+25,120,c);
    }
    for(i=50,j=0;i<500;i+=60,j++)
    {
        p=arr[j];
        d[1]=(char)(p%10+48);
        p/=10;
        d[0]=(char)(p%10+48);
        d[2]='\0';
        outtextxy(i+25,170,d);
    }
    outtextxy(75,170,"02");
    for(i=50,j=100;i<500;i+=60)
    {
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(i,j,i+59,j+49);
        floodfill(i+1,j+1,BLACK);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,j+50,i+59,j+99);
        floodfill(i+1,j+51,BLACK);
    }
    for(i=0;i<8;i++)
    {
        if(i<2)delay(1000);
       outtextxy(decl_pos[i][0],decl_pos[i][1],decl[i]);
    }
    int l=0,r=7;
    while(l<=r)
    {
        delay(1000);
        setcolor(LIGHTRED);
        outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
        setcolor(BLACK);
        if(l==r)
        {
            outtextxy((50+(l*60)+25),30,"Left = Right");
            setfillstyle(SOLID_FILL,YELLOW);
            rectangle(50+(l*60),100,50+(l*60)+59,149);
            floodfill(51+(l*60),101,BLACK);
        }
        else
        {
            outtextxy((50+(l*60)+25),30,"Left");
            outtextxy((50+(r*60)+25),30,"Right");
            setfillstyle(SOLID_FILL,YELLOW);
            rectangle(50+(l*60),100,50+(l*60)+59,149);
            floodfill(51+(l*60),101,BLACK);

            setfillstyle(SOLID_FILL,YELLOW);
            rectangle(50+(r*60),100,50+(r*60)+59,149);
            floodfill(51+(r*60),101,BLACK);
            delay(1000);
        }

        setcolor(BLACK);
        outtextxy(70+((l+r)/2)*60,220,"Search Area");
        rectangle(50+(l*60),210,50+(r*60)+60,215);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,GREEN);
        rectangle(50+(l*60),210,50+(r*60)+60,215);
        floodfill(51+(l*60),211,BLACK);

        blink((50+(l*60)+25),(50+(r*60)+25));
        setcolor(BLACK);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(50+(l*60),100,50+(l*60)+59,149);
        floodfill(51+(l*60),101,BLACK);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(50+(r*60),100,50+(r*60)+59,149);
        floodfill(51+(r*60),101,BLACK);
        delay(1000);

        setcolor(BLACK);
        outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
        setcolor(WHITE);
        outtextxy(70+((l+r)/2)*60,220,"Search Area");
        if(l==r)
        {
            outtextxy((50+(l*60)+25),30,"Left = Right");
        }
        else
        {
            outtextxy((50+(l*60)+25),30,"Left");
            outtextxy((50+(r*60)+25),30,"Right");
        }
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,WHITE);
        rectangle(50+(l*60),210,50+(r*60)+60,215);
        floodfill(51+(l*60),211,WHITE);
        setcolor(WHITE);
        rectangle(50+(l*60),210,50+(r*60)+60,215);
        setcolor(BLACK);

        delay(1000);
        m=(l+r)/2;
        setcolor(LIGHTRED);
        outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
        setcolor(BLACK);
        delay(1000);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(50+(m*60),100,50+(m*60)+59,149);
        floodfill(51+(m*60),101,BLACK);
        outtextxy((50+(m*60)+10),30,"Mid index");

        blink1(50+(m*60)+25);
        setcolor(BLACK);

        setfillstyle(SOLID_FILL,LIGHTBLUE);
        rectangle(50+(m*60),100,50+(m*60)+59,149);
        floodfill(51+(m*60),101,BLACK);
        setcolor(WHITE);
        outtextxy((50+(m*60)+10),30,"Mid index");
        setcolor(BLACK);
        outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);

        if(arr[m]==s)
        {
            setcolor(LIGHTRED);
            outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
            setcolor(BLACK);
            delay(1000);
            setcolor(WHITE);
            outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
            setcolor(BLACK);
            delay(1000);
            outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
            delay(1000);
            /*for(i=0;i<4;i++)
            {
                outtextxy((50+(m*60)+10),30,"Searched Key FOUND!!!");
                delay(250);
                setcolor(BLACK);
                outtextxy((50+(m*60)+10),30,"Searched Key FOUND!!!");
                delay(250);
                setcolor(WHITE);
            }*/
            outtextxy((50+(m*60)+10),30,"Searched Key FOUND!!!");
            setfillstyle(SOLID_FILL,YELLOW);
            rectangle(50+(m*60),150,50+(m*60)+59,199);
            floodfill(51+(m*60),151,BLACK);
            break;
        }
        else if(arr[m]>s)
        {
            r=m-1;
            setcolor(LIGHTRED);
            outtextxy(decl_pos[6][0],decl_pos[6][1],decl[6]);
            setcolor(BLACK);
            delay(1000);
            outtextxy(decl_pos[6][0],decl_pos[6][1],decl[6]);
        }
        else
        {
            l=m+1;
            setcolor(LIGHTRED);
            outtextxy(decl_pos[7][0],decl_pos[7][1],decl[7]);
            setcolor(BLACK);
            delay(1000);
            outtextxy(decl_pos[7][0],decl_pos[7][1],decl[7]);
        }
    }
    //getch();
    //closegraph();
}

