//sample program to demonstrate class n object
#include<iostream.h>
#include<string.h>
#include<conio.h>

class person
{
	char name[50];
	int age;
	float height,weight;
public:
	void setData(char n[ ],int a,float h,float w)
	{
		strcpy(name,n);
		age=a;
		height=h;
		weight=w;
	}
	void getData()
	{
		cout<<" Name ="<<name;
		cout<<"\n Age="<<age;
		cout<<"\n Height="<<height<<" Feet";
		cout<<"\n Weight="<<weight<<" Kg";
	}
};

void main()
{
	person p1;
	p1.setData("Arun",21,5.8,60);
	p1.getData();
getch();
}
