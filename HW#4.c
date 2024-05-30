#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void star(void)
{
	printf("*********************\n");
	return;
}

void Main(void)
{
	printf("----------[Grade System]----------\n");
	printf("* a. Enter student grades        *\n");
	printf("* b. Display student's grades    *\n");
	printf("* C. Search for student's grades *\n");
	printf("* d. Grade ranking               *\n");
	printf("* d. Exit                        *\n");
	printf("----------------------------------\n");	
	return;
}

void HW(void)
{
	star();//�I�sstar��� 
	printf("* �w��Ө�{���@�~4 *\n");
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
	puts("Dragon Boat Festival");
	return;
}
struct information
{
	char name[25];
	char ID[6];
	int math;
	int phy;
	int eng;
}; 

int main(void)
{
	HW(); 
	getch();
	system("cls");//�M���ù�
	int a,b=2;
	float avg[10];
	printf("�п�J4��ƪ��K�X:");
	scanf("%d",&a);
	while(a!=2024)//�K�X=2024 
	{
		if(b==0)//��b=0�ɡA�����{�� 
		{
			printf("�T�����|�w�Χ��A�T�T");
			exit(EXIT_FAILURE);
		}
		printf("��J���~�A�ٳ�%d�����|:",b);
		scanf("%d",&a);
		b=b-1;
	}
	system("cls");//�M���ù�
	while(1)
	{
		Main();//�I�sMain��ơA��D���s�X��
		int n;
		char c;
		struct information student[10];
		printf("�п�J:");
		scanf(" %c",&c);		
		switch(c)
		{
		case 'A':
		case 'a':
			system("cls");//�M���ù�
			printf("�п�Jn(5-10):");
			fflush(stdin);
			scanf("%d",&n);
			while(n<5||n>10)
			{
				printf("��J���~�A�Э��s��Jn(5-10):");
				fflush(stdin);
				scanf("%d",&n);
			}
			for(int i=1;i<=n;i++)
			{
				printf("�Ф��O��J%d���ǥͪ��m�W�B�Ǹ��B�ƾǦ��Z�B���z���Z�B�^�妨�Z\n",i);
				scanf("%s %s %d %d %d",&student[i].name,&student[i].ID,&student[i].math,&student[i].phy,&student[i].eng);
				for(int l=1;l<=n;l++)//�ˬd�m�W�O�_���� 
				{
					while(strcmp(student[l].name,student[i].name)==0&&l!=i)
					{
						printf("�m�W���ơA�Э��s��J�m�W:");
						fflush(stdin);
						scanf("%s",&student[i].name);
					}
				}
				while(strlen(student[i].ID)!=6)//�ˬd�Ǹ��榡�O�_���T 
				{
					printf("�Ǹ����~�A�Э��s��J�Ǹ�:");
					fflush(stdin);
					scanf("%s",&student[i].ID);
				}
				for(int t=1;t<=n;t++)//�ˬd�Ǹ��O�_���� 
				{
					while(strcmp(student[t].ID,student[i].ID)==0&&t!=i)
					{
						printf("�Ǹ����ơA�Э��s��J�Ǹ�:");
						fflush(stdin);
						scanf("%s",&student[i].ID);
					}
				}
				while(student[i].math<0||student[i].math>100)//�ˬd�ƾǦ��Z�O�_���T 
				{
					printf("�ƾǦ��Z���~�A�Э��s��J�ƾǦ��Z:");
					fflush(stdin);
					scanf("%d",&student[i].math);
				}
				while(student[i].phy<0||student[i].phy>100)//�ˬd���z���Z�O�_���T 
				{
					printf("���z���Z���~�A�Э��s��J���z���Z:");
					fflush(stdin);
					scanf("%d",&student[i].phy);
				}
				while(student[i].eng<0||student[i].eng>100)//�ˬd�^�妨�Z�O�_���T 
				{
					printf("�^�妨�Z���~�A�Э��s��J�^�妨�Z:");
					fflush(stdin);
					scanf("%d",&student[i].eng);
				}
			}
			printf("�����N��H�^��D���");
			getch();
			system("cls");//�M���ù�
			break;
		case 'B':
		case 'b':
			system("cls");
			printf("�m�W\t�Ǹ�\tMath\tPhysics\tEnglish\t�������Z");
			for(int j=1;j<=n;j++)
			{
				avg[j]=((float)(student[j].math+student[j].phy+student[j].eng))/3;//�p�⥭�� 
				printf("\n%s\t%s\t%d\t%d\t%d\t%3.1f\n",student[j].name,student[j].ID,student[j].math,student[j].phy,student[j].eng,avg[j]);
			}
			printf("\n");
			printf("�����N��H�^��D���");
			getch();
			system("cls");//�M���ù�
			break;
		case 'C':
		case 'c':
			system("cls");
			int num=0;
			char name1[25];
			printf("�п�J�Q�n�j�M���m�W:");
			fflush(stdin);
			scanf("%s",&name1);	
			for(int k=1;k<=n;k++)
			{
				if(strcmp(student[k].name,name1)==0)
				{
					num=k;
					break;
				}
			}
			if(num==0)
			{
				printf("�䤣�즹�H");
			}
			else
			{
				printf("�m�W\t�Ǹ�\tMath\tPhysics\tEnglish\t�������Z");	
				printf("\n%s\t%s\t%d\t%d\t%d\t%3.1f\n",student[num].name,student[num].ID,student[num].math,student[num].phy,student[num].eng,avg[num]);
			}
			printf("\n");
			printf("�����N��H�^��D���");
			getch();
			system("cls");//�M���ù�
			break;
		case 'E':
		case 'e':
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
