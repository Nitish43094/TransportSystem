#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<windows.h>
void gotoxy(short x, short y);
//--------------------Admin-----------------------------------
struct Admin
{
	char Name[40];
	char Pas[25];
}admin;
void CreateUserPasA();
int loginA();
void updatePasA();
//--------------------Employee---------------------------------
struct Emp
{
	int id;
	char Name[40];
	char Pas[25];
}emp;
void CreateUserPasEmp();
int loginEmp();
void updatePasEmp();
void deleteEmp();
//--------------------Booking----------------------------------
struct Booking
{
	char username[40];
	char bookingid[40];
	char bookingdate[12];
	char fromto[40];
	char destination[40];
	char goods[40];
	char TranspotType[40];
	char perkm[10];
	char perkg[10];
	char Cusname[40];
	char Cusmobile[13];
	char CusAddress[50]; 
}tr;
void booking();
void show();
void search();
void update();
void deleted();
void AdmineLogin();
void UserLogin();
//------------------------------------------------------------
void gotoxy(short x, short y)                                           
{
 COORD pos ={x,y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
//-------------------------------------------------------------
void AdmineLogin(){
	while(1)
			{	
				system("cls");
				system("color 1A");
				int ich;
				gotoxy(62,0);
				printf("WLCOME TO TRANSPORT SYSTEM\n");
				gotoxy(70,1);
				printf("Admin Login\n");
				gotoxy(60,2);
				printf("------------------------------\n");
				gotoxy(60,3);
				printf("1.Update Password Admin\n");
				gotoxy(60,4);
				printf("------------------------------\n");
				gotoxy(60,5);
				printf("2.Create Employee Account\n");
				gotoxy(60,6);
				printf("------------------------------\n");
				gotoxy(60,7);
				printf("3.Delete Employee Account\n");
				gotoxy(60,8);
				printf("------------------------------\n");
				gotoxy(60,9);
				printf("4.Show Transport Details\n");
				gotoxy(60,10);
				printf("------------------------------\n");
				gotoxy(60,11);
				printf("5.Booking Goods\n");
				gotoxy(60,12);
				printf("------------------------------\n");
				gotoxy(60,13);
				printf("6.Booking Details\n");
				gotoxy(60,14);
				printf("------------------------------\n");
				gotoxy(60,15);
				printf("7.Search Booking\n");
				gotoxy(60,16);
				printf("------------------------------\n");
				gotoxy(60,17);
				printf("8.Update Booking\n");
				gotoxy(60,18);
				printf("------------------------------\n");
				gotoxy(60,19);
				printf("9.Delete Booking\n");
				gotoxy(60,20);
				printf("------------------------------\n");
				gotoxy(60,21);
				printf("10.Logout\n");
				gotoxy(60,22);
				printf("------------------------------\n");
				gotoxy(60,23);
				printf("Enter Your Choise\n");
				gotoxy(60,24);
				scanf("%d",&ich);
				gotoxy(60,25);
				system("cls");
				switch(ich)
				{
					case 1:
						updatePasA();
						break;
					case 2:
						CreateUserPasEmp();
						break;
					case 3:
						deleteEmp();
						break;
					case 4:
						system("cls");
						system("color 1B");
						gotoxy(60,1);
						printf("Transport :\n");
						gotoxy(60,2);
						printf("Auto\t2.Car\t3.Mini Tuck\n");
						gotoxy(60,3);
						printf("--------------------------\n");
						gotoxy(60,4);
						printf("1.100KM-------------500Rup\n");
						gotoxy(60,5);
						printf("2.100KG-------------300Rup\n");
						gotoxy(60,6);
						printf("--------------------------\n");
						gotoxy(60,7);
						system("pause");
						break;
					case 5:
						booking();
						break;
					case 6:
						show();
						break;
					case 7:
						search();
						break;
					case 8:
						update();
						break;
					case 9:
						deleted();
						break;
					case 10:
						exit(1);
						break;
					default:
						gotoxy(70,20);
						printf("Invalide\a");
						gotoxy(60,21);
						system("pause");
				}
				
			}
}
//-------------------------------------------------------------
void UserLogin(){
	int ich;
			while(1)
			{	
				system("cls");
				system("color B");
				gotoxy(62,0);
				printf("WLCOME TO TRANSPORT SYSTEM\n");
				gotoxy(70,1);
				printf("Employee Login\n");
				gotoxy(60,2);
				printf("------------------------------\n");
				gotoxy(60,3);
				printf("1.Show Transport Details\n");
				gotoxy(60,4);
				printf("------------------------------\n");
				gotoxy(60,5);
				printf("2.Booking\n");
				gotoxy(60,6);
				printf("------------------------------\n");
				gotoxy(60,7);
				printf("3.Booking Details\n");
				gotoxy(60,8);
				printf("------------------------------\n");
				gotoxy(60,9);
				printf("4.Search Booking\n");
				gotoxy(60,10);
				printf("------------------------------\n");
				gotoxy(60,11);
				printf("5.Update Booking\n");
				gotoxy(60,12);
				printf("------------------------------\n");
				gotoxy(60,13);
				printf("6.Logout\n");
				gotoxy(60,14);
				printf("------------------------------\n");
				gotoxy(60,15);
				printf("Enter Your Choise\n");
				gotoxy(60,16);
				scanf("%d",&ich);
				gotoxy(60,17);
				switch(ich)
				{
					case 1:
						system("cls");
						system("color 3A");
						gotoxy(62,0);
						printf("WLCOME TO TRANSPORT SYSTEM\n");
						gotoxy(60,2);
						printf("Transport :");
						gotoxy(60,3);
						printf("Auto\t2.Car\t3.Mini Truck\n4.Large Truck");
						gotoxy(60,4);
						printf("--------------------------\n");
						gotoxy(60,5);
						printf("1.100KM-------------500Rup\n");
						gotoxy(60,6);
						printf("2.100KG-------------300Rup\n");
						gotoxy(60,7);
						printf("--------------------------\n");
						gotoxy(60,8);
						system("pause");
						gotoxy(60,9);
						break;
					case 2:
						booking();
						break;
					case 3:
						show();
						break;
					case 4:
						search();
						break;
					case 5:
						update();
						break;
					case 6:
						exit(1);
						break;
					default:
						gotoxy(70,20);
						printf("Invalide\a");
						gotoxy(60,21);
						system("pause");
				}
			}
}
//-------------------------------------------------------------
void CreateUserPasA()
{
	gotoxy(62,0);
	system("color 4B");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	char cv;
	int x=0;
	FILE *Fa=fopen("Admin.data","ab");
	fflush(stdin);
	gotoxy(60,1);
	printf("Create User Name\n");
	gotoxy(60,2);
	gets(admin.Name);
	gotoxy(60,3);
	printf("Create Password\n");
	gotoxy(60,4);
	while(x<25 && cv!=13)
	{
		cv=getch();
		printf("*");
		if(cv!=13)
		admin.Pas[x++]=cv;
	}
	admin.Pas[x]!='\0';
	fwrite((char*)&admin,sizeof(admin),1,Fa);
	fclose(Fa);
	gotoxy(60,6);
	system("cls");
}
//-------------------------------------------------------------
int loginA()
{
	gotoxy(62,0);
	system("color 5C");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	int flag=0;
	int x=0;
	FILE *Fa=fopen("Admin.data","rb");
	char username[40],cv;
	char userpas[25];
	fflush(stdin);
	gotoxy(60,1);
	printf("Enter UserName\n");
	gotoxy(60,2);
	scanf("%s",&username);
	gotoxy(60,3);
	printf("Enter Password\n");
	gotoxy(60,4);
	while(x<25 && cv!=13)
	{
		cv=getch();
		printf("*");
		if(cv!=13)
		userpas[x++]=cv;
	}
	userpas[x]!='\0';
	while(fread((char*)&admin,1,sizeof(admin),Fa))
	{
		if(!strcmp(username, admin.Name))
		{
			if(!strcmp(userpas, admin.Pas))
			{
				flag=1;
			}
		}
	}
	gotoxy(60,5);
	system("cls");
	return flag;
	fclose(Fa);
}
//-------------------------------------------------------------
void updatePasA()
{
	gotoxy(62,0);
	system("color 3B");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	int f=0;
	char upPas[25];
	FILE *Fa=fopen("Admin.data","rb");
	FILE *fb=fopen("demo.data","ab");
	gotoxy(60,1);
	printf("Enter Old Password\n");
	gotoxy(60,2);
	scanf("%s",&upPas);
	while(fread((char*)&admin,1,sizeof(admin),Fa))
	{
		if(!strcmp(upPas,admin.Pas))
		{
			gotoxy(60,3);
			printf("Enter New Password\n");
			gotoxy(60,4);
			scanf("%s",&admin.Pas);
			f=1;
			fwrite((char*)&admin,1,sizeof(admin),fb);
		}
		else
			fwrite((char*)&admin,1,sizeof(admin),fb);
	}
	if(f==0)
	{
		gotoxy(70,20);
		printf("Record Not found\a\n");
	}
	
	fclose(Fa);
	fclose(fb);
	remove("Admin.data");
	rename("demo.data", "Admin.data");
}
//-------------------------------------------------------------
void CreateUserPasEmp()
{
	gotoxy(62,0);
	system("color 7C");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	char cv;
	FILE *Fe=fopen("user.data","ab");
	gotoxy(60,1);
	printf("Create User Id\n");
	gotoxy(60,2);
	scanf("%d",&emp.id);
	fflush(stdin);
	gotoxy(60,3);
	printf("Create User Name\n");
	gotoxy(60,4);
	scanf("%s",&emp.Name);
	int x=0;
	gotoxy(60,5);
	printf("Create Pasword\n");
	gotoxy(60,6);
	while(x<25 && cv!=13)
	{
		cv=getch();
		printf("*");
		if(cv!=13)
		emp.Pas[x++]=cv;
	}
	emp.Pas[x]!='\0';
	fwrite((char*)&emp,1,sizeof(emp),Fe);
	fclose(Fe);
}
//-------------------------------------------------------------
int loginEmp()
{
	gotoxy(61,0);
	system("color D");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	int flag=0;
	FILE *Fe=fopen("user.data","rb");
	char username[40],cv;
	char userpas[25];
	gotoxy(60,1);
	printf("Enter UserName\n");
	gotoxy(60,2);
	scanf("%s",&username);
	gotoxy(60,3);
	printf("Enter Pasword\n");
	int x=0;
	gotoxy(60,4);
	while(x<25 && cv!=13)
	{
		cv=getch();
		printf("*");
		if(cv!=13)
		userpas[x++]=cv;
	}
	userpas[x]!='\0';
	while(fread((char*)&emp,1,sizeof(emp),Fe))
	{
		if(!strcmp(username,emp.Name))
		{
			if(!strcmp(userpas,emp.Pas))
			{
				flag=1;
			}
		}
	}
	return flag;
	fclose(Fe);
}
//-------------------------------------------------------------
void updatePasEmp()
{
	gotoxy(62,0);
	system("color 7A");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	int f=0;
	char upPas[25];
	FILE *Fa=fopen("user.data","rb");
	FILE *fa=fopen("demo.data","ab");
	gotoxy(60,1);
	printf("Enter Old Password\n");
	gotoxy(60,2);
	scanf("%s",&upPas);
	while(fread((char*)&emp,1,sizeof(emp),Fa))
	{
		if(!strcmp(upPas,emp.Pas))
		{
			gotoxy(60,3);
			printf("Enter New Password\n");
			gotoxy(60,4);
			fflush(stdin);
			scanf("%s",&emp.Pas);
			f=1;
			fwrite((char*)&emp,1,sizeof(emp),fa);
		}
		else
			fwrite((char*)&emp,1,sizeof(emp),fa);
	}
	if(f==0)
	{
		gotoxy(60,5);
		printf("Record Not found\a\n");
	}
	fclose(Fa);
	fclose(fa);
	remove("user.data");
	rename("demo.data","user.data");
}
//-------------------------------------------------------------
void deleteEmp()
{
	gotoxy(62,0);
	system("color 5E");
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	FILE *Fe=fopen("user.data","rb");
	FILE *fa=fopen("demo.data","ab");
	int f=0;
	char username[25],cv;
	gotoxy(60,1);
	printf("Enter UserName\n");
	int x=0;
	gotoxy(60,2);
	while(x<25 && cv!=13)
	{
		cv=getch();
		printf("*");
		if(cv!=13)
		username[x++]=cv;
	}
	username[x]!='\0';
	while(fread((char*)&emp,1,sizeof(emp),Fe))
	{
		if(strcmp(username,emp.Name))
		{
			fwrite((char*)&emp,sizeof(emp),1,fa);
		}
		else
			f=1;
	}
	if(f==0)
	{
		gotoxy(60,3);
		printf("Record Not found\a\n");
	}
	else
	{
		gotoxy(60,4);
		printf("Succeccful\n");
	}
	fclose(Fe);
	fclose(fa);
	remove("user.data");
	rename("demo.data","user.data");
}
//-------------------------------------------------------------
void booking()
{
	system("cls");
	system("0E");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	FILE *bk=fopen("Booking.data","ab");
	fflush(stdin);
	gotoxy(62,1);
	printf("Enter User Name\n");
	gotoxy(62,2);
	scanf("%s",&tr.username);
	gotoxy(62,3);
	printf("Enter booking id\n");
	gotoxy(62,4);
	scanf("%s",&tr.bookingid);
	gotoxy(62,5);
	printf("Enter booking date\n");
	gotoxy(62,6);
	fflush(stdin);
	gotoxy(62,7);
	gets(tr.bookingdate);
	gotoxy(62,8);
	printf("Enter source\n");
	gotoxy(62,9);
	gets(tr.fromto);
	gotoxy(62,10);
	printf("Enter Destination\n");
	gotoxy(62,11);
	gets(tr.destination);
	gotoxy(62,12);
	printf("Enter Goods Name\n");
	gotoxy(62,13);
	gets(tr.goods);
	gotoxy(62,14);
	printf("Transport :1.Auto\t2.Car\t3.Mini Tuck\n");
	gotoxy(62,15);
	printf("Select Transport Type\n");
	int ch;
	gotoxy(62,16);
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			strcpy(tr.TranspotType,"Auto");
			break;
		case 2:
			strcpy(tr.TranspotType,"Car");
			break;
		case 3:
			strcpy(tr.TranspotType,"Mini Truck");
			break;
		default:
			gotoxy(70,20);
			printf("Invalid\a");
	}
	gotoxy(62,17);
	printf("---------------------------\n");
	gotoxy(62,18);
	printf("|1.100KM-------------500Rup|\n");
	gotoxy(62,19);
	printf("|2.100KG-------------300Rup|\n");
	gotoxy(62,20);
	printf("---------------------------\n");
	gotoxy(62,21);
	printf("Enter Kilo Metre\n");
	gotoxy(62,22);
	scanf("%s",&tr.perkm);
	gotoxy(62,23);
	printf("Enter Kilo Gram\n");
	gotoxy(62,24);
	scanf("%s",&tr.perkg);
	fflush(stdin);
	gotoxy(62,25);
	printf("Enter Coustomer Name\n");
	gotoxy(62,26);
	gets(tr.Cusname);
	gotoxy(62,27);
	printf("Enter Cuustomer Mobile No\n");
	gotoxy(62,28);
	gets(tr.Cusmobile);
	gotoxy(62,29);
	printf("Enter Coustomer Address\n");
	gotoxy(62,30);
	gets(tr.CusAddress);
	gotoxy(62,31);
	fwrite((char*)&tr,sizeof(tr),1,bk);
	fclose(bk);
}
//-------------------------------------------------------------
void show()
{
	system("cls");
	system("color 9F");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	gotoxy(60,1);
	printf("----------Booking Details------------------\n");
	FILE *bk=fopen("Booking.data","rb");
	while(fread((char *)&tr,sizeof(tr),1,bk))
	{
		gotoxy(60,2);
		printf("+-------------------------------------------+\n");
		gotoxy(60,3);
		printf("Coustomer Name : %s\n",tr.Cusname);
		gotoxy(60,4);
		printf("-------------------------------------------\n");
		gotoxy(60,5);
		printf("Coustomer Mobile No : %s\n",tr.Cusmobile);
		gotoxy(60,6);
		printf("-------------------------------------------\n");
		gotoxy(60,7);
		printf("Coustomer Address : %s\n",tr.CusAddress);
		gotoxy(60,8);
		printf("-------------------------------------------\n");
		gotoxy(60,9);
		printf("User Name : %s\n",tr.username);
		gotoxy(60,10);
		printf("-------------------------------------------\n");
		gotoxy(60,11);
		printf("User Id : %s\n",tr.bookingid);
		gotoxy(60,12);
		printf("-------------------------------------------\n");
		gotoxy(60,13);
		printf("Booking Date : %s\n",tr.bookingdate);
		gotoxy(60,14);
		printf("-------------------------------------------\n");
		gotoxy(60,15);
		printf("Loading Goods Location : %s\n",tr.fromto);
		gotoxy(60,16);
		printf("-------------------------------------------\n");
		gotoxy(60,17);
		printf("Delivery Goods Location : %s\n",tr.destination);
		gotoxy(60,18);
		printf("-------------------------------------------\n");
		gotoxy(60,19);
		printf("Goods Name : %s\n",tr.goods);
		gotoxy(60,20);
		printf("-------------------------------------------\n");
		gotoxy(60,21);
		printf("Transport Type : %s\n",tr.TranspotType);
		gotoxy(60,22);
		printf("-------------------------------------------\n");
		gotoxy(60,23);
		printf("Goods Rate Pre K.M : %sKM\n",tr.perkm);
		gotoxy(60,24);
		printf("+-------------------------------------------+\n");
		gotoxy(60,25);
		printf("Goods Rate Pre K.G : %sKG\n",tr.perkg);
		gotoxy(60,26);
		system("pause");
		system("cls");
	}
	fclose(bk);
}
//-------------------------------------------------------------
void search()
{
	system("cls");
	system("color 8E");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	FILE *bk=fopen("Booking.data","rb");
	int f=0;
	char uname[40];
	char id[25];
	fflush(stdin);
	gotoxy(60,1);
	printf("Enter User Name\n");
	gotoxy(60,2);
	scanf("%s",&uname);
	gotoxy(60,3);
	printf("Enter booking id\n");
	gotoxy(60,4);
	scanf("%s",&id);
	gotoxy(60,5);
	system("cls");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	while(fread((char *)&tr,sizeof(tr),1,bk))
	{
		if(!strcmp(uname, tr.username))
		{
			if(!strcmp(id, tr.bookingid))
			{
				fflush(stdin);
				gotoxy(60,2);
				printf("+-------------------------------------------+\n");
				gotoxy(60,3);
				printf("Coustomer Name : %s\n",tr.Cusname);
				gotoxy(60,4);
				printf("-------------------------------------------\n");
				gotoxy(60,5);
				printf("Coustomer Mobile No : %s\n",tr.Cusmobile);
				gotoxy(60,6);
				printf("-------------------------------------------\n");
				gotoxy(60,7);
				printf("Coustomer Address : %s\n",tr.CusAddress);
				gotoxy(60,8);
				printf("-------------------------------------------\n");
				gotoxy(60,9);
				printf("User Name : %s\n",tr.username);
				gotoxy(60,10);
				printf("-------------------------------------------\n");
				gotoxy(60,11);
				printf("User Id : %s\n",tr.bookingid);
				gotoxy(60,12);
				printf("-------------------------------------------\n");
				gotoxy(60,13);
				printf("Booking Date : %s\n",tr.bookingdate);
				gotoxy(60,14);
				printf("-------------------------------------------\n");
				gotoxy(60,15);
				printf("Loading Goods Location : %s\n",tr.fromto);
				gotoxy(60,16);
				printf("-------------------------------------------\n");
				gotoxy(60,17);
				printf("Delivery Goods Location : %s\n",tr.destination);
				gotoxy(60,18);
				printf("-------------------------------------------\n");
				gotoxy(60,19);
				printf("Goods Name : %s\n",tr.goods);
				gotoxy(60,20);
				printf("-------------------------------------------\n");
				gotoxy(60,21);
				printf("Transport Type : %s\n",tr.TranspotType);
				gotoxy(60,22);
				printf("-------------------------------------------\n");
				gotoxy(60,23);
				printf("Goods Rate Pre K.M : %sKM\n",tr.perkm);
				gotoxy(60,24);
				printf("+-------------------------------------------+\n");
				gotoxy(60,25);
				printf("Goods Rate Pre K.G : %sKG\n",tr.perkg);
				gotoxy(60,26);
				f=1;
			}
		}
	}
	if (f == 0)
	{
		gotoxy(60,1);
		printf("Rcord Nod Found.\a\n");
	}
	fclose(bk);
	gotoxy(60,27);
	system("pause");
}
//-------------------------------------------------------------
void update()
{
	system("cls");
	system("color 9C");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	FILE *fd = fopen("Booking.data", "rb");
	FILE *fb = fopen("Demo.data", "ab");
	char scon[15];
	int f = 0;
	gotoxy(60,1);
	printf("Enter Booking id.\n");
	fflush(stdin);
	gotoxy(60,2);
	gets(scon);
	system("cls");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	while (fread((char *)&tr, 1, sizeof(tr), fd))
	{
		if (!strcmp(scon, tr.bookingid))
		{
			gotoxy(60,1);
			printf("+----------------------------------------------+\n");
			fflush(stdin);
			gotoxy(60,2);
			printf("Coustomer Name          : %s\n",tr.Cusname);
			gotoxy(60,3);
			printf("Coustomer Mobile No     : %s\n",tr.Cusmobile);
			gotoxy(60,4);
			printf("Coustomer Address       : %s\n",tr.CusAddress);
			gotoxy(60,5);
			printf("User Name               : %s\n",tr.username);
			gotoxy(60,6);
			printf("User Id                 : %s\n",tr.bookingid);
			gotoxy(60,7);
			printf("Booking Date            : %s\n",tr.bookingdate);
			gotoxy(60,8);
			printf("Loading Goods Location  : %s\n",tr.fromto);
			gotoxy(60,9);
			printf("Delivery Goods Location : %s\n",tr.destination);
			gotoxy(60,10);
			printf("Goods Name              : %s\n",tr.goods);
			gotoxy(60,11);
			printf("Transport Type          : %s\n",tr.TranspotType);
			gotoxy(60,12);
			printf("Goods Rate Pre K.M      : %sKM\n",tr.perkm);
			gotoxy(60,13);
			printf("Goods Rate Pre K.G      : %sKG\n",tr.perkg);
			gotoxy(60,14);
			printf("+----------------------------------------------+\n");
			gotoxy(60,15);
			printf("Enter User Name\n");
			gotoxy(60,16);
			scanf("%s",&tr.username);
			gotoxy(60,17);
			printf("Enter booking id\n");
			gotoxy(60,18);
			scanf("%s",&tr.bookingid);
			gotoxy(60,19);
			printf("Enter booking date\n");
			fflush(stdin);
			gotoxy(60,20);
			gets(tr.bookingdate);
			gotoxy(60,21);
			printf("Enter source\n");
			gotoxy(60,22);
			gets(tr.fromto);
			gotoxy(60,23);
			printf("Enter Destination\n");
			gotoxy(60,24);
			gets(tr.destination);
			gotoxy(60,25);
			printf("Enter Goods Name\n");
			gotoxy(60,26);
			gets(tr.goods);
			gotoxy(60,27);
			printf("Transport :1.Auto ,2.Car ,3.Mini Tuck\n");
			gotoxy(60,28);
			printf("Select Transport Type\n");
			int ch;
			gotoxy(60,29);
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					strcpy(tr.TranspotType,"Auto");
					break;
				case 2:
					strcpy(tr.TranspotType,"Car");
					break;
				case 3:
					strcpy(tr.TranspotType,"Mini Truck");
					break;
				default:
					gotoxy(70,20);
					printf("Invalid\a");
			}
			gotoxy(60,30);
			printf("---------------------------\n");
			gotoxy(60,31);
			printf("|1.100KM-------------500Rup|\n");
			gotoxy(60,32);
			printf("|2.100KG-------------300Rup|\n");
			gotoxy(60,33);
			printf("---------------------------\n");
			gotoxy(60,34);
			printf("Enter Kilo Metre\n");
			gotoxy(60,35);
			scanf("%s",&tr.perkm);
			gotoxy(60,36);
			printf("Enter Kilo Gram\n");
			gotoxy(60,37);
			scanf("%s",&tr.perkg);
			fflush(stdin);
			gotoxy(60,38);
			printf("Enter Coustomer Name\n");
			gotoxy(60,39);
			gets(tr.Cusname);
			gotoxy(60,40);
			printf("Enter Cuustomer Mobile No\n");
			gotoxy(60,41);
			gets(tr.Cusmobile);
			gotoxy(60,42);
			printf("Enter Coustomer Address\n");
			gotoxy(60,43);
			gets(tr.CusAddress);
			gotoxy(60,44);
			fwrite((char *)&tr, 1, sizeof(tr), fb);
			f = 1;
		}
		else
			fwrite((char *)&tr, 1, sizeof(tr), fb);
	}
	if (f == 0)
	{
		gotoxy(60,1);
		printf("Rcord Nod Found.\a\n");
	}

	fclose(fd);
	fclose(fb);
	remove("Booking.data");
	rename("Demo.data", "Booking.data");
}
//-------------------------------------------------------------
void deleted()
{
	system("cls");
	system("color 5F");
	gotoxy(62,0);
	printf("WLCOME TO TRANSPORT SYSTEM\n");
	FILE *fd = fopen("Booking.data", "rb");
	FILE *fb = fopen("Demo1.data", "ab");
	char scon[15];
	int f = 0;
	gotoxy(60,1);
	printf("Enter Booking No.\n");
	fflush(stdin);
	gotoxy(60,2);
	gets(scon);
	gotoxy(60,3);
	system("cls");

	while (fread((char *)&tr, 1, sizeof(tr), fd))
	{
		if (strcmp(scon, tr.bookingid))
		{
			fwrite((char *)&tr, sizeof(tr), 1, fb);
		}
		else
			f = 1;
	}

	if (f == 0)
	{
		gotoxy(62,0);
		printf("Rcord Not Found.\a\n");
	}

	fclose(fd);
	fclose(fb);
	remove("Booking.data");
	rename("Demo1.data", "Booking.data");

}
//-------------------------------------------------------------
