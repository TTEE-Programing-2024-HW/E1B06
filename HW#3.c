#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void star(void);
void Main(void);
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
void arr()
{
	printf(" 123456789\n");
	for (int i=0;i<9;i++) 
	{
    	printf("%d",i+1);
    	for (int j=0;j<9;j++)
		{
    		printf("%c",seat[i][j]);
   		}
    printf("\n");
	}
}

int main(void)
{
	int a,b=2,c;
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
			case 'A'
				srand(time(NULL));// 每次運行都有不同的位置 
				for (int i=0;i<=9;i++)
    			{
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
				arr();
				printf("按任意鍵以回到主選單");
				getch();
				system("cls");//清除螢幕
				break;
			
			
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

