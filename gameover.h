void iDrawOver()
{

        if(gameOver==1){
            iSetColor(255,0,0);
            iFilledRectangle(500,300,300,100);
            iSetColor(255,255,255);
            char player01won[20]="";
            sprintf(player01won,"%s WON",player01);
            iText(558,340,player01won,GLUT_BITMAP_TIMES_ROMAN_24);
        }
        else if(gameOver==2){
            iSetColor(255,255,0);
            iFilledRectangle(500,300,300,100);
            iSetColor(0,0,200);
            char player02won[20]="";
            sprintf(player02won,"%s WON",player02);
            iText(558,340,player02won,GLUT_BITMAP_TIMES_ROMAN_24);
        }
        else if(gameOver==3){
            iSetColor(255,165,0);
            iFilledRectangle(500,300,300,100);
            iSetColor(0,0,0);
            iText(580,340,"GAME OVER",GLUT_BITMAP_TIMES_ROMAN_24);
        }

}

