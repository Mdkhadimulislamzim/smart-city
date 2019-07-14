#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
char cityname[20],mayorname[20];
int numofpeople,income,select;
bool gas,water,court,electricity,internet,sewage,education,healthcare;
void intro()
{
	cout<<"********************SMART CITY********************";
}
void details()
{
	system("cls");
	intro();
	cout<<"\nEnter the name of the city:";
	cin>>cityname;
	cout<<"\nEnter the mayor name of the city:";
	cin>>mayorname;
	cout<<"\nEnter the number of people in the city:";
	cin>>numofpeople;
	cout<<"\nEnter the total income of the city:";
	cin>>income;
	getch();
}
void viewdetails()
{
	system("cls");
	intro();
	cout<<"\nCity Name:"<<cityname;
	cout<<"\nMayor of the City:"<<mayorname;
	cout<<"\nNumber of people in the city:"<<numofpeople;
	cout<<"\nIncome of the city:"<<income;
	getch();
}
void functional()
{
	system("cls");
	intro();
	cout<<"\nReply with 1 if the component is functioning else with 0 if not functioning";
	cout<<"\nGas:";
	cin>>gas;
	cout<<"\nWater:";
	cin>>water;
	cout<<"\nCourt:";
	cin>>court;
	cout<<"\nElectricity:";
	cin>>electricity;
	cout<<"\nInternet:";
	cin>>internet;
	cout<<"\nSewage:";
	cin>>sewage;
	cout<<"\nEducation:";
	cin>>education;
	cout<<"\nHealth-care:";
	cin>>healthcare;
	getch();
}
void functiondisplay()
{
	system("cls");
	intro();
	cout<<"\nGas:"<<gas;
	cout<<"\nWater:"<<water;
	cout<<"\nCourt:"<<court;
	cout<<"\nElectricity:"<<electricity;
	cout<<"\nInternet:"<<internet;
	cout<<"\nSewage:"<<sewage;
	cout<<"\nEducation:"<<education;
	cout<<"\nHealth-care:"<<healthcare;
	getch();
}
void menu()
{
	system("cls");
	intro();
	cout<<"\nThe operations which can be performed are given below";
	cout<<"\nEnter 1 to see the details of the city";
	cout<<"\nEnter 2 to change the details of the city";
	cout<<"\nEnter 3 to see the functioning of the city";
	cout<<"\nEnter 4 to change the functioning of the city";
	cout<<"\nEnter anything else to exit";
	cin>>select;
	switch(select)
	{
		case 1:
			viewdetails();
			break;
		case 2:
			details();
			break;
		case 3:
			functiondisplay();
			break;
		case 4:
			functional();
			break;
		default:
			exit(0);
			break;
	}
}
main()
{
	system("cls");
	system("color f0");
	details();
	functional();
	while(true)
	menu();
}
