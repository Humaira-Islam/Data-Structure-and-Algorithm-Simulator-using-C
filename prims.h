#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdbool.h>
void prims_algorithm()
{
char decl[5][100]={"Steps : ",
                   "Initialize the starting root node",
                   "Find all the edges that connect the tree to new nodes",
                   "Find the minimum and add it to the tree",
                   "Keep repeating until getting a minimum spanning tree"};
int decl_pos[5][2]={{50,360},
                    {100,360},
                    {100,390},
                    {100,420},
                    {100,450}};
int rad=20 ;//Radius of the circles

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

int lw[10][2]={{0,0},     //position of the text for the weight of the edges
               {65,115},
               {250,70},
               {450,130},
               {450,260},
               {250,330},
               {50,250},
               {120,200},
               {250,210},
               {380,200}};

int path[7]={0,0,1,9,4,5,7};   //connecting edge number
char ch[10][2]={{'0'},{'7'},{'6'},{'5'},{'2'},{'3'},{'8'},{'3'},{'4'},{'2'}}; // Weights of the vertices

    int i,j,k;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    char c[1];
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=1;i<=6;i++)
    {
        circle(centre[i][0],centre[i][1],rad);
        c[0]=(char)(i+64);
        outtextxy(centre[i][0]-5,centre[i][1]-5,c);
    }
    for(i=1;i<=9;i++)
    {
        line(l[i][0],l[i][1],l[i][2],l[i][3]);
        outtextxy(lw[i][0],lw[i][1],ch[i]);
    }
    for(i=1;i<=6;i++)
    {
        setfillstyle(SOLID_FILL,LIGHTBLUE);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]-10,centre[i][1]-10,BLACK);
    }
    int no_edge=0;
    int selected[7]={0};
    int selected_edge[10]={0};
    no_edge=0;
    for(i=0;i<5;i++)
    {
        outtextxy(decl_pos[i][0],decl_pos[i][1],decl[i]);
    }
    delay(1000);
    //settextstyle(1.5,DEFAULT_FONT,2);
    outtextxy(100,10,"Root node is A");
    setcolor(GREEN);
    outtextxy(decl_pos[1][0],decl_pos[1][1],decl[1]);
    setcolor(BLACK);
    delay(2000);
    setfillstyle(SOLID_FILL,LIGHTGREEN);//c1
    circle(centre[1][0],centre[1][1],rad);
    floodfill(centre[1][0]-10,centre[1][1]-10,BLACK);
    delay(1000);
    setcolor(WHITE);
    outtextxy(100,10,"Root node is A");
    setcolor(BLACK);
    outtextxy(decl_pos[1][0],decl_pos[1][1],decl[1]);
    selected[1]=true;
    int x=0,y=1;i=1;
    while(no_edge<6)
    {
        int min=10000;
        for(i=1;i<=6;i++)
        {
            if(selected[i])
            {
                setcolor(GREEN);
                outtextxy(decl_pos[2][0],decl_pos[2][1],decl[2]);
                setcolor(BLACK);
                delay(500);
                for(j=1;j<=6;j++)
                {
                    if(!selected[j]&&G[i][j])
                    {
                        if(min>G[i][j])
                        {
                            min=G[i][j];
                            y=j;
                        }
                        setfillstyle(SOLID_FILL,YELLOW);
                        circle(centre[j][0],centre[j][1],rad);
                        floodfill(centre[j][0]-10,centre[j][1]-10,BLACK);
                    }
                }
                delay(500);
                setcolor(BLACK);
                outtextxy(decl_pos[2][0],decl_pos[2][1],decl[2]);
            }
        }
        delay(1000);
        for(j=1;j<=6;j++)
        {
            if(!selected[j]&&j!=y)
            {
                setfillstyle(SOLID_FILL,LIGHTBLUE);
                circle(centre[j][0],centre[j][1],rad);
                floodfill(centre[j][0]-10,centre[j][1]-10,BLACK);
            }
        }
        delay(1000);
        selected[y]=true;
        setcolor(GREEN);
        outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
        setcolor(BLACK);
        setfillstyle(SOLID_FILL,LIGHTGREEN);
        circle(centre[y][0],centre[y][1],rad);
        floodfill(centre[y][0]-10,centre[y][1]-10,BLACK);
        int p=path[y];
        selected_edge[p]=1;
        setcolor(GREEN);
        setlinestyle(0, 0, 5);
        line(l[p][0],l[p][1],l[p][2],l[p][3]);

        delay(1000);
        setlinestyle(0, 0, 1);
        setcolor(BLACK);
        outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
        //i=y;
        no_edge++;
        setcolor(GREEN);
        outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
        setcolor(BLACK);
        delay(1000);
        outtextxy(decl_pos[4][0],decl_pos[4][1],decl[4]);
    }
    setcolor(BLACK);
    outtextxy(300,15,"The final minimum spanning tree");
    setcolor(WHITE);
    for(i=1;i<=9;i++)
    {
        if(selected_edge[i]==0)
        {
            line(l[i][0],l[i][1],l[i][2],l[i][3]);
            outtextxy(lw[i][0],lw[i][1],ch[i]);
        }
    }
    setcolor(BLACK);
    //getch();
    //closegraph();
}
