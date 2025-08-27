#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void arrow(int y,char s[])
{
    int i,j,k,l;
    int p[]={20,y+5,180,y+5,180,y+5,195,y+25,180,y+45,180,y+45,20,y+45,20,y+5};
    drawpoly(8,p);
    outtextxy(40,y+15,s);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    fillpoly(8,p);
    floodfill(171,y+11,BLACK);
    outtextxy(40,y+15,s);
}
void length(int x,char s[])
{
    int i,j,k,l;
    x=(200+ x*70);
    int p2[]={220,400,220,410,200,390,220,370,220,380,x-20,380,x-20,370,x,390,x-20,410,x-20,400,220,400,220,410};
    drawpoly(11,p2);
    setfillstyle(SOLID_FILL,BLUE);
    fillpoly(11,p2);
    floodfill(x-19,371,BLACK);
    outtextxy(220,420,s);
    delay(2000);
    setcolor(WHITE);
    outtextxy(220,420,s);
    setfillstyle(SOLID_FILL,WHITE);
    fillpoly(11,p2);
    floodfill(x-19,371,WHITE);
    drawpoly(11,p2);
    setcolor(BLACK);
}
void draw()
{
    int i,j,k,l;
    char address[6][6]={"320","321","322","323","324","325"};
    char index[6][2]={"0","1","2","3","4","5"};
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=200;i<600;i+=70)
    {
        for(j=200;j<320;j+=50)
        {
            rectangle(i,j,i+69,j+48);
        }
    }
    settextstyle(4,0,3);
    for(i=210,k=0;i<600;i+=70,k++)
    {
        for(j=210,l=0;j<330;j+=50,l++)
        {
            if(l==0)outtextxy(i,j,index[k]);
            else if(l==2) outtextxy(i,j,address[k]);
        }
    }
    for(i=200;i<600;i+=70)
    {
        for(j=200,k=0;j<320;j+=50,k++)
        {
            if(k%2==0)
            {
                setfillstyle(SOLID_FILL,LIGHTBLUE);
                rectangle(i,j,i+69,j+48);
                floodfill(i+1,j+1,BLACK);
            }
            else
            {
                setfillstyle(SOLID_FILL,LIGHTCYAN);
                rectangle(i,j,i+69,j+48);
                floodfill(i+1,j+1,BLACK);
            }
        }
    }
    settextstyle(4,0,1);
    arrow(200,"Index");
    arrow(250,"Elements");
    arrow(300,"Memory");
}
void begin_string()
{
    int i,j,k,l;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");
    char str[6][5]={"H","E","L","L","O","null"};
    draw();
    setcolor(BLUE);
    settextstyle(10,0,7);
    outtextxy(200,0,"STRING");
    delay(1000);
    setcolor(BLACK);
    settextstyle(4,0,2);
    outtextxy(200,150,"String[5] = HELLO");
    delay(1000);
    for(i=210,k=0;k<6;i+=70,k++)
    {
        outtextxy(i,260,str[k]);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i-10,250,i+59,298);
        floodfill(i+9,251,BLACK);
        delay(1000);
    }
    delay(1000);
    setcolor(WHITE);
    settextstyle(10,0,7);
    outtextxy(200,0,"STRING");
    setcolor(BLACK);
}
void find_length()
{
    int i,j,k,l;
    char cnt[6][2]={"0","1","2","3","4","5"};
    setcolor(BLUE);
    settextstyle(4,0,4);
    outtextxy(200,0,"String Length");
    setcolor(BLACK);
    settextstyle(4,0,2);
    delay(1000);
    outtextxy(200,420,"Count = ");
    outtextxy(320,420,cnt[0]);
    delay(1000);
    outtextxy(150,100,"Start from the index 0");
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(200,250,269,298);
    floodfill(201,251,BLACK);
    delay(1000);
    setcolor(WHITE);
    outtextxy(150,100,"Start from the index 0");
    setcolor(BLACK);
    outtextxy(100,100,"Traverse untill the element is null");
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(200,250,269,298);
    floodfill(201,251,BLACK);
    for(i=270,k=1;k<6;i+=70,k++)
    {
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(i,250,i+69,298);
        floodfill(i+1,251,BLACK);
        setcolor(WHITE);
        outtextxy(320,420,cnt[k-1]);
        setcolor(BLACK);
        outtextxy(320,420,cnt[k]);
        delay(1000);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(i,250,i+69,298);
        floodfill(i+1,251,BLACK);
    }
    setcolor(WHITE);
    outtextxy(100,100,"Traverse untill the element is null");;
    delay(1000);
    outtextxy(200,420,"Count = ");
    outtextxy(320,420,"5");
    delay(1000);
    setcolor(BLACK);
    length(5,"Strlen (String[]) = 5");
    delay(1000);
}
void concatenation()
{
    int i,j,k,l;
    cleardevice();
    draw();
    setcolor(BLUE);
    settextstyle(4,0,2);
    outtextxy(100,0,"String Concatenation");
    delay(1000);
    settextstyle(4,0,2);
    setcolor(MAGENTA);
    outtextxy(140,40,"Strcat(string_1, string_2) ");
    delay(1000);
    setcolor(BLUE);
    outtextxy(120,95,"String_1");
    outtextxy(420,95,"String_2");
    setcolor(BLACK);
    char str[6][5]={"G","E","T","C","H"};
    for(i=100,k=0;i<210;i+=50,k++)
    {
        outtextxy(i+10,140,str[k]);
    }
    outtextxy(i+1,140,"null");
    for(i=400,k=3;i<590;i+=50,k++)
    {
        outtextxy(i+10,140,str[k]);
    }
    outtextxy(501,140,"null");
    for(i=100;i<260;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
    }
    for(i=400;i<510;i+=50)
    {
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
    }
    delay(1000);
    for(i=100,j=200,k=0;i<210;i+=50,j+=70,k++)
    {
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
        delay(500);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(j,250,j+69,298);
        floodfill(j+1,251,BLACK);
        delay(500);
        setcolor(BLACK);
        outtextxy(j+10,260,str[k]);
        delay(500);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(j,250,j+69,298);
        floodfill(j+1,251,BLACK);
        delay(500);
    }
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(i,130,i+49,179);
    floodfill(i+1,131,BLACK);
    delay(500);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(i,130,i+49,179);
    floodfill(i+1,131,BLACK);
    length(3,"String Length = 3");
    delay(1000);
    for(i=400,j=410,k=3;i<490;i+=50,j+=70,k++)
    {
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
        delay(500);
        setfillstyle(SOLID_FILL,YELLOW);
        rectangle(j,250,j+69,298);
        floodfill(j+1,251,BLACK);
        delay(500);
        setcolor(BLACK);
        outtextxy(j+10,260,str[k]);
        delay(500);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        rectangle(i,130,i+49,179);
        floodfill(i+1,131,BLACK);
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        rectangle(j,250,j+69,298);
        floodfill(j+1,251,BLACK);
        delay(500);
    }
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(i,130,i+49,179);
    floodfill(i+1,131,BLACK);
    delay(500);
    setfillstyle(SOLID_FILL,YELLOW);
    rectangle(j,250,j+69,298);
    floodfill(j+1,251,BLACK);
    delay(500);
    setcolor(BLACK);
    outtextxy(j+10,260,"null");
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    rectangle(i,130,i+49,179);
    floodfill(i+1,131,BLACK);
    setfillstyle(SOLID_FILL,LIGHTCYAN);
    rectangle(j,250,j+69,298);
    floodfill(j+1,251,BLACK);
    length(5,"String Length = 5");
    delay(1000);
    outtextxy(220,420,"Concatenated String");
    delay(2000);
}
void compare()
{
    int i,j,k,l;
    cleardevice();
    setcolor(BLUE);
    settextstyle(4,0,4);
    outtextxy(100,0,"String Compare");
    delay(1000);
    settextstyle(4,0,2);
    setcolor(BLACK);

}
void string()
{
    begin_string();
    find_length();
    concatenation();
    //compare();
}



