#include<stdio.h>
#include<stdlib.h>
int SWG(char you,char comp)
{
    
        if(you==comp)
        {
            printf("GAME DRAW\n");
            return 0;
        }
        if(you=='s' && comp=='w')
        {
            printf("YOU WON\n");
            return 1;
        }
        else if(you=='w' && comp=='s')
        {
            printf("YOU LOSS\n");
            return -1;
        }

        if(you=='w' && comp=='g')
        {
            printf("YOU WON\n");
            return 1;
        }
        else if(you=='g' && comp=='w')
        {
            printf("YOU LOSS\n");
            return -1;
        }
        if(you=='s' && comp=='g')
        {
            printf("YOU LOSS\n");
            return -1;
        }
        else if(you=='g' && comp=='s')
        {
            printf("YOU WON\n");
            return 1;
        }
    
}
void main()
{
    char you,comp;
    int result=0,i=1,count=0,h;

    
    printf("-----------WELCOME TO GAME-------------\n");
    printf("Enter how many times you want to play: ");
    scanf("%d",&h);
    printf("Enter Choice From 'S','W' OR 'G' for %d times\n",h);
    
    while(i<=h){
            int number=rand()%99+1;
            if(number<33)
            {
                comp='s';
            }
            else if(number>33 && number<66)
            {
                comp='w';
            }
            else
            {
                comp='g';
            }
            
                printf("\n----------ENTER--------------\n");
                printf("Please choose:\n");
              hello:
                scanf("%c",&you);
               if(you!='s'&&you!='S'&&you!='w'&&you!='W'&&you!='g'&&you!='G'){
                goto hello;
                }
                printf("Computer Chooses:%c\n",comp);
                result = SWG(you,comp);
                count+=result;
                printf("your score is:%d",result);
                
                printf("\n----------%d time-------------\n",i);
                i++;
    }
            

          printf("your final score is:%d",count);
}

//Khushi Pitroda
