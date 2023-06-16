#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"TranspotDesinC.h"
//--------------------Main-------------------------------------
int main()
{
	int ich,i;
	int adm=0,Emp=0;
	gotoxy(70,20);
	printf("Loading..."); 
	for(i=0;i<50;i++)
	Sleep(100);
	
//	CreateUserPasA();
	while(1)
	{
		system("cls");
		system("color 0A");
		gotoxy(60,0);
		printf("WLCOME TO TRANSPORT SYSTEM\n");
		gotoxy(60,1);
		printf("------------------------------\n");
		gotoxy(60,2);
		printf("1.Admin Login\n");
		gotoxy(60,3);
		printf("------------------------------\n");
		gotoxy(60,4);
		printf("2.Employee Login\n");
		gotoxy(60,5);
		printf("------------------------------\n");
		gotoxy(60,6);
		printf("3.Update Employee Password\n");
		gotoxy(60,7);
		printf("------------------------------\n");
		gotoxy(60,8);
		printf("4.Exit\n");
		gotoxy(60,9);
		printf("------------------------------\n");
		gotoxy(60,10);
		printf("Enter Your Choise\n");
		gotoxy(60,11);
		scanf("%d",&ich);
		gotoxy(60,12);
		system("cls");
		gotoxy(60,13);
		switch(ich)
		{
			case 1:
				adm=loginA();
				break;
			case 2:
				Emp=loginEmp();
				break;
			case 3:
				updatePasEmp();
				break;
			case 4:
				exit(1);
				break;
			default:
				gotoxy(70,20);
				printf("Invalid\a");
				gotoxy(60,21);
				system("pause");
		}
		if(adm)
		{
			AdmineLogin();
		}
		else if(Emp)
		{
			UserLogin();
		}
	}
	return 0;
}

