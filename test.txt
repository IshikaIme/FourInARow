#include "iGraphics.h"
#include "gl.h"
#include "stdio.h"
#include "stdlib.h"

int play=0;
int x[100]={0}, y[100]={0};
int turn=0;
int index[6][7]={0};
int yStop[100]={0};
//char str[200]="", str2[200]="";
int gameOver=0;
char winner[100]="";
int colFillup[7]={0};
int stopball[7]={0};
int newmatch=0,menu=1;
int c=0;
double pic=0;
#include"mainmenu.h"
//#include"sound.h"

int check();

void drawBall_01(int p, int q)
{
    iSetColor(255,0,0);
    iFilledCircle(p,q,45);
}

void drawBall_02(int p, int q)
{
    iSetColor(255,255,0);
    iFilledCircle(p,q,45);
}

void drawBoard()
{
    iSetColor(5,102,8);
    iFilledRectangle(295,20,710,610);

    iSetColor(255,255,255);
    for(int i=0;i<7;i++){
        for(int j=0;j<6;j++){
            iFilledCircle(350+i*100, 75+j*100, 45);
        }
    }



    iSetColor(0,0,0);
    iText(1010,20, "Press ESC anytime to return back", GLUT_BITMAP_9_BY_15);
}

void iMouse(int button, int state, int mx, int my)
{

    if(menu)
    {

      if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
            if(mx>500 && mx<850){
                if(my>500 && my<550){

                menu=0;
                play=1;



                }


            }

            if(mx>500 && mx<850){
                if(my>100 && my<150){

                    exit(0);
                }


            }
      }



    }


     if (play==1)
{

	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN  )
	{

//	    itoa(mx,str,10);
//	    itoa(my,str2,10);

        int column=69;

{


        if(295<mx && mx<1005 && !gameOver ){

            if(295<mx && mx<400 && colFillup[0]<6){
                x[turn]=350;
                column=0;
                colFillup[0]++;
                if(colFillup[0]==6)
                    stopball[0]=1;


            }
            else if(400<mx && mx<500 && colFillup[1]<6){
                x[turn]=450;
                column=1;
                colFillup[1]++;
                if(colFillup[1]==6)
                    stopball[1]=1;

            }
            else if(500<mx && mx<600&&colFillup[2]<6){
                x[turn]=550;
                column=2;
                colFillup[2]++;
                if(colFillup[2]==6)
                    stopball[2]=1;

            }
            else if(600<mx && mx<700 && colFillup[3]<6){
                x[turn]=650;
                column=3;
                colFillup[3]++;
                if(colFillup[3]==6)
                    stopball[3]=1;

            }
            else if(700<mx && mx<800 && colFillup[4]<6){
                x[turn]=750;
                column=4;
                colFillup[4]++;
                if(colFillup[4]==6)
                    stopball[4]=1;

            }
            else if(800<mx && mx<900 && colFillup[5]<6){
                x[turn]=850;
                column=5;
                colFillup[5]++;
                if(colFillup[5]==6)
                    stopball[5]=1;

            }
            else if(900<mx && mx<1005 && colFillup[6]<6)
                {
                x[turn]=950;
                column=6;
                colFillup[6]++;
                if(colFillup[6]==6)
                    stopball[6]=1;

            }

            y[turn] = 675;

            for(int i=0; i<6; i++){
                if( index[i][column] == 0 ){

                    yStop[turn] = 75+100*i;

                    if(turn%2==0){
                        index[i][column] = 1;
                    }
                    else{
                        index[i][column] = 2;
                    }

                    break;
                }
            }

            turn++;

            if( check() == 1){
                gameOver = 1;
                char pagla[] = "Player 1 WON";
                strcpy(winner,pagla);

            }
            else if( check() == 2){
                gameOver = 1;
                char pagla[] = "Player 2 WON";
                strcpy(winner,pagla);
            }
        }

	}
}
}
      }

void iMouseMove(int mx, int my)
{
	//place your codes here
}

void iKeyboard(unsigned char key)
{
	if(key == 27)
	{
		menu=1;
		play=0;//do something with 'p'
	}
	//place your codes for other keys here
}

void iSpecialKeyboard(unsigned char key)
{
	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
}

void moveBalls()
{
    for(int i=0;i<turn;i++){
        if(y[i]>yStop[i]){
            y[i] = y[i]-10;
        }
    }
}

int check()
{
    //vertical check
    for(int row=0;row<3;row++){
        for(int col=0;col<7;col++){
            if( (index[row][col] != 0) && (index [row][col] == index[row+1][col]) && (index [row][col] == index[row+2][col]) && (index [row][col] == index[row+3][col]) ){
                return index[row][col];
            }
        }
    }

    //horizontal check
    for(int col=0;col<4;col++){
        for(int row=0;row<6;row++){
            if( (index[row][col] != 0) && (index [row][col] == index[row][col+1]) && (index [row][col] == index[row][col+2]) && (index [row][col] == index[row][col+3]) ){
                return index[row][col];
            }
        }
    }

    //diagonal check
    for(int col=0;col<4;col++){
        //right and up
        for(int row=0;row<3;row++){
            if( (index[row][col] != 0) && (index [row][col] == index[row+1][col+1]) && (index [row][col] == index[row+2][col+2]) && (index [row][col] == index[row+3][col+3]) ){
                return index[row][col];
            }
        }
        //right and down
        for(int row=5;row>2;row--){
            if( (index[row][col] != 0) && (index [row][col] == index[row-1][col+1]) && (index [row][col] == index[row-2][col+2]) && (index [row][col] == index[row-3][col+3]) ){
                return index[row][col];
            }
        }
    }

    return 0;
}

void iDraw()
{
    iClear();

    if(menu)
    iDrawMain();

    if(play)
{
     iSetColor(255,255,255);
    iFilledRectangle(0,0,2000,1000);

    drawBoard();

        for(int j=0; j<6; j++){
        for(int i=0; i<turn; i++){

            if(stopball[j]!=1)
            {
                if(i%2==0){
                    drawBall_01(x[i],y[i]);
                }
                else{
                    drawBall_02(x[i],y[i]);
                }
            }
        }
        }


    //declaring player ball color
    iSetColor(0,0,0);
    iText(25,65,"Player 1 ");
    iText(25,25, "Player 2 ");
    iSetColor(255,0,0);
    iFilledCircle(120,70,15);
    iSetColor(255,255,0);
    iFilledCircle(120,30,15);

//    iText(25,500,str);
//    iText(25,450,str2);

    //Declaring WINNER
    iSetColor(0,0,0);
    iText(1100,400,winner);
}
}


int main()
{
    int horizontal=1300;
    int vertical=750;

    iSetTimer(20, moveBalls);

    iInitialize(horizontal, vertical, "Four in a row");

    return 0;
}
