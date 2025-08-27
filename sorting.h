#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
#include<string.h>
void bubblesort()
{
char decl[7][100]={"BUBBLE SORT",
                   "Steps : ",
                   "Start at the beginning of the list",
                   "Compare the current element with the next element",
                   "If the current element is greater than the next element,then swap both the elements",
                   "If not, move to the next element",
                   "Repeat until we get the sorted list"};
int decl_pos[7][2]={{200,270},
                    {20,280},
                    {50,310},
                    {50,340},
                    {50,370},
                    {50,400},
                    {50,430}};
int arr[6]={14,33,27,35,10,30};
char ar[6][3]={"14","33","27","35","10","30"};
int rad=30;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    int i,j,k;
    char c[2];
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=0;i<7;i++)
    {
        if(i<2)delay(1000);
       outtextxy(decl_pos[i][0],decl_pos[i][1],decl[i]);
    }
    for(i=80;i<590;i+=90)
    {
        circle(i,120,rad);
    }
    for(i=80,j=0;i<590;i+=90,j++)
    {
        //c[2]='\0';
        //c[1]=(char)(arr[j]%10  + 48);
        //c[0]=(char)(arr[j]/10  + 48);
        outtextxy(i-10,120,ar[j]);
    }
    for(i=80;i<590;i+=90)
    {
        setfillstyle(SOLID_FILL,CYAN);
        circle(i,120,rad);
        floodfill(i+1,121,BLACK);
    }
    setcolor(GREEN);
    outtextxy(decl_pos[2][0],decl_pos[2][1],decl[2]);
    setcolor(BLACK);
    outtextxy(decl_pos[2][0],decl_pos[2][1],decl[2]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-i;j++)
        {
            delay(1000);
            setcolor(GREEN);
            outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
            setcolor(BLACK);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(80+j*90,120,rad);
            floodfill(81+j*90,121,BLACK);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(80+(j+1)*90,120,rad);
            floodfill(81+(j+1)*90,121,BLACK);
            delay(1000);
            outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);


            if(arr[j]>arr[j+1])
            {
                setcolor(GREEN);
                outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
                setcolor(BLACK);
                int a=j,b=j+1;

                delay(500);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+a*90,120,rad);
                floodfill(81+a*90,121,WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+b*90,120,rad);
                floodfill(81+b*90,121,WHITE);
                setcolor(WHITE);
                circle(80+a*90,120,rad);
                outtextxy(70+a*90,120,ar[a]);
                circle(80+b*90,120,rad);
                outtextxy(70+b*90,120,ar[b]);

                //delay(500);
                setcolor(BLACK);
                circle(80+a*90,190,rad);
                outtextxy(70+a*90,190,ar[a]);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+a*90,190,rad);
                floodfill(81+a*90,191,BLACK);/////
                circle(80+b*90,50,rad);
                outtextxy(70+b*90,50,ar[b]);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+b*90,50,rad);
                floodfill(81+b*90,51,BLACK);/////

                delay(500);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+a*90,190,rad);
                floodfill(81+a*90,191,WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+b*90,50,rad);
                floodfill(81+b*90,51,WHITE);
                setcolor(WHITE);
                circle(80+a*90,190,rad);
                outtextxy(70+a*90,190,ar[a]);
                circle(80+b*90,50,rad);
                outtextxy(70+b*90,50,ar[b]);

                //delay(500);
                setcolor(BLACK);
                circle(80+a*90,50,rad);
                outtextxy(70+a*90,50,ar[b]);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+a*90,50,rad);
                floodfill(81+a*90,51,BLACK);
                circle(80+b*90,190,rad);
                outtextxy(70+b*90,190,ar[a]);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+b*90,190,rad);
                floodfill(81+b*90,191,BLACK);

                delay(500);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+a*90,50,rad);
                floodfill(81+a*90,51,WHITE);
                setfillstyle(SOLID_FILL,WHITE);
                circle(80+b*90,190,rad);
                floodfill(81+b*90,191,WHITE);
                setcolor(WHITE);
                circle(80+a*90,50,rad);
                outtextxy(70+a*90,50,ar[b]);
                circle(80+b*90,190,rad);
                outtextxy(70+b*90,190,ar[a]);

                //delay(500);
                setcolor(BLACK);
                circle(80+a*90,120,rad);
                outtextxy(70+a*90,120,ar[b]);
                circle(80+b*90,120,rad);
                outtextxy(70+b*90,120,ar[a]);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+a*90,120,rad);
                floodfill(81+a*90,121,BLACK);
                setfillstyle(SOLID_FILL,YELLOW);
                circle(80+b*90,120,rad);
                floodfill(81+b*90,121,BLACK);

                //swap(j,j+1);
                int x=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=x;
                char y[3];
                strcpy(y,ar[j]);
                strcpy(ar[j],ar[j+1]);
                strcpy(ar[j+1],y);
                delay(1000);
                outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);

            }
            else
            {
                setcolor(GREEN);
                outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
                setcolor(BLACK);
                delay(1000);
                outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
            }

            setfillstyle(SOLID_FILL,CYAN);
            circle(80+j*90,120,rad);
            floodfill(81+j*90,121,BLACK);
            setfillstyle(SOLID_FILL,CYAN);
            circle(80+(j+1)*90,120,rad);
            floodfill(81+(j+1)*90,121,BLACK);
        }
    }
    //getch();
    //closegraph();
}
