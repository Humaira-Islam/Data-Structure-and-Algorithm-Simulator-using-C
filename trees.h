#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>

struct Node
{
  int data;
  struct Node *left, *right;
};

Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
int rad=20,x=230,y=30;
int centre[7][2]={{300,100},//root //A
                  {200,200},//left subtree root //B
                  {150,300},//D
                  {250,300},//E
                  {400,200},//right subtree root //C
                  {350,300},//F
                  {450,300}};//G

int text_pos[7][2]={{285,60},//root
                    {50,200},//left subtree root
                    {140,330},//left
                    {250,330},//right
                    {450,200},//right subtree root
                    {340,330},//left
                    {440,330}};//right
char text[7][21]={"Root","Left Subtree's Root","Left","Right","Right Subtree's Root","Left","Right"};
void beginning()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    int i,j,k;
    char c[1];
    int l[6][4]={{300,120,200,180},//AB
                {200,220,150,280},//BD
                {200,220,250,280},//BE
                {300,120,400,180},//AC
                {400,220,350,280},//CF
                {400,220,450,280}};//CG
    setbkcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(0,0,850,850);
    floodfill(1,1,WHITE);
    setcolor(BLACK);
    for(i=0;i<7;i++)
    {
        circle(centre[i][0],centre[i][1],rad);
        c[0]=(char)(i+65);
        outtextxy(centre[i][0]-5,centre[i][1]-5,c);
    }
    for(i=0;i<7;i++)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]-5,centre[i][1]-5,BLACK);
    }
    for(i=0;i<6;i++)line(l[i][0],l[i][1],l[i][2],l[i][3]);
    delay(1000);
    setcolor(BLUE);
    outtextxy(text_pos[0][0],text_pos[0][1],text[0]);
    setcolor(BLACK);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[0][0],centre[0][1],rad);
    floodfill(centre[0][0]-5,centre[0][1]-5,BLACK);
    delay(1000);
    int tri_arm[6][4]={{200,150,100,320},
                       {200,150,300,320},
                       {100,320,300,320},
                       {400,150,300,320},
                       {400,150,500,320},
                       {300,320,500,320}};
    for(i=1;i<4;i++)
    {
        setfillstyle(SOLID_FILL,YELLOW);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]-5,centre[i][1]-5,BLACK);
        setcolor(CYAN);
        setlinestyle(0,0,3);
        line(tri_arm[i-1][0],tri_arm[i-1][1],tri_arm[i-1][2],tri_arm[i-1][3]);
        setcolor(BLACK);
        setlinestyle(0,0,1);
    }
    setcolor(BLUE);
    outtextxy(text_pos[2][0],text_pos[2][1]+20,"Left Subtree");
    setcolor(BLACK);
    delay(1000);
    for(i=4;i<7;i++)
    {
        setfillstyle(SOLID_FILL,YELLOW);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]-5,centre[i][1]-5,BLACK);///left triangle draw
        setcolor(CYAN);
        setlinestyle(0,0,3);
        line(tri_arm[i-1][0],tri_arm[i-1][1],tri_arm[i-1][2],tri_arm[i-1][3]);
        setcolor(BLACK);
        setlinestyle(0,0,1);
    }
    setcolor(BLUE);
    outtextxy(text_pos[5][0],text_pos[5][0]+20,"Right Subtree");
    setcolor(BLACK);
    delay(1000);
    for(i=0;i<7;i++)
    {
        setfillstyle(SOLID_FILL,LIGHTCYAN);
        circle(centre[i][0],centre[i][1],rad);
        floodfill(centre[i][0]-5,centre[i][1]-5,BLACK);///right trangle draw
        if(i>0)
        {
            setcolor(WHITE);
            setlinestyle(0,0,3);
            line(tri_arm[i-1][0],tri_arm[i-1][1],tri_arm[i-1][2],tri_arm[i-1][3]);
            setcolor(BLACK);
            setlinestyle(0,0,1);
        }
    }
    setcolor(WHITE);
    outtextxy(text_pos[0][0],text_pos[0][1],text[0]);
    outtextxy(text_pos[2][0],text_pos[2][1]+20,"Left Subtree");
    outtextxy(text_pos[5][0],text_pos[5][0]+20,"Right Subtree");
    setcolor(BLACK);
    delay(1000);
}
void pretraverse(struct Node* node)
{
    if(node==NULL)return;
    int m=node->data;
    m--;
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    char p[1];
    p[0]=(char)(m+65);
    p[1]='\0';
    outtextxy(x,y,p);x+=20;
    delay(1000);
    setcolor(WHITE);
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setcolor(BLACK);
    pretraverse(node->left);
    pretraverse(node->right);
}
void preorder()
{
char decl[7][100]={"STEPS:",
                   "Traverse the left subtree",
                   "Visit the root",
                   "Traverse the right subtree"};
int decl_pos[7][2]={{50,400},
                    {100,400},
                    {100,430},
                    {100,460}};
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    beginning();
    outtextxy(x-130,y,"Pre-order traversal :");
    outtextxy(decl_pos[0][0],decl_pos[0][1],decl[0]);
    outtextxy(decl_pos[1][0],decl_pos[1][1],decl[2]);
    outtextxy(decl_pos[2][0],decl_pos[2][1],decl[1]);
    outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
    pretraverse(root);
    //getch();
    //closegraph();
}

