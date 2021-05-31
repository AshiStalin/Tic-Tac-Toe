#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
 //clrscr();
 int ar[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
 char a[10],b[10];
 int i,p,go,w=0;

printf("\t\t\t\tTIC TAK TOE");
printf("\n\t\t\t        ***********");
printf("\n\n\nSelect 1st player's name for 'X'?");
gets(a);
printf("Select 2nd player's name for 'O'?");
gets(b);
printf("\n\n\n");

for(i=0; i<9 && w==0 ; i++)
{ //for the pattern with array.
printf("\t\t %c | %c  | %c\n",ar[0],ar[1],ar[2]);
printf("  \t\t---|----|---\n");
printf("  \t\t %c | %c  | %c \n",ar[3],ar[4],ar[5]);
printf(" \t\t---|----|---\n");
printf("\t\t %c | %c  | %c \n",ar[6],ar[7],ar[8]);

p=i%2+1; //players will keep switching according to their turns.

do{
  	printf("Player %d, Select the block number.",p);//To choose the block by the player.
	scanf("%d",&go);
	 
	--go; //As in array starts from 0 so if the user will enter 1, the 0th ie. the first position will be taken by the player. 
	
	if(ar[go]=='X'||p=='O') //If the block for which the player has inserted the number is occupied.
 printf("Block is occupied.\n");
 
}while(go<0 || go>9 || ar[go]>'9');     
    
 if(p==1) //p==1 shows player with 'X' character and player 2 will 'O'.
 ar[go]='X'; //Printing 'X' in the block the player has asked for. 
 else
 ar[go]='O'; //Printing 'O' in the block the player has asked for.
 
 if((ar[0]==ar[4]&&ar[0]==ar[8]) || (ar[2]==ar[4]&&ar[2]==ar[6])|| (ar[0]==ar[1]&&ar[0]==ar[2])|| (ar[3]==ar[4]&&ar[3]==ar[5])|| (ar[6]==ar[7]&&ar[6]==ar[8])
 || (ar[0]==ar[3]&&ar[0]==ar[6])|| (ar[1]==ar[4]&&ar[1]==ar[7])|| 
 (ar[2]==ar[5]&&ar[2]==ar[8])) //Deciding the winning situation of the player diagonally, horizontally and vertically. (if any)

 w=p;
}

printf("\t\t %c | %c  | %c\n",ar[0],ar[1],ar[2]);
printf("  \t\t---|----|---\n");
printf("  \t\t %c | %c  | %c \n",ar[3],ar[4],ar[5]);
printf(" \t\t---|----|---\n");
printf("\t\t %c | %c  | %c \n",ar[6],ar[7],ar[8]);

	if (w==0)
    printf("It's a draw!");
	else
	printf("\n\n\t\t\t\tCongratulations! Player %d, YOU'RE A WINNER!!'.",w); 
  
getch();

return 0;
}
