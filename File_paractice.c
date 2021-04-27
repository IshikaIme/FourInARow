#include<stdio.h>

int main()
{
//    FILE* fp = fopen("Saved Game.txt","r");

//    while(!feof(fp)){
//        int ch = fgetc(fp);
//        printf("%c",ch);
//    }

//    char string[100];
//    fscanf(fp,"%c",&string[0]); //it will take only the first letter
//    printf("\n%c",string[0]);
//
//    fseek(fp,0,0);
//    fscanf(fp,"%s",string); //it will take only the first word
//    printf("\n%s",string);
//
//    fseek(fp,0,SEEK_SET); //SEEK_SET, SEEK_CUR, SEEK_END
//    fgets(string,100,fp);
//    printf("\n%s",string); //this will take a line but the file position indicator must be taken to the right place. if you set this to read 100 characters, it will read 99 chars. also, if it gest anewline, it will put the new line in the string but the string will end there
//
//    char morejao[100];
//    int x=200;
//    sprintf(morejao,"%d",x); //200 will be copied from x to morejao //return how many letters have read
//    printf("\n%s",morejao);
//
//    char moregelam[]="50 a";
//    int a;
//    char b;
//    sscanf(moregelam,"%d %c",&a,&b);//returns how many variables it has read
//    printf("\n%d %c",a,b);

//    int ara[10]={0,1,2,3,4,5,6,7,8,9};
//    for(int i=0;i<10;i++){
//        printf("\n%d",fprintf(fp,"%d ",ara[i]));
//    }
//    fprintf(fp,"I am so happy\n");

//    fseek(fp,0,0);
//    int ara2[10]={0};
//    for(int i=0;i<10;i++){
//        fscanf(fp,"%d",&ara2[i]);
//        printf("\n%d ",ara2[i]);
//    }


            int index[6][7] = {0};
            double timer=0;
            int turn=0;
            int x[50]={0}, y[50]={0}, yStop[50]={0};


                FILE* fp2 = fopen("Saved Game.txt","r");

                for(int i=5;i>=0;i--){
                    for(int j=0;j<7;j++){
                        fscanf(fp2,"%d",&index[i][j]);
                        printf("%d ",index[i][j]);
                    }
                    printf("\n");
                }
                fscanf(fp2,"%lf",&timer);
                fscanf(fp2,"%d",&turn);
                printf("%0.2f \n%d\n",timer,turn);

                for(int i=0;i<turn;i++){
                    fscanf(fp2,"%d %d %d",&x[i],&y[i],&yStop[i]);
                    printf("%d %d %d\n",x[i],y[i],yStop[i]);
                }


                fclose(fp2);



//    printf("\n%d",fclose(fp));

    return 0;
}
