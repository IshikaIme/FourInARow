iDrawSet()
{

    char s[20][100]= {"t 01.bmp", "t 02.bmp","t 03.bmp","t 04.bmp","t 05.bmp","t 06.bmp","t 07.bmp","t 08.bmp","t 09.bmp","t 10.bmp","t 11.bmp","t 12.bmp","t 13.bmp","t 14.bmp","t 15.bmp","t 16.bmp","t 17.bmp","t 18.bmp","t 19.bmp","t 20.bmp"};
    pic2+=0.15;
    if(pic2>=20)pic2=0;
    iShowBMP(0,0,s[(int)pic2]);

    for(int i=0;i<7;i++){
            iSetColor(0,0,0);
            iRectangle(50, 50+i*80, 245, 50);
    }

    iSetColor(255,255,255);
    if(menuKey == 0){
        iFilledRectangle(49,530,246,51);
    }
    else if(menuKey == 1){
        iFilledRectangle(49,450,246,51);
    }
    else if(menuKey == 2){
        iFilledRectangle(49,370,246,51);
    }
    else if(menuKey == 3){
        iFilledRectangle(49,290,246,51);
    }
    else if(menuKey == 4){
        iFilledRectangle(49,210,246,51);
    }
    else if(menuKey == 5){
        iFilledRectangle(49,130,246,51);
    }
    else if(menuKey == 6){
        iFilledRectangle(49,50,246,51);
    }

    iSetColor(0,0,0);
    iText(70,545,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,465,"CONTINUE GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,385,"SETTINGS",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,305,"RULES",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,225,"HALL OF FAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,145,"ABOUT",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,65,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

    iSetColor(130, 135, 131);
    iFilledRectangle(572, 152, 450,30);


    iSetColor(0,0,0);
    iText(550,650,"CHOOSE YOUR MODE",GLUT_BITMAP_TIMES_ROMAN_24);

    for(int i=0;i<5;i++){
        iRectangle(800, 100+i*80, 350, 50);
        iSetColor(0,0,0);
    }

    iSetColor(0,0,255);
    if(mode == 0){
        iFilledRectangle(800,420,350,50);
    }
    else if(mode == 1){
        iFilledRectangle(800,340,350,50);
    }
    else if(mode == 2){
        iFilledRectangle(800,260,350,50);
    }
    else if(mode== 3){
        iFilledRectangle(800,180,350,50);
    }
    else if(mode == 4){
        iFilledRectangle(800,100,350,50);
    }


    iSetColor(255,255,255);
    iText(850,440,"UNDER THE BLUE SKY",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(850,360,"COME SWIM WITH ME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(850,280,"CLEAR THE BLOCK",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(850,200,"WHITE LIKE SNOW",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(850,120,"MEET OLD FRIENDS",GLUT_BITMAP_TIMES_ROMAN_24);


    iSetColor(0,0,0);
    iText(550,50,"BACK TO MAIN MENU",GLUT_BITMAP_TIMES_ROMAN_24);

}


iDrawRules()
{

    char go[100][100]={"fox 001.bmp" ,"fox 002.bmp" ,"fox 003.bmp" ,"fox 004.bmp" ,"fox 005.bmp" ,"fox 006.bmp" ,"fox 007.bmp" ,"fox 008.bmp" ,"fox 009.bmp" ,"fox 010.bmp" ,"fox 011.bmp" ,"fox 012.bmp" ,"fox 013.bmp" ,"fox 014.bmp" ,"fox 015.bmp" ,"fox 016.bmp" ,"fox 017.bmp" ,"fox 018.bmp" ,"fox 019.bmp" ,
    "fox 020.bmp" ,"fox 021.bmp" ,"fox 022.bmp" ,"fox 023.bmp" ,"fox 024.bmp" ,"fox 025.bmp" ,"fox 026.bmp" ,"fox 027.bmp" ,"fox 028.bmp" ,"fox 029.bmp" ,"fox 030.bmp" ,"fox 031.bmp" ,"fox 032.bmp" ,"fox 033.bmp" ,"fox 034.bmp" ,"fox 035.bmp" ,"fox 036.bmp" ,"fox 037.bmp" ,"fox 038.bmp" ,"fox 039.bmp" ,
    "fox 040.bmp" ,"fox 041.bmp" ,"fox 042.bmp" ,"fox 043.bmp" ,"fox 044.bmp" ,"fox 045.bmp" ,"fox 046.bmp" ,"fox 047.bmp" ,"fox 048.bmp" ,"fox 049.bmp" ,"fox 050.bmp" ,"fox 051.bmp" ,"fox 052.bmp" ,"fox 053.bmp" ,"fox 054.bmp" ,"fox 055.bmp" ,"fox 056.bmp" ,"fox 057.bmp" ,"fox 058.bmp" ,
    "fox 059.bmp" ,"fox 060.bmp" ,"fox 061.bmp" ,"fox 062.bmp" ,"fox 063.bmp" ,"fox 064.bmp" ,"fox 065.bmp" ,"fox 066.bmp" ,"fox 067.bmp" ,"fox 068.bmp" ,"fox 069.bmp" ,"fox 070.bmp" ,"fox 071.bmp" ,"fox 072.bmp" ,"fox 073.bmp" ,"fox 074.bmp" ,"fox 075.bmp" ,"fox 076.bmp" ,
    "fox 077.bmp" ,"fox 078.bmp" ,"fox 079.bmp" ,"fox 080.bmp" ,"fox 081.bmp" ,"fox 082.bmp" ,"fox 083.bmp" ,"fox 084.bmp" ,"fox 085.bmp" ,"fox 086.bmp" ,"fox 087.bmp" ,"fox 088.bmp" ,"fox 089.bmp" ,"fox 090.bmp" ,"fox 091.bmp" ,"fox 092.bmp" ,"fox 093.bmp" ,"fox 094.bmp" ,"fox 095.bmp" ,"fox 096.bmp" ,"fox 097.bmp" ,"fox 098.bmp" ,"fox 099.bmp" ,"fox 100.bmp" };
    over+=0.8;
    if(over>=100)over=0;

    iShowBMP(0,0,go[(int)over]);

        for(int i=0;i<7;i++){
            iSetColor(0,0,0);
            iRectangle(50, 50+i*80, 245, 50);
    }

    iSetColor(255,255,255);
    if(menuKey == 0){
        iFilledRectangle(49,530,246,51);
    }
    else if(menuKey == 1){
        iFilledRectangle(49,450,246,51);
    }
    else if(menuKey == 2){
        iFilledRectangle(49,370,246,51);
    }
    else if(menuKey == 3){
        iFilledRectangle(49,290,246,51);
    }
    else if(menuKey == 4){
        iFilledRectangle(49,210,246,51);
    }
    else if(menuKey == 5){
        iFilledRectangle(49,130,246,51);
    }
    else if(menuKey == 6){
        iFilledRectangle(49,50,246,51);
    }

    iSetColor(0,0,0);
    iText(70,545,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,465,"CONTINUE GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,385,"SETTINGS",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,305,"RULES",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,225,"HALL OF FAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,145,"ABOUT",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,65,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

}


iDrawHighScores()
{

    char go[100][100]={"fox 001.bmp" ,"fox 002.bmp" ,"fox 003.bmp" ,"fox 004.bmp" ,"fox 005.bmp" ,"fox 006.bmp" ,"fox 007.bmp" ,"fox 008.bmp" ,"fox 009.bmp" ,"fox 010.bmp" ,"fox 011.bmp" ,"fox 012.bmp" ,"fox 013.bmp" ,"fox 014.bmp" ,"fox 015.bmp" ,"fox 016.bmp" ,"fox 017.bmp" ,"fox 018.bmp" ,"fox 019.bmp" ,
    "fox 020.bmp" ,"fox 021.bmp" ,"fox 022.bmp" ,"fox 023.bmp" ,"fox 024.bmp" ,"fox 025.bmp" ,"fox 026.bmp" ,"fox 027.bmp" ,"fox 028.bmp" ,"fox 029.bmp" ,"fox 030.bmp" ,"fox 031.bmp" ,"fox 032.bmp" ,"fox 033.bmp" ,"fox 034.bmp" ,"fox 035.bmp" ,"fox 036.bmp" ,"fox 037.bmp" ,"fox 038.bmp" ,"fox 039.bmp" ,
    "fox 040.bmp" ,"fox 041.bmp" ,"fox 042.bmp" ,"fox 043.bmp" ,"fox 044.bmp" ,"fox 045.bmp" ,"fox 046.bmp" ,"fox 047.bmp" ,"fox 048.bmp" ,"fox 049.bmp" ,"fox 050.bmp" ,"fox 051.bmp" ,"fox 052.bmp" ,"fox 053.bmp" ,"fox 054.bmp" ,"fox 055.bmp" ,"fox 056.bmp" ,"fox 057.bmp" ,"fox 058.bmp" ,
    "fox 059.bmp" ,"fox 060.bmp" ,"fox 061.bmp" ,"fox 062.bmp" ,"fox 063.bmp" ,"fox 064.bmp" ,"fox 065.bmp" ,"fox 066.bmp" ,"fox 067.bmp" ,"fox 068.bmp" ,"fox 069.bmp" ,"fox 070.bmp" ,"fox 071.bmp" ,"fox 072.bmp" ,"fox 073.bmp" ,"fox 074.bmp" ,"fox 075.bmp" ,"fox 076.bmp" ,
    "fox 077.bmp" ,"fox 078.bmp" ,"fox 079.bmp" ,"fox 080.bmp" ,"fox 081.bmp" ,"fox 082.bmp" ,"fox 083.bmp" ,"fox 084.bmp" ,"fox 085.bmp" ,"fox 086.bmp" ,"fox 087.bmp" ,"fox 088.bmp" ,"fox 089.bmp" ,"fox 090.bmp" ,"fox 091.bmp" ,"fox 092.bmp" ,"fox 093.bmp" ,"fox 094.bmp" ,"fox 095.bmp" ,"fox 096.bmp" ,"fox 097.bmp" ,"fox 098.bmp" ,"fox 099.bmp" ,"fox 100.bmp" };
    over+=0.4;
    if(over>=100)over=0;

    iShowBMP(0,0,go[(int)over]);


    for(int i=0;i<7;i++){
            iSetColor(0,0,0);
            iRectangle(50, 50+i*80, 245, 50);
    }

    iSetColor(255,255,255);
    if(menuKey == 0){
        iFilledRectangle(49,530,246,51);
    }
    else if(menuKey == 1){
        iFilledRectangle(49,450,246,51);
    }
    else if(menuKey == 2){
        iFilledRectangle(49,370,246,51);
    }
    else if(menuKey == 3){
        iFilledRectangle(49,290,246,51);
    }
    else if(menuKey == 4){
        iFilledRectangle(49,210,246,51);
    }
    else if(menuKey == 5){
        iFilledRectangle(49,130,246,51);
    }
    else if(menuKey == 6){
        iFilledRectangle(49,50,246,51);
    }

    iSetColor(0,0,0);
    iText(70,545,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,465,"CONTINUE GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,385,"SETTINGS",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,305,"RULES",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,225,"HALL OF FAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,145,"ABOUT",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,65,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);


    iSetColor(255,255,255);
    iText(800,550,"RANK    NAME          MOVES   TIME",GLUT_BITMAP_9_BY_15);

    char ch[20];
    for(int i=0;i<5;i++){
        sprintf(ch,"0%d", i+1);
        iText(800,500-50*i,ch,GLUT_BITMAP_9_BY_15);

        iText(870,500-50*i,highScore[i].name,GLUT_BITMAP_9_BY_15);

        sprintf(ch,"%d",highScore[i].moves);
        iText(1000,500-50*i,ch,GLUT_BITMAP_9_BY_15);

        sprintf(ch,"%0.2f",highScore[i].winningTime);
        iText(1070,500-50*i,ch,GLUT_BITMAP_9_BY_15);
    }

}


iDrawCredit()
{

    /*char go[100][100]={"fox 001.bmp" ,"fox 002.bmp" ,"fox 003.bmp" ,"fox 004.bmp" ,"fox 005.bmp" ,"fox 006.bmp" ,"fox 007.bmp" ,"fox 008.bmp" ,"fox 009.bmp" ,"fox 010.bmp" ,"fox 011.bmp" ,"fox 012.bmp" ,"fox 013.bmp" ,"fox 014.bmp" ,"fox 015.bmp" ,"fox 016.bmp" ,"fox 017.bmp" ,"fox 018.bmp" ,"fox 019.bmp" ,
    "fox 020.bmp" ,"fox 021.bmp" ,"fox 022.bmp" ,"fox 023.bmp" ,"fox 024.bmp" ,"fox 025.bmp" ,"fox 026.bmp" ,"fox 027.bmp" ,"fox 028.bmp" ,"fox 029.bmp" ,"fox 030.bmp" ,"fox 031.bmp" ,"fox 032.bmp" ,"fox 033.bmp" ,"fox 034.bmp" ,"fox 035.bmp" ,"fox 036.bmp" ,"fox 037.bmp" ,"fox 038.bmp" ,"fox 039.bmp" ,
    "fox 040.bmp" ,"fox 041.bmp" ,"fox 042.bmp" ,"fox 043.bmp" ,"fox 044.bmp" ,"fox 045.bmp" ,"fox 046.bmp" ,"fox 047.bmp" ,"fox 048.bmp" ,"fox 049.bmp" ,"fox 050.bmp" ,"fox 051.bmp" ,"fox 052.bmp" ,"fox 053.bmp" ,"fox 054.bmp" ,"fox 055.bmp" ,"fox 056.bmp" ,"fox 057.bmp" ,"fox 058.bmp" ,
    "fox 059.bmp" ,"fox 060.bmp" ,"fox 061.bmp" ,"fox 062.bmp" ,"fox 063.bmp" ,"fox 064.bmp" ,"fox 065.bmp" ,"fox 066.bmp" ,"fox 067.bmp" ,"fox 068.bmp" ,"fox 069.bmp" ,"fox 070.bmp" ,"fox 071.bmp" ,"fox 072.bmp" ,"fox 073.bmp" ,"fox 074.bmp" ,"fox 075.bmp" ,"fox 076.bmp" ,
    "fox 077.bmp" ,"fox 078.bmp" ,"fox 079.bmp" ,"fox 080.bmp" ,"fox 081.bmp" ,"fox 082.bmp" ,"fox 083.bmp" ,"fox 084.bmp" ,"fox 085.bmp" ,"fox 086.bmp" ,"fox 087.bmp" ,"fox 088.bmp" ,"fox 089.bmp" ,"fox 090.bmp" ,"fox 091.bmp" ,"fox 092.bmp" ,"fox 093.bmp" ,"fox 094.bmp" ,"fox 095.bmp" ,"fox 096.bmp" ,"fox 097.bmp" ,"fox 098.bmp" ,"fox 099.bmp" ,"fox 100.bmp" };
    over+=0.4;
    if(over>=100)over=0;

    iShowBMP(0,0,go[(int)over]);

    for(int i=0;i<7;i++){
            iSetColor(0,0,0);
            iRectangle(50, 50+i*80, 245, 50);
    }*/

    iShowBMP(0,0,"silver.bmp");

    iSetColor(255,255,255);
    if(menuKey == 0){
        iFilledRectangle(49,530,246,51);
    }
    else if(menuKey == 1){
        iFilledRectangle(49,450,246,51);
    }
    else if(menuKey == 2){
        iFilledRectangle(49,370,246,51);
    }
    else if(menuKey == 3){
        iFilledRectangle(49,290,246,51);
    }
    else if(menuKey == 4){
        iFilledRectangle(49,210,246,51);
    }
    else if(menuKey == 5){
        iFilledRectangle(49,130,246,51);
    }
    else if(menuKey == 6){
        iFilledRectangle(49,50,246,51);
    }

    iSetColor(0,0,0);
    iText(70,545,"NEW GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,465,"CONTINUE GAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,385,"SETTINGS",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,305,"RULES",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,225,"HALL OF FAME",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,145,"ABOUT",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(70,65,"EXIT",GLUT_BITMAP_TIMES_ROMAN_24);

}
