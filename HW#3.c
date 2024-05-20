#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char seat[9][9]=
{
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
	{'-','-','-','-','-','-','-','-','-'},
};

void star(void)
{
	printf("*************************\n");
	return;
}
void Main(void)
{
	printf("-----[BookingSystem]-----\n");
	printf("* a. Available seats    *\n");
	printf("* b. Arrange for you    *\n");
	printf("* C. Choose by yourself *\n");
	printf("* d. Exit               *\n");
	printf("-------------------------\n");	
	return;
}
void fun(void)
{
	printf(" 123456789\n");
	for (int i=1;i<9;i++) 
	{
    	printf("%d",i);
    	for (int j=0;j<9;j++)
		{
    		printf("%c",seat[i][j]);
   		}
    printf("\n");
	}
	return;
}

int main(void)
{
	int a,b=2,c,peo;
	star();//呼叫star函數 
	printf("* 歡迎來到程式作業3 *\n");
	printf("* 按任意鍵以開始遊戲*\n");  
	star();//呼叫star函數 
	getch();
	system("cls");//清除螢幕
	printf("請輸入4位數的密碼:");
	scanf("%d",&a);
	while(a!=2024)//密碼=2024 
	{
		if(b==0)//當b=0時，結束程式 
		{
			printf("三次機會已用完，掰掰\n");
			printf("按任意鍵以結束程式");
			exit(EXIT_FAILURE);
		}
		printf("輸入錯誤，還剩%d次機會:",b);
		scanf("%d",&a);
		b=b-1;
	}
	system("cls");//清除螢幕
	while(1)
	{	
		Main();//呼叫Main函數，把主菜單叫出來
		printf("請輸入:");
		scanf("%s",&c);	
		switch(c)//判斷輸入的字元 
		{
			case 'a':
			case 'A':
				system("cls");//清除螢幕
				for (int i=0;i<=9;i++)
    			{
    				srand(time(NULL));// 每次運行都是不同的位置 
    				int x,y;
        			x=rand()%9;
        			y=rand()%9;
        			for (int s=0;s<=9;s++)
        			{
            			if (seat[x][y]=='*')
            			{
                			x=rand()%9;
                			y=rand()%9;
            			}
            			else
            			{
               				break;
            			}
        			}
        			seat[x][y]='*';
    			}		
				fun();
				printf("按任意鍵以回到主選單");
				getch();
				system("cls");//清除螢幕
				break;
			case 'B':
			case 'b':
				system("cls");//清除螢幕
				printf("需要幾個座位（1~4）:");
				scanf("%d",&peo);
				while(peo<0||peo>4)
				{
					printf("請重新輸入需要的座位數（1~4）:");
					scanf("%d",&peo);	
				}
				switch(peo)
				{
					case 1:
						while(1)
						{
							srand(time(NULL));// 每次運行都是不同的位置 
    						int x,y;
        					x=rand()%9;
        					y=rand()%9;	
							if(seat[x][y]=='-')//判斷是否為空座位 
							{
								seat[x][y]='@';//以@取代seat[x][y]上的- 
								break;
							}
						}
					case 2:
						while(1)
						{
							srand(time(NULL));// 每次運行都是不同的位置 
    						int x,y;
        					x=rand()%9;
        					y=rand()%9;	
							if((seat[x][y]=='-')&&(seat[x][y+1]=='-'))//判斷是否為空座位 
							{
								seat[x][y]='@';//以@取代- 
								seat[x][y+1]='@';//以@取代- 
								break;	
							}
							else if ((seat[x][y] == '-') && (seat[x][y - 1] == '-'))//判斷是否為空座位 
            				{
                				seat[x][y] = '@';//以@取代- 
                				seat[x][y - 1] = '@';//以@取代- 
               					break;
            				}
            			}
            		case 3:
            			while(1)
            			{
            				srand(time(NULL));// 每次運行都是不同的位置 
    						int x,y;
        					x=rand()%9;
        					y=rand()%9;	
            				if ((seat[x][y]=='-') && (seat[x][y+1]=='-') && (seat[x][y+2]=='-'))//判斷是否為空座位 
            				{
                				seat[x][y]='@';//以@取代- 
                				seat[x][y+1]='@';//以@取代- 
                				seat[x][y+2]='@';//以@取代- 
                				break;
            				}
            				else if ((seat[x][y]=='-')&&(seat[x][y-1]=='-')&&(seat[x][y-2]=='-'))//判斷是否為空座位 
            				{
                				seat[x][y]='@';//以@取代- 
                				seat[x][y-1]='@';//以@取代- 
               					seat[x][y-2]='@';//以@取代- 
                			break;
           					}
            			break;	
						}
					case 4:
						while(1)
						{
							srand(time(NULL));// 每次運行都是不同的位置 
    						int x,y;
        					x=rand()%9;
        					y=rand()%9;
							if ((seat[x][y]=='-') && (seat[x][y+1]=='-') && (seat[x][y+2]=='-')&&(seat[x][y+3]=='-'))//判斷是否為空座位 
            				{
                				seat[x][y]='@';//以@取代- 
                				seat[x][y+1]='@';//以@取代- 
                				seat[x][y+2]='@';//以@取代- 
                				seat[x][y+3]='@';//以@取代- 
                				break;
            				}
							else if ((seat[x][y]=='-') && (seat[x][y-1]=='-') && (seat[x][y-2]=='-')&&(seat[x][y-3]=='-'))//判斷是否為空座位 
            				{
                				seat[x][y]='@';//以@取代- 
                				seat[x][y-1]='@';//以@取代- 
                				seat[x][y-2]='@';//以@取代- 
                				seat[x][y-3]='@';//以@取代- 
                				break;
            				}
							else if ((seat[x][y]=='-') && (seat[x][y-1]=='-') && (seat[x-1][y]=='-')&&(seat[x-1][y-1]=='-'))//判斷是否為空座位 
            				{
                				seat[x][y]='@';//以@取代- 
                				seat[x][y-1]='@';//以@取代- 
                				seat[x-1][y]='@';//以@取代- 
                				seat[x-1][y-1]='@';//以@取代- 
                				break;
            				}
						}
					}
					fun();
            		system("PAUSE");	
					
			case 'D':
			case 'd':
				system("cls");//清除螢幕
				char f;
				printf("Continue? (y/n):");
				scanf("%s",&f);
				while(f!='Y'&&f!='y'&&f!='N'&&f!='n')
				{
					printf("Continue? (y/n):");
					scanf("%s",&f);
				}
				switch(f)
				{
					case 'Y':
					case 'y':
						system("cls");//清除螢幕
						break;
					case 'N':
					case 'n':
						printf("按任意鍵以結束程式");
						exit(EXIT_FAILURE);	
				}
				break;	
		}
	}
    return 0;
}

