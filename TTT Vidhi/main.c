#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include<conio.h>
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
COORD coord={0,0};
 void gotoxy(int x,int y)
{
       coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
int result();
void block1(int left,int left1,int top,int top1,char ch,char ch1,int val);
int compare_array[10]={0};
int result();
char array[9]={'1','2','3','4','5','6','7','8','9'};
//char array1[10]={'0','1','2','3','4','5','6','7','8','9'};
  char name[30],name1[30],ch,choice,val,val1,choice1,option,ch1,str[5];
    int offset=0,left,top,player=1,res,option1=0,i=0,temp=0,temp1=0,undo1=0,undo2=0;
void page1();
void page2();
void block1(int left,int left1,int top,int top1,char ch,char ch1,int val);
main()
{
    //int cd;
    hidecursor();
    system("cls");
    start:
	printf("                                                                                             \n");
    int cd=4;
    gotoxy(23,10);
    printf("W    W    W   EEEEEE   L        CCCCCC   OOOOOO   MM         MM   EEEEEE\n");
    gotoxy(23,11);
    printf("W   W W   W   E        L        C        O    O   M  M      M M   E     \n");
    gotoxy(23,12);
    printf("W  W   W  W   EEEEEE   L        C        O    O   M   M    M  M   EEEEEE\n");
    gotoxy(23,13);
    printf("W W     W W   E        L        C        O    O   M    M  M   M   E     \n");
    gotoxy(23,14);
    printf("WW       WW   EEEEEE   LLLLLL   CCCCCC   OOOOOO   M     M     M   EEEEEE\n");
    delay(1000);
    gotoxy(50,16);
    printf("GATHERING RESOURCES");
    delay(2000);
    gotoxy(50,16);
    printf("                                ");
    gotoxy(50,16);
    printf("BUILDING GRID    ");
    gotoxy(46,16);
    delay(2000);
    printf("   SETTING UP MUSIC    ");
    delay(2000);
    gotoxy(46,16);
    printf("                              ");
    gotoxy(50,16);
    printf("    ALL SET               ");
    while(cd!=-1)
    {
        gotoxy(51,18);
        printf("Starting in %d",cd);
        if(cd==0)
        {
            delay(500);
            goto s1;
        }
        delay(1000);
        cd--;
    }
    s1:page1();
    choice='1';
    if(choice=='1')
     {
         down3: system("cls");
          fflush(stdin);
          block1(5,111,2,27,'#','#',0);
          a2:gotoxy(7,4);printf("Enter name of first player:");
          ch=fgetc(stdin);
          if(ch=='\n'){goto a2;}
          while(ch!='\n')
          {
            name[offset++]=ch;
            ch=fgetc(stdin);
          }
          name[offset]='\0';
          offset=0;
          a4:
          gotoxy(18,4);
          printf("Enter name of second player:");
          ch=fgetc(stdin);
          if(ch=='\n')goto a4;
          while(ch!='\n')
          {
            name1[offset++]=ch;
            ch=fgetc(stdin);
          }
          name1[offset]='\0';
          a3:offset=0;
          gotoxy(7,9); printf("                                               ");
          player=1;
          gotoxy(7,9);
          while(name[offset]!='\0')
          {
            printf("%c",name[offset++]);
          }
          printf(" Enter your mark:");
          ch=fgetc(stdin);
          gotoxy(40,15); printf("                                               ");
          if(ch=='\n') goto a3;
          i=0;
          while(ch!='\n')
          {
            str[i]=ch;
            i++;
            ch=fgetc(stdin);
         }
                 if(i==1)
                 {
                  choice=str[0];
                 }
             else{gotoxy(40,15);printf("Enter one character");goto a3;}
             val=choice;
              if((choice=='r')||(choice=='R')||(choice=='e')||(choice=='E')||(choice=='u')||(choice=='U'))
             {
                 gotoxy(40,15);printf("Given characters are predefined");
             goto a3;

             }
             else{val1=choice;}
            a5:offset=0;
          gotoxy(7,11); printf("                                               ");
          player=1;
          gotoxy(7,11);
          while(name1[offset]!='\0')
          {
            printf("%c",name1[offset++]);
          }
          printf(" Enter your mark:");
          ch=fgetc(stdin);
          gotoxy(40,15);
          printf("                                            ");
          if(ch=='\n') goto a5;
          i=0;
          while(ch!='\n')
          {
            str[i]=ch;
            i++;
            ch=fgetc(stdin);
         }
                 if(i==1)
                 {
                  choice=str[0];
             }
             else{gotoxy(40,15);printf("Enter one character"); goto a5;}
             if((choice=='r')||(choice=='R')||(choice=='e')||(choice=='E')||(choice=='u')||(choice=='U'))
             {
                 gotoxy(40,15);printf("Given characters are used");
             goto a5;

             }
             else{val1=choice;}
             if(val==val1){gotoxy(40,15);
             printf("Given character is already utilised");
             goto a5;
             }
              system("cls");
              block1(5,111,2,27,'$','$',0);
              gotoxy(55,1);
            printf("Tic Tac Toe");
           printf("\n");
           offset=0;
           gotoxy(7,4);
            while(name[offset]!='\0')
            {
              printf("%c",name[offset++]);
            }
            printf("\t is assigned %c.\n",val);
            offset=0;
            gotoxy(7,5);
            while(name1[offset]!='\0')
            {
              printf("%c",name1[offset++]);
            }
            printf("\t is assigned %c.\n",val1);
            gotoxy(7,7);printf("Enter R to reset the game\n");
            gotoxy(7,8);printf("Enter E to exit from game\n");
            gotoxy(7,9);printf("Enter U to undo\n");
       grid: left=40,top=8;
        while(left<=70)
        {
            gotoxy(left,top);
            printf("*");
            left++;
        }
        while(top<23)
        {
            gotoxy(left,top);
            printf("*");
            top++;
        }
        while(left>=40)
        {
            gotoxy(left,top);
            printf("*");
            left--;
        }
        while(top>=8)
        {
            gotoxy(left,top);
            printf("*");
            top--;
        }
        left=50,top=8;
        while(top<23)
        {
            gotoxy(left,top);
            printf("*");
            top++;
        }
        left=60,top=8;
         while(top<23)
        {
            gotoxy(left,top);
            printf("*");
            top++;
        }
        top=13,left=40;
        while(left<=70)
        {
            gotoxy(left,top);
            printf("*");
            left++;
        }
        top=18,left=40;
        while(left<=70)
        {
            gotoxy(left,top);
            printf("*");
            left++;
        }
        block1(74,109,12,24,'*','*',0);
        gotoxy(85,11);
        printf("GAME STATUS");
        a9: top=10,left=45;
        offset=0;
                while(top<=26)
            {
                while(left<=65)
                {
                    gotoxy(left,top);
                    printf("%c",array[offset++]);
                    left=left+10;
                }
                left=45;
                top=top+5;
            }
            fflush(stdin);

                 while(option1<=8)
          {
           a1:
            player=(player%2)?1:2;
            if(player==1)
            {
              up10:
              gotoxy(7,15);
              printf("                     ");
              offset=0;
              fflush(stdin);
              gotoxy(7,15);
              while(name[offset]!='\0')
              {
                printf("%c",name[offset++]);
              }
              printf(" Enter option:");
               i=0;
             ch=fgetc(stdin);
              gotoxy(76,13);
             printf("                      ");
             if(ch=='\n')goto up10;
             while(ch!='\n')
             {
                 str[i]=ch;
                 i++;
                 ch=fgetc(stdin);
             }
             if(i==1)
             {
                 choice=str[0];
             }
             else{gotoxy(76,13);printf("Enter one character"); goto up10;}
             //choice=fgetc(stdin);
             fflush(stdin);
             gotoxy(7,15);
             printf("                          ");
             if((choice=='r')||(choice=='R'))
             {
                 v2:
                     gotoxy(76,13); printf("                                  ");
                     gotoxy(76,13);
                     gotoxy(76,14);printf("Are you sure you want to reset?\n");
                     gotoxy(76,15);printf("Enter 1 to reset\n");
                     gotoxy(76,16);printf("Enter 2 to continue\n");
                     gotoxy(76,17);printf("Enter option:");
                 ch=fgetc(stdin);
                 gotoxy(76,23);
                 printf("                                          ");
                   if(ch=='\n')goto v2;
                 i=0;
                 while(ch!='\n')
                 {
                     str[i]=ch;
                     i++;
                     ch=fgetc(stdin);
                 }
                 if(i==1)
                 {
                     option=str[0];
                 }
                 else{gotoxy(76,23);printf("Enter one character");
                 goto v2;}
                 delay(1000);
                 gotoxy(76,13);
                 printf("                                   \n");
                 gotoxy(76,14);printf("                                 \n");
                 gotoxy(76,15);printf("                                  \n");
                 gotoxy(76,16);printf("                                 \n");
                  gotoxy(76,17);printf("                                 \n");
                gotoxy(76,23);printf("                            ");
                 if(option=='1')
                 {
                     player=1;
                     for(offset=0;offset<10;offset++)
                     {
                         compare_array[offset]=0;
                     }
                     i=49;
                     for(offset=0;offset<9;offset++)
                     {
                         array[offset]=i;
                         i++;
                         //printf("%c",array[offset]);
                         //delay(10000);
                     }
                     option1=0;
                     goto grid;
                 }
                 else if(option=='2')
                 {
                     player=1;
                     goto a1;
                 }
                 else
                 {
                     printf("Enter valid input");
                 }
             }
             if((choice=='e')||(choice=='E'))
             {
                 gotoxy(0,30);
                 printf("Are you sure you want to exit?\n");
                 printf("Enter 1 to exit\n");
                 printf("Enter 2 to continue\n");
                 printf("Enter option:");
                 scanf("%c",&option);
                 if((option=='1'))
                 {
                     gotoxy(0,30);
                     printf("                      \n");
                     printf("                      \n");
                     printf("                      \n");
                     goto down6;
                 }
                 else if(option=='2')
                 {

                     gotoxy(0,30);
                     printf("                      \n");
                     printf("                      \n");
                     printf("                      \n");
                     printf("                      \n");
                     goto up10;
                 }
             }
             if((choice=='U')||(choice=='u'))
             {
                 if(temp1==0)
                 {
                     gotoxy(40,26);
                     printf("no move done");
                     goto a1;
                 }
                 if(undo1==0)
                 {
                     undo1=1;
                     player=1;
                     compare_array[temp1]=0;
                     option1--;
                     switch(temp1)
                     {

                       case 1:
                        gotoxy(45,10);
                        printf("1");
                        break;
                        case 2:
                        gotoxy(55,10);
                        printf("%d",temp1);
                        break;
                        case 3:
                        gotoxy(65,10);
                        printf("%d",temp1);
                        break;
                        case 4:
                        gotoxy(45,15);
                        printf("%d",temp1);
                        break;
                        case 5:
                        gotoxy(55,15);
                        printf("%d",temp1);
                        break;
                        case 6:
                        gotoxy(65,15);
                        printf("%d",temp1);
                        break;
                        case 7:
                        gotoxy(45,20);
                        printf("%d",temp1);
                        break;
                        case 8:
                        gotoxy(55,20);
                        printf("%d",temp1);
                        break;
                        case 9:
                        gotoxy(65,20);
                        printf("%d",temp);
                        break;

                     }
                     array[temp1]=temp1+48;
                     goto a1;
                 }
                 else{gotoxy(40,26);printf("Undo is allowed once only");
                 delay(1000);gotoxy(40,26);printf("                                                          ");goto up10; }
             }

           down4: if((choice>'0')&&(choice<='9'))
            {
              if(compare_array[choice-48]==0)
              {

              player=2;
                  temp1=choice-48;
               compare_array[choice-48]=1;
               array[(choice-48)-1]='0';
               switch(choice-48)
               {
               case 1:
                gotoxy(45,10);
                printf("%c",val);
                break;
                case 2:
                gotoxy(55,10);
                printf("%c",val);
                break;
                case 3:
                gotoxy(65,10);
                printf("%c",val);
                break;
                case 4:
                gotoxy(45,15);
                printf("%c",val);
                break;
                case 5:
                gotoxy(55,15);
                printf("%c",val);
                break;
                case 6:
                gotoxy(65,15);
                printf("%c",val);
                break;
                case 7:
                gotoxy(45,20);
                printf("%c",val);
                break;
                case 8:
                gotoxy(55,20);
                printf("%c",val);
                break;
                case 9:
                gotoxy(65,20);
                printf("%c",val);
                break;
               }
            }
            else
            {
                gotoxy(40,26);
              printf("Given index is already utilised");
              //delay(1000);
              //gotoxy(0,26); printf("                                      ");
              goto up10;
            }
         }
         else
         {
             gotoxy(40,26);
          printf("Enter valid option");
          //gotoxy(0,26); printf("                    ");
          fflush(stdin);
          goto up10;
         }
        gotoxy(0,26);
        i=result();
        if(i==0) {}
        else {   offset=0;
        printf("*****************************  ");
        while(name[offset]!='\0')
        {
            printf("%c",name[offset++]);

        }
        printf(" wins*****************************");  break;}

    }
    else
    {
       down1:
           fflush(stdin);
            left=0;
       top=15;
       gotoxy(left,top);
       printf("                              ");
       gotoxy(7,15);
       offset=0;
        while(name1[offset]!='\0')
        {
            printf("%c",name1[offset++]);

        }
            printf(" Enter option:");
            player=1;
       //choice=fgetc(stdin);
          i=0;
             fflush(stdin);
             ch=fgetc(stdin);
             if(ch=='\n')goto down1;
             while(ch!='\n')
             {
                 str[i]=ch;
                 i++;
                 ch=fgetc(stdin);
             }
             if(i==1)
             {
                 choice=str[0];
             }
             else{gotoxy(0,30);printf("Enter one character");delay(1000);gotoxy(0,30);
             printf("                                         "); goto down1;}
        fflush(stdin);
             gotoxy(0,15);
       printf("                         ");
       if((choice=='r')||(choice=='R'))
             {
                 v1:
                     gotoxy(0,28);printf("                                              ");gotoxy(0,25);
                 printf("Are you sure you want to reset?\n");
                 printf("Enter 1 to reset\n");
                 printf("Enter 2 to continue\n");
                 printf("Enter option:");
                 //fflush(stdin);
                 ch=fgetc(stdin);
                 if(ch=='\n')goto v1;
                 i=0;
                 while(ch!='\n')
                 {
                     str[i++]=ch;
                     ch=fgetc(stdin);
                 }
                 if(i==1)
                 {
                     option=str[0];
                 }
                 else{gotoxy(0,29);printf("Enter one character");delay(1000);
                 gotoxy(0,29); printf("                            ");
                 goto v1;}
                   delay(1000);
                 gotoxy(0,25);
                 printf("                                       \n");
                 printf("                                        \n");
                 printf("                                        \n");
                 printf("                                         \n");
                  printf("                                        \n");
                 printf("                                         \n");
                 if(option=='1')
                 {
                     player=1;
                     for(offset=0;offset<9;offset++)
                     {
                         compare_array[offset]=0;
                     }
                     i=49;
                     for(offset=0;offset<9;offset++)
                     {
                         array[offset]=i++;
                     }
                     fflush(stdin),option1=0;
                     goto grid;
                 }
                 else if(option=='2')
                 {
                     goto down1;
                 }
                 else
                 {
                     printf("Enter valid input");
                 }
             }

             if((choice=='e')||(choice=='E'))
             {
                v5: gotoxy(0,30);
                 printf("Are you sure you want to exit?\n");
                 printf("Enter 1 to exit\n");
                 printf("Enter 2 to continue\n");
                 printf("Enter option:");
                ch=fgetc(stdin);
                if(ch=='\n') goto v5;
                i=0;
                while(ch!='\n')
                {
                    str[i++]=ch;
                    ch=fgetc(stdin);
                }
                if(i==1)
                {
                    option=str[0];
                }
                else
                {
                  gotoxy(0,32);
                  printf("Enter one character");delay(1000);
                  gotoxy(0,32);
                  printf("                               ");
                  goto v5;
                }
                gotoxy(0,30);
                 printf("                                           \n");
                 printf("                                \n");
                 printf("                                \n");
                 printf("                                \n");
                 printf("                                \n");
                 fflush(stdin);
                 if((option=='1'))
                 {
                     goto down6;
                 }
                 else if(option=='2')
                 {
                     goto down1;
                 }

            /*gotoxy(0,26);
            printf("                                 \n");
            printf("                                  \n");
            printf("                                    \n");
            printf("                                      ");*/
                 }
             if((choice=='u')||(choice=='U'))
             {

                 if(undo2==0)
                 {
                     if(temp==0)
                    {
                     gotoxy(0,26);
                     printf("no move done");
                     gotoxy(0,26);
                     printf("                   ");
                     goto a1;
                    }
                     player=2;
                     undo2=1;
                     compare_array[temp]=0;
                     option1--;
                     switch(temp)
                     {

                       case 1:
                        gotoxy(45,10);
                        printf("%d",temp);
                        break;
                        case 2:
                        gotoxy(55,10);
                        printf("%d",temp);
                        break;
                        case 3:
                        gotoxy(65,10);
                        printf("%d",temp);
                        break;
                        case 4:
                        gotoxy(45,15);
                        printf("%d",temp);
                        break;
                        case 5:
                        gotoxy(55,15);
                        printf("%d",temp);
                        break;
                        case 6:
                        gotoxy(65,15);
                        printf("%d",temp);
                        break;
                        case 7:
                        gotoxy(45,20);
                        printf("%d",temp);
                        break;
                        case 8:
                        gotoxy(55,20);
                        printf("%d",temp);
                        break;
                        case 9:
                        gotoxy(65,20);
                        printf("%d",temp);
                        break;

                     }

                     array[temp]=temp+48;
                     goto a1;
                 }
                 else{gotoxy(0,26);
                 printf(" one undo allowed in a game");
                 gotoxy(0,26);
                 printf("                                            ");
                 goto down1;}
             }
       down5:if((choice>='1')&&(choice<='9'))
       {
           choice1=choice-48;
           if((compare_array[choice1])==0)
           {
               player=1;
               temp=choice-48;
               compare_array[choice1]=1;
               array[choice1-1]='X';
               switch(choice1)
               {
               case 1:
                gotoxy(45,10);
                printf("%c",val1);
                break;
                case 2:
                gotoxy(55,10);
                printf("%c",val1);
                break;
                case 3:
                gotoxy(65,10);
                printf("%c",val1);
                break;
                case 4:
                gotoxy(45,15);
                printf("%c",val1);
                break;
                case 5:
                gotoxy(55,15);
                printf("%c",val1);
                break;
                case 6:
                gotoxy(65,15);
                printf("%c",val1);
                break;
                case 7:
                gotoxy(45,20);
                printf("%c",val1);
                break;
                case 8:
                gotoxy(55,20);
                printf("%c",val1);
                break;
                case 9:
                gotoxy(65,20);
                printf("%c",val1);
                break;
               }
           }
           else{ gotoxy(0,26);printf("Given index is already utilised");
           delay(1000); gotoxy(0,26); printf("                                          "); goto down1;}
       }
       else {gotoxy(0,26);printf("Enter valid choice");
       delay(1000); gotoxy(0,26);printf("                                                 "); goto down1;}
       gotoxy(0,16); printf("                        ");
       gotoxy(0,17); printf("                       ");
       gotoxy(0,21);
    i=result();
       if(i==0){}
       else {
            offset=0;
            printf("***************************************");
        while(name1[offset]!='\0')
        {
            printf("%c",name1[offset++]);

        }
        printf(" wins*************************************"); break;}

    }

       option1++;
    }
    if(option1==9)
    {
        v4:
            gotoxy(0,26);
            printf("Game is draw\n");
        printf("Do you wish to continue?\n");
        printf("Enter 1 to continue:\n");
        printf("Enter 2 to exit\n");
        gotoxy(0,31);// printf("                                                 ");
        printf("Enter option:");
        fflush(stdin);
        ch=fgetc(stdin);
        if(ch=='\n') goto v4;
        i=0;
        while(ch!='\n')
        {
            str[i++]=ch;
            ch=fgetc(stdin);
        }
        if(i==1)
        {
            choice=str[0];
        }
        else
        {
          gotoxy(0,26);
          printf("Enter one character");delay(1000);
          gotoxy(0,26);
          printf("                               ");
          goto v4;
        }
        if(choice=='1')
        {
            player=1;
            for(offset=0;offset<=9;offset++)
            {
                compare_array[offset]=0;
            }
            undo1=0;
            undo2=0;
            i=49;
            for(offset=0;offset<9;offset++)
            {
                array[offset]=i;
                i++;
            }
            option1=0;
            goto grid;
        }
        else if(choice=='2')
        {
            if(player==1)
            {
                goto up10;
            }
            else
            {
                goto down1;
            }
            gotoxy(0,26);
            printf("                                 \n");
            printf("                                  \n");
            printf("                                    \n");
            printf("                                      ");
        }
        else{gotoxy(0,32);printf("Enter valid option"); delay(1000);
        gotoxy(0,32);printf("                                 "); goto v4;}

    }
     }
    else if (choice=='2')
    {
       down6:  gotoxy(0,32); printf("You have exited from the game\n Thanks for playing.....");
    }
    else{}

     return 0;
}
void block1(int left,int left1,int top,int top1,char ch,char ch1,int val)
{
    int temp;
    temp=left;
    while(temp<left1)
    {
        gotoxy(temp,top);
        printf("%c",ch);
        delay(val);
        temp++;
    }
    temp=top;
    while(temp<top1)
    {
        gotoxy(left1,temp);
        printf("%c",ch1);
        delay(val);
        temp++;
    }
    temp=left1;
    while(temp>left)
    {
        gotoxy(temp,top1);
        printf("%c",ch);
        delay(val);
        temp--;
    }
    temp=top1;
    while(temp>top)
    {
        gotoxy(left,temp);
        printf("%c",ch1);
        delay(val);
        temp--;
    }
}
void page1()
{
    hidecursor();
    system("cls");
          printf("\n\n\n\t\t\t\t\t\tTIC TAC TOE \n");
     printf("\t\t\t\t\tdeveloped by VIDHI KATARIA         ");
     printf("\n\n\n");
     printf("\t\t\t\t\t\tGENERAL INSTRUCTIONS...\n\n");
     printf("\t1. The game is played on a grid that's 3 squares by 3 squares.\n\n");
     printf("\t2. Players take turns putting their marks in empty squares.\n\n");
     printf("\t3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n\n");
     printf("\t4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in");
     printf("\t\t\ta tie.\n\n");
     printf("\n\n");
     printf("\tEnter any key to continue...");
      block1(5,111,2,27,'#','#',0);
      ch=fgetc(stdin);
      fflush(stdin);
}
int result()
{
    if((array[0]==array[1])&&(array[1]==array[2]))return 1;
    else if((array[3]==array[4])&&(array[4]==array[5]))return 1;
    else if((array[6]==array[7])&&(array[7]==array[8]))return 1;
    else if((array[0]==array[3])&&(array[3]==array[6]))return 1;
    else if((array[1]==array[4])&&(array[4]==array[7]))return 1;
    else if((array[2]==array[5])&&(array[5]==array[8]))return 1;
    else if((array[0]==array[4])&&(array[4]==array[8]))return 1;
    else if((array[2]==array[4])&&(array[4]==array[6]))return 1;
    else return 0;
}
/*void block1(int left,int left1,int top,int top1,char ch,char ch1,int val)
{
    int temp;
    temp=left;
    while(temp<left1)
    {
        gotoxy(temp,top);
        printf("%c",ch);
        delay(val);
        temp++;
    }
    temp=top;
    while(temp<top1)
    {
        gotoxy(left1,temp);
        printf("%c",ch1);
        delay(val);
        temp++;
    }
    temp=left1;
    while(temp>left)
    {
        gotoxy(temp,top1);
        printf("%c",ch);
        delay(val);
        temp--;
    }
    temp=top1;
    while(temp>top)
    {
        gotoxy(left,temp);
        printf("%c",ch1);
        delay(val);
        temp--;
    }
}*/