void intraverse(struct Node* node)
{
    if(node==NULL)return;
    intraverse(node->left);
    int m=node->data;
    m--;
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    char p[1];
    p[0]=(char)(m+65);
    p[1]='\0';
    outtextxy(x,y,p);x+=20;
    delay(1000);
    setcolor(WHITE);
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setcolor(BLACK);
    intraverse(node->right);
}
void inorder()
{
char decl[7][100]={"STEPS:",
                   "Traverse the left subtree",
                   "Visit the root",
                   "Traverse the right subtree"};
int decl_pos[7][2]={{50,400},
                    {100,400},
                    {100,430},
                    {100,460}};
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    beginning();
    outtextxy(x-130,y,"In-order traversal :");
    outtextxy(decl_pos[0][0],decl_pos[0][1],decl[0]);
    outtextxy(decl_pos[1][0],decl_pos[1][1],decl[1]);
    outtextxy(decl_pos[2][0],decl_pos[2][1],decl[2]);
    outtextxy(decl_pos[3][0],decl_pos[3][1],decl[3]);
    intraverse(root);
    //getch();
    //closegraph();
}

void postraverse(struct Node* node)
{
    if(node==NULL)return;
    postraverse(node->left);
    postraverse(node->right);
    int m=node->data;
    m--;
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    delay(1000);
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    circle(centre[m][0],centre[m][1],rad);
    floodfill(centre[m][0]-5,centre[m][1]-5,BLACK);
    char p[1];
    p[0]=(char)(m+65);
    p[1]='\0';
    outtextxy(x,y,p);x+=20;
    delay(1000);
    setcolor(WHITE);
    outtextxy(text_pos[m][0],text_pos[m][1],text[m]);
    setcolor(BLACK);
}
void postorder()
{
char decl[7][100]={"STEPS:",
                   "Traverse the left subtree",
                   "Visit the root",
                   "Traverse the right subtree"};
int decl_pos[7][2]={{50,400},
                    {100,400},
                    {100,430},
                    {100,460}};
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(5);
    root->left->left = newNode(3);
    root->left->right = newNode(4);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    beginning();
    outtextxy(x-130,y,"Post-order traversal :");
    outtextxy(decl_pos[0][0],decl_pos[0][1],decl[0]);
    outtextxy(decl_pos[1][0],decl_pos[1][1],decl[2]);
    outtextxy(decl_pos[2][0],decl_pos[2][1],decl[3]);
    outtextxy(decl_pos[3][0],decl_pos[3][1],decl[1]);
    postraverse(root);
    //getch();
    //closegraph();
}
