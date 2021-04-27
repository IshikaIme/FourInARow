iDrawRules(){

char go[100][100]={"fox 001.bmp" ,"fox 002.bmp" ,"fox 003.bmp" ,"fox 004.bmp" ,"fox 005.bmp" ,"fox 006.bmp" ,"fox 007.bmp" ,"fox 008.bmp" ,"fox 009.bmp" ,"fox 010.bmp" ,"fox 011.bmp" ,"fox 012.bmp" ,"fox 013.bmp" ,"fox 014.bmp" ,"fox 015.bmp" ,"fox 016.bmp" ,"fox 017.bmp" ,"fox 018.bmp" ,"fox 019.bmp" ,
    "fox 020.bmp" ,"fox 021.bmp" ,"fox 022.bmp" ,"fox 023.bmp" ,"fox 024.bmp" ,"fox 025.bmp" ,"fox 026.bmp" ,"fox 027.bmp" ,"fox 028.bmp" ,"fox 029.bmp" ,"fox 030.bmp" ,"fox 031.bmp" ,"fox 032.bmp" ,"fox 033.bmp" ,"fox 034.bmp" ,"fox 035.bmp" ,"fox 036.bmp" ,"fox 037.bmp" ,"fox 038.bmp" ,"fox 039.bmp" ,
    "fox 040.bmp" ,"fox 041.bmp" ,"fox 042.bmp" ,"fox 043.bmp" ,"fox 044.bmp" ,"fox 045.bmp" ,"fox 046.bmp" ,"fox 047.bmp" ,"fox 048.bmp" ,"fox 049.bmp" ,"fox 050.bmp" ,"fox 051.bmp" ,"fox 052.bmp" ,"fox 053.bmp" ,"fox 054.bmp" ,"fox 055.bmp" ,"fox 056.bmp" ,"fox 057.bmp" ,"fox 058.bmp" ,
    "fox 059.bmp" ,"fox 060.bmp" ,"fox 061.bmp" ,"fox 062.bmp" ,"fox 063.bmp" ,"fox 064.bmp" ,"fox 065.bmp" ,"fox 066.bmp" ,"fox 067.bmp" ,"fox 068.bmp" ,"fox 069.bmp" ,"fox 070.bmp" ,"fox 071.bmp" ,"fox 072.bmp" ,"fox 073.bmp" ,"fox 074.bmp" ,"fox 075.bmp" ,"fox 076.bmp" ,
    "fox 077.bmp" ,"fox 078.bmp" ,"fox 079.bmp" ,"fox 080.bmp" ,"fox 081.bmp" ,"fox 082.bmp" ,"fox 083.bmp" ,"fox 084.bmp" ,"fox 085.bmp" ,"fox 086.bmp" ,"fox 087.bmp" ,"fox 088.bmp" ,"fox 089.bmp" ,"fox 090.bmp" ,"fox 091.bmp" ,"fox 092.bmp" ,"fox 093.bmp" ,"fox 094.bmp" ,"fox 095.bmp" ,"fox 096.bmp" ,"fox 097.bmp" ,"fox 098.bmp" ,"fox 099.bmp" ,"fox 100.bmp" };
    rul+=0.8;
    if(rul>=100)rul=0;

    iShowBMP(0,0,go[(int)rul]);
}
