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
	return;
}

int main(void)
{	
	int a,b=2,c,peo;
	star();//�I�sstar��� 
	printf("* �w��Ө�{���@�~3 *\n");
	printf("* �����N��H�}�l�C��*\n");  
	star();//�I�sstar��� 
	getch();
	system("cls");//�M���ù�
	printf("�п�J4��ƪ��K�X:");
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
		scanf("%s",&c);	
		switch(c)//�P�_��J���r�� 
		{
			case 'a':
			case 'A':
				system("cls");//�M���ù�	
				fun();
				printf("�����N��H�^��D���");
				getch();
				system("cls");//�M���ù�
				break;
			case 'B':
			case 'b':
				system("cls");//�M���ù�
				printf("�ݭn�X�Ӯy��]1~4�^:");
				scanf("%d",&peo);
				while(peo<0||peo>4)
				{
					printf("�Э��s��J�ݭn���y��ơ]1~4�^:");
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
            			break;	
						}
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
					fun();
					char n;
            		printf("��Ӯy�캡�N��?(y/n):");
					scanf("%s",&n);
					while(1)
					{
						if(n=='Y'||n=='y')
						{
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
							break;	
						}
						else if(n=='N'||n=='n')
						{
							for(int i=1;i<=9;i++)
							{
								for(int j=1;j<=9;j++)
								{
									if(seat[i][j]=='@')
									{
										seat[i][j]='-';
									}
								}
							}
							break;	
						}
						else
						{
							printf("��Ӯy�캡�N��?(y/n):");
							scanf("%s",&n);	
						}	
					}	
				printf("�����N��H�^��D���");
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
				break;	
		}
	}
    return 0;
}

