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
	star();//呼叫star函數 
	printf("* 歡迎來到程式作業4 *\n");
	printf("* 按任意鍵以開始遊戲*\n");  
	star();//呼叫star函數
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
struct information student[10]; 
float avg[10];
int num;

int main(void)
{
	HW(); 
	getch();
	system("cls");//清除螢幕
	int a,b=2;
	printf("請輸入4位數的密碼:");
	scanf("%d",&a);
	while(a!=2024)//密碼=2024 
	{
		if(b==0)//當b=0時，結束程式 
		{
			printf("三次機會已用完，掰掰");
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
		char c;
		printf("請輸入:");
		scanf(" %c",&c);		
		switch(c)
		{
		case 'A':
		case 'a':
			afun();
			break;
		case 'B':
		case 'b':
			bfun();
			break;
		case 'C':
		case 'c':
			cfun();
			break;
		case 'D':
		case 'd':
			dfun();
			break;
		case 'E':
		case 'e':
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
void afun(void)
{
	system("cls");//清除螢幕
	int n;
	printf("請輸入n(5-10):");
	fflush(stdin);
	scanf("%d",&n);
	num=n;
	while(n<5||n>10)
	{
		printf("輸入錯誤，請重新輸入n(5-10):");
		fflush(stdin);
		scanf("%d",&n);
	}
	for(int i=1;i<=n;i++)
	{
		printf("請分別輸入%d號學生的姓名、學號、數學成績、物理成績、英文成績\n",i);
		scanf("%s %s %d %d %d",&student[i].name,&student[i].ID,&student[i].math,&student[i].phy,&student[i].eng);
		for(int l=1;l<=n;l++)//檢查姓名是否重複 
		{
			while(strcmp(student[l].name,student[i].name)==0&&l!=i)
			{
				printf("姓名重複，請重新輸入姓名:");
				fflush(stdin);
				scanf("%s",&student[i].name);
			}
		}
		int valid=0;
		while(valid==0)
		{
			valid=1;
			while(strlen(student[i].ID)!=6)//檢查學號格式是否正確 
			{
				printf("學號錯誤，請重新輸入學號:");
				fflush(stdin);
				scanf("%s",&student[i].ID);
				valid=0;
                continue;//跳過後面的檢查，重新進入循環
			}
			for(int t=1;t<=n;t++)//檢查學號是否重複 
			{
				while(strcmp(student[t].ID,student[i].ID)==0&&t!=i)
				{
					printf("學號重複，請重新輸入學號:");
					fflush(stdin);
					scanf("%s",&student[i].ID);
					valid=0;
                	break;//跳出for循環，重新進入while循環
				}
			}
			
		}
		while(student[i].math<0||student[i].math>100)//檢查數學成績是否正確 
		{
			printf("數學成績錯誤，請重新輸入數學成績:");
			fflush(stdin);
			scanf("%d",&student[i].math);
		}
		while(student[i].phy<0||student[i].phy>100)//檢查物理成績是否正確 
		{
			printf("物理成績錯誤，請重新輸入物理成績:");
			fflush(stdin);
			scanf("%d",&student[i].phy);
		}
		while(student[i].eng<0||student[i].eng>100)//檢查英文成績是否正確 
		{
			printf("英文成績錯誤，請重新輸入英文成績:");
			fflush(stdin);
			scanf("%d",&student[i].eng);
		}
	}
	printf("按任意鍵以回到主選單");
	getch();
	system("cls");//清除螢幕
	return;
}
void bfun(void)
{
	system("cls");
	printf("姓名\t學號\tMath\tPhysics\tEnglish\t平均成績");
	for(int j=1;j<=num;j++)
	{
		avg[j]=((float)(student[j].math+student[j].phy+student[j].eng))/3;//計算平均 
		printf("\n%s\t%s\t%d\t%d\t%d\t%3.1f\n",student[j].name,student[j].ID,student[j].math,student[j].phy,student[j].eng,avg[j]);
	}
	printf("\n");
	printf("按任意鍵以回到主選單");
	getch();
	system("cls");//清除螢幕
	return;
}
void cfun(void)
{
	system("cls");
	int num1=0;
	char name2[25];
	printf("請輸入想要搜尋的姓名:");
	fflush(stdin);
	scanf("%s",&name2);	
	for(int k=1;k<=num;k++)
	{
		if(strcmp(student[k].name,name2)==0)
		{
			num1=k;
			break;
		}
	}
	if(num1==0)
	{
		printf("找不到此人");
	}
	else
	{
		printf("姓名\t學號\tMath\tPhysics\tEnglish\t平均成績");	
		printf("\n%s\t%s\t%d\t%d\t%d\t%3.1f\n",student[num1].name,student[num1].ID,student[num1].math,student[num1].phy,student[num1].eng,avg[num1]);
	}
	printf("\n");
	printf("按任意鍵以回到主選單");
	getch();
	system("cls");//清除螢幕
	return;	
}
void dfun(void)// 使用簡單的冒泡排序法對學生依據平均成績進行降序排序
{
	system("cls");
    for (int x=1;x<=num-1;x++) 
	{
        for (int y=x+1;y<=num;y++) 
		{
            if (avg[x]<avg[y]) 
			{
				// 交換學生信息
                struct information tempname=student[x];
                student[x]=student[y];
                student[y]=tempname;
                // 交換平均成績 
                float tempavg=avg[x];
                avg[x]=avg[y];
                avg[y]=tempavg;
            }
        }
    }
    printf("姓名\t學號\t平均成績");
    for (int z=1;z<=num;z++) 
	{
        printf("\n%s\t%s\t%.1f\n",student[z].name,student[z].ID,avg[z]);
    }
    printf("\n按任意鍵以回到主選單");
    getch();
    system("cls"); // Clear screen
}

