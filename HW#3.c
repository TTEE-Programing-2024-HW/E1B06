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
	printf("*********************\n");
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
void hw(void)
{
	star();//�I�sstar��� 
	printf("* �w��Ө�{���@�~3 *\n");
	printf("* �����N��H�}�l�C��*\n");  
	star();//�I�sstar���
	printf("\n");
	puts("H       H       A       PPPPP   PPPPP   Y       Y   ");
	puts("H       H      A A      P    P  P    P   Y     Y    "); 
	puts("H       H     A   A     P     P P     P   Y   Y     ");
	puts("HHHHHHHHH    A     A    P    P  P    P     Y Y      ");
	puts("H       H   AAAAAAAAA   PPPPP   PPPPP       Y       ");
	puts("H       H  A         A  P       P           Y       ");
	puts("H       H A           A P       P           Y       ");
} 

int main(void)
{	
	int a,b=2,c,peo;
	hw(); 
	getch();
	system("cls");//�M���ù�
	printf("�п�J4��ƪ��K�X:");
	fflush(stdin);
	scanf("%d",&a);
	while(a!=2024)//�K�X=2024 
	{
		if(b==0)//��b=0�ɡA�����{�� 
		{
			printf("�T�����|�w�Χ��A�T�T\n");
			printf("�����N��H�����{��");
			exit(EXIT_FAILURE);
		}
		printf("��J���~�A�ٳ�%d�����|:",b);
		fflush(stdin);
		scanf("%d",&a);
		b=b-1;
	}
	system("cls");//�M���ù�
	srand(time(NULL));// �C���B�泣�O���P����m 
    for(int i=1;i<=9;i++)
    {
    	int x,y;
    	x=rand()%9;
    	y=rand()%9;
    	while(1)
    	{
        	if (seat[x][y]=='*')
        	{
        		srand(time(NULL));
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
	while(1)
	{	
		Main();//�I�sMain��ơA��D���s�X��
		printf("�п�J:");
		fflush(stdin);
		scanf("%s",&c);	
		switch(c)//�P�_��J���r�� 
		{
			case 'a':
			case 'A':
				system("cls");//�M���ù�	
				printf("\\123456789\n");
				for (int i=1;i<9;i++) 
				{
    				printf("%d",i);
    				for (int j=0;j<9;j++)
					{
    					printf("%c",seat[i][j]);
   					}
    			printf("\n");
				}
				printf("�����N��H�^��D���");
				getch();
				system("cls");//�M���ù�
				break;
			case 'B':
			case 'b':
				system("cls");//�M���ù�
				printf("�ݭn�X�Ӯy��]1~4�^:");
				fflush(stdin);
				scanf("%d",&peo);
				while(peo<0||peo>4)
				{
					printf("�Э��s��J�ݭn���y��ơ]1~4�^:");
					fflush(stdin);
					scanf("%d",&peo);	
				}
				switch(peo)
				{
					case 1:
						while(1)
						{
							srand(time(NULL));// �C���B�泣�O���P����m 
    						int x,y;
        					x=rand()%9+1;
        					y=rand()%9+1;	
							if(seat[x][y]=='-')//�P�_�O�_���Ůy�� 
							{
								seat[x][y]='@';//�H@���Nseat[x][y]�W��- 
								break;
							}
						}
						break;
					case 2:
						while(1)
						{
							srand(time(NULL));// �C���B�泣�O���P����m 
    						int x,y;
        					x=rand()%9+1;
        					y=rand()%9+1;	
							if((seat[x][y]=='-')&&(seat[x][y+1]=='-'))//�P�_�O�_���Ůy�� 
							{
								seat[x][y]='@';//�H@���N- 
								seat[x][y+1]='@';//�H@���N- 
								break;	
							}
							else if ((seat[x][y]=='-')&&(seat[x][y-1]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y-1]='@';//�H@���N- 
               					break;
            				}
            			}
            			break;
            		case 3:
            			while(1)
            			{
            				srand(time(NULL));// �C���B�泣�O���P����m 
    						int x,y;
        					x=rand()%9+1;
        					y=rand()%9+1;	
            				if ((seat[x][y]=='-') && (seat[x][y+1]=='-') && (seat[x][y+2]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y+1]='@';//�H@���N- 
                				seat[x][y+2]='@';//�H@���N- 
                				break;
            				}
            				else if ((seat[x][y]=='-')&&(seat[x][y-1]=='-')&&(seat[x][y-2]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y-1]='@';//�H@���N- 
               					seat[x][y-2]='@';//�H@���N- 
                			break;
           					}	
						}
						break;
					case 4:
						while(1)
						{
							srand(time(NULL));// �C���B�泣�O���P����m 
    						int x,y;
        					x=rand()%9+1;
        					y=rand()%9+1;
							if ((seat[x][y]=='-') && (seat[x][y+1]=='-') && (seat[x][y+2]=='-')&&(seat[x][y+3]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y+1]='@';//�H@���N- 
                				seat[x][y+2]='@';//�H@���N- 
                				seat[x][y+3]='@';//�H@���N- 
                				break;
            				}
							else if ((seat[x][y]=='-') && (seat[x][y-1]=='-') && (seat[x][y-2]=='-')&&(seat[x][y-3]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y-1]='@';//�H@���N- 
                				seat[x][y-2]='@';//�H@���N- 
                				seat[x][y-3]='@';//�H@���N- 
                				break;
            				}
							else if ((seat[x][y]=='-') && (seat[x][y+1]=='-') && (seat[x+1][y]=='-')&&(seat[x+1][y+1]=='-'))//�P�_�O�_���Ůy�� 
            				{
                				seat[x][y]='@';//�H@���N- 
                				seat[x][y+1]='@';//�H@���N- 
                				seat[x+1][y]='@';//�H@���N- 
                				seat[x+1][y+1]='@';//�H@���N- 
                				break;
            				}
						}
						break;
					}
					printf("\\123456789\n");
					for (int i=1;i<9;i++) 
					{
    					printf("%d",i);
    					for (int j=0;j<9;j++)
						{
    						printf("%c",seat[i][j]);
   						}
    					printf("\n");
					}
					char n;
            		printf("��Ӯy�캡�N��?(y/n):");
            		fflush(stdin);
					scanf("%s",&n);
					while(1)
					{
						if(n=='Y'||n=='y')
						{
							for(int i=1;i<=9;i++)
							{
								for(int j=1;j<=9;j++)
								{
									if(seat[i][j]=='@')//�P�_seat[i][j]�O�_��'@'
									{
										seat[i][j]='*';//�H*���N@ 
									}
								}
							}
							break;	
						}
						else if(n=='N'||n=='n')
						{
							for(int i=1;i<=9;i++)
							{
								for(int j=1;j<=9;j++)
								{
									if(seat[i][j]=='@')//�P�_seat[i][j]�O�_��'@'
									{
										seat[i][j]='-';//�H-���N@
									}
								}
							}
							break;	
						}
						else
						{
							printf("��Ӯy�캡�N��?(y/n):");
							fflush(stdin);
							scanf("%s",&n);	
						}	
					}	
				printf("�����N��H�^��D���");
				getch();
				system("cls");//�M���ù�
				break;
			case 'C':
			case 'c':
				system("cls");//�M���ù�
				int row,col;
				printf("\\123456789\n");
				for (int i=1;i<9;i++) 
				{
    				printf("%d",i);
    				for (int j=0;j<9;j++)
					{
    					printf("%c",seat[i][j]);
   					}
    				printf("\n");
				}
				printf("\n");
				printf("��J�y��(EX:9-5):");
				while(1)
				{
					fflush(stdin);
					scanf("%d-%d",&row,&col);
					if(seat[row][col-1]=='*')//�P�_seat[row][col-1]�O�_��'*' 
					{
						printf("�y��w�Q�襤�A�Э��s��J�y��(EX:9-5):");
						continue;
					}
					else if(seat[row][col-1]=='-')//�P�_seat[row][col-1]�O�_��'-'
					{
						seat[row][col-1]='@';
						break;
					}
							
				}
				printf("\\123456789\n");
				for (int i=1;i<9;i++) 
				{
    				printf("%d",i);
    				for (int j=0;j<9;j++)
					{
    					printf("%c",seat[i][j]);
   					}
    				printf("\n");
				}
				for(int i=1;i<=9;i++)
				{
					for(int j=1;j<=9;j++)
					{
						if(seat[i][j]=='@')
						{
							seat[i][j]='*';
						}
					}	
				}
				getch();
				system("cls");//�M���ù�
				break;
			case 'D':
			case 'd':
				system("cls");//�M���ù�
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
						system("cls");//�M���ù�
						break;
					case 'N':
					case 'n':
						printf("�����N��H�����{��");
						exit(EXIT_FAILURE);	
				}
				break;//	
		}
	}

    return 0;
}

