#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void array_insertion()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    int i,j,k,l;
    char arr[7][7]={"A","B","C","D","E"," "," "};
    char address[7][6]={"3240","3241","3242","3243","3244","3245","3246"};
    char index[7][4]={"0","1","2","3","4","5","6"};
    char decl[9][100]={"ARRAY INSERTION",
                   "Suppose the new element is 'F'",
                   "    which is to be inserted at index 2",
                   "Steps: ",
                   "1. Check if the array is full",
                   "2. If it is not full, then insertion is possible",
                   "3. Move all the elements",
                   "   from that index one step downward",
                   "4. Insert the new element at given index"};
    int decl_pos[9][2]={{100,50},
                    {10,100},
                    {10,120},
                    {20,190},
                    {50,210},
                    {50,230},
                    {50,250},
                    {50,270},
                    {50,290}};
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=350;i<600;i+=80)//array boundary 3
    {
        setfillstyle(SOLID_FILL,BROWN);
        rectangle(i,100,i+5,420);
        floodfill(i+1,101,BLACK);
    }
    for(i=360,k=0;i<550;i+=80,k++)//all boxes of array elements drawing
    {
       for(j=105;j<400;j+=45)
        {
            rectangle(i,j,i+65,j+40);
        }
    }
    for(i=370,k=0;i<550;i+=80,k++)//writing the texts
    {
       for(j=115,l=0;j<400;j+=45,l++)
        {
            if(k==0)outtextxy(i,j,index[l]);
            else if(k==1)outtextxy(i,j,arr[l]);
            else outtextxy(i,j,address[l]);
        }
    }
    for(i=360,k=0;i<550;i+=80,k++)
    {
       for(j=105;j<400;j+=45)
        {
            if(k%2==0)setfillstyle(SOLID_FILL,LIGHTGREEN);
            else setfillstyle(SOLID_FILL,LIGHTCYAN);
            rectangle(i,j,i+65,j+40);
            floodfill(i+1,j+1,BLACK);
        }
    }

    delay(1000);
    outtextxy(370,30,"Array");
    outtextxy(370,50,"Index");
    int arrow1[]={380,70,380,90,370,90,390,100,410,90,400,90,400,70,380,70};
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(8, arrow1);
    floodfill(381,71,BLACK);

    delay(1000);
    outtextxy(450,50,"Data");
    int arrow2[]={460,70,460,90,450,90,470,100,490,90,480,90,480,70,460,70};
    setfillstyle(SOLID_FILL,CYAN);
    fillpoly(8, arrow2);
    floodfill(461,71,BLACK);

    delay(1000);
    outtextxy(530,30,"Memory");
    outtextxy(530,50,"Address");
    int arrow3[]={540,70,540,90,530,90,550,100,570,90,560,90,560,70,540,70};
    setfillstyle(SOLID_FILL,GREEN);
    fillpoly(8, arrow3);
    floodfill(381,71,BLACK);

    for(i=0;i<9;i++)
    {
        if(i==0||i==1||i==3)delay(1000);
       outtextxy(decl_pos[i][0],decl_pos[i][1],decl[i]);//step printing
    }
    delay(1000);
    //pause();

    setcolor(GREEN);
    outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
    setcolor(BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(440,330,440+65,330+40);
    floodfill(441,331,BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(440,375,440+65,375+40);
    floodfill(441,376,BLACK);

    delay(2000);
    floodfill(441,376,BLACK);
    outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(440,330,440+65,330+40);
    floodfill(441,331,BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(440,375,440+65,375+40);
    floodfill(441,376,BLACK);
    delay(1000);

    //pause();

    setcolor(GREEN);
    outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
    setcolor(BLACK);
    delay(1000);
    outtextxy(decl_pos[5][0],decl_pos[5][1],decl[5]);
    delay(1000);
    //pause();
    setcolor(GREEN);
    outtextxy(decl_pos[6][0],decl_pos[6][1],decl[6]);
    outtextxy(decl_pos[7][0],decl_pos[7][1],decl[7]);
    setcolor(BLACK);
    delay(2000);

    /*setfillstyle(SOLID_FILL,WHITE);
    rectangle(440,330,440+65,330+40);
    floodfill(441,331,WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(440,375,440+65,375+40);
    floodfill(441,376,WHITE);
    setcolor(WHITE);
    rectangle(440,330,440+65,330+40);
    rectangle(440,375,440+65,375+40);
    outtextxy(450,340,arr[5]);
    outtextxy(450,385,arr[6]);
    delay(1000);*/

    for(i=440,j=285,k=4;j>170;j-=45,k--)
    {
        delay(1000);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(i-80,j,i+65-80,j+40);
        floodfill(i-80+1,j+1,BLACK);
        delay(1000);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i-80,j,i+65-80,j+40);
        floodfill(i-80+1,j+1,BLACK);

        setfillstyle(SOLID_FILL,WHITE);
        rectangle(i,j,i+65,j+40);
        floodfill(i+1,j+1,WHITE);
        setcolor(WHITE);
        rectangle(i,j,i+65,j+40);
        outtextxy(450,j+10,arr[k]);
        //delay(1000);

        setcolor(BLACK);
        rectangle(i,j+45,i+65,j+85);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,j+45,i+65,j+85);
        floodfill(i+1,j+46,BLACK);
        outtextxy(450,j+10+45,arr[k]);

        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(i-80,j+45,i+65-80,j+85);
        floodfill(i-80+1,j+46,BLACK);
        delay(1000);

        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i-80,j+45,i+65-80,j+85);
        floodfill(i-80+1,j+46,BLACK);
    }
    delay(1000);
    setcolor(BLACK);
    outtextxy(decl_pos[6][0],decl_pos[6][1],decl[6]);
    outtextxy(decl_pos[7][0],decl_pos[7][1],decl[7]);
    delay(1000);
    //pause();

    setcolor(GREEN);
    outtextxy(decl_pos[8][0],decl_pos[8][1],decl[8]);
    setcolor(BLACK);
    delay(2000);

    rectangle(440,195,440+65,195+40);
    outtextxy(450,205,"F");
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(440,195,440+65,195+40);
    floodfill(441,196,BLACK);
    delay(1000);
    outtextxy(decl_pos[8][0],decl_pos[8][1],decl[8]);
    delay(1000);
    //getch();
    //closegraph();
}

