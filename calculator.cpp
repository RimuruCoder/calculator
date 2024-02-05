#include<iostream>
#include<math.h>

using namespace std;

void delta(long double a, long double b, long double c)
{
	long double x1, x2;
	long double delta = pow(b,2) - 4*a*c ;
	if(delta==0)
	{
		x1 = b / (2*a);
		cout<<"\nx1 = x2 ="<<x1;
		cout<<"\n\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
	}
	else if(delta>0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
		cout<<"\nx1 = "<<x1;
		x2 = (-b - sqrt(delta)) / (2*a);
		cout<<"\nx2 = "<<x2;
		cout<<"\n\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
	}
	else
	{
		cout<<"\nNo solution";
		cout<<"\n\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
	}
}

bool confirm(char chr)
{
	if((int)chr==89||(int)chr==121)
	{
		return true;
	}
	else if((int)chr==78||(int)chr==110)
	{
		cout<<"\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return false;
	}
	else
	{
		cout<<"\nError\n";
		cout<<"\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return false;
	}
}

int mod1()
{
	long double a, b, c;
	cout<<"\nInput ax^2+bx+c: ";
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	if(a==0)
	{
		cout<<"\n--------------------------------";
		cout<<"\n\nThe value given isn't satisfied";
		cout<<"\n\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return 0;
	}
	delta(a, b, c);
	return 0;
}

int mod2()
{
	char chr;
	long double a, b, c;
	cout<<"\nInput ax^2+bx+c: ";
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	if(a==0)
	{
		cout<<"\n--------------------------------";
		cout<<"\n\nThe given value isn't satisfied\n";
		cout<<"\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return 0;
	}
	long double del = pow(b,2) - 4*a*c;
	cout<<"\ndelta = "<<del;
	cout<<"\n\n--------------------------------";
	cout<<"\n\nYou wanna slove x (y/n): ";
	cin>>chr;
	if(confirm(chr)==true)
	{
		delta(a, b, c);
	}
	return 0;
}

int mod3()
{
	long double a, b, c, x1, x2, S, P;
	cout<<"\nInput ax^2+bx+c: ";
	cout<<"\na = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	if(a==0)
	{
		cout<<"\n--------------------------------";
		cout<<"\n\nThe equation isn't satisfied \n";
		cout<<"\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return 0;
	}
	S = -b/a;
	P = c/a;
	if(a+b+c)
	{
		x1=1;
		x2=c/a;
		cout<<"\nx1 = "<<x1;
		cout<<"\nx2 = "<<x2;
		cout<<"\nS = "<<S;
		cout<<"\nP = "<<P;
	}
	else if(a-b+c)
	{
		x1=-1;
		x2=-c/a;
		cout<<"\nx1 = "<<x1;
		cout<<"\nx2 = "<<x2;
		cout<<"\nS = "<<S;
		cout<<"\nP = "<<P;
	}
	else
	{
		cout<<"\nS = "<<S;
		cout<<"\nP = "<<P;
	}
	cout<<"\n\n--------------------------------";
	cout<<"\nThank you for using my project";
	cout<<"\nDeveloped by RimuruCoder";
	return 0;
}

int mod4()
{
	long double S, P;
	int temp = 1;
	cout<<"Nhap S va P: ";
	cout<<"\nS = ";
	cin>>S;
	cout<<"P = ";
	cin>>P;
	if(pow(S,2)-4*P<0)
	{
		cout<<"\n--------------------------------";
		cout<<"\n\nThe given value isn't satisfied\n";
		cout<<"\n--------------------------------";
		cout<<"\nThank you for using my project";
		cout<<"\nDeveloped by RimuruCoder";
		return 0;
	}
	delta(temp, -S, P);
	return 0;
}

int main()
{
	int user;
	cout<<"Choose mode: ";
	cout<<"\nMODE 1: slove Polynomial";
	cout<<"\nMODE 2: slove Delta";
	cout<<"\nMODE 3: slove Vieta";
	cout<<"\nMODE 4: find two numbers knowing their sum and product";
	cout<<"\n\nYou choose mode: ";
	cin>>user;
	if(user==1||user==2||user==3||user==4)
	{
		cout<<"\n--------------------------------\n";
		cout<<"\nYou have entered mode "<<user<<'\n';
		if(user==1)
		{
			mod1();
		}
		else if(user==2)
		{
			mod2();
		}
		else if(user==3)
		{
			mod3();
		}
		else
		{
			mod4();
		}
	}
	else
	{
		cout<<"\n--------------------------------";
		cout<<"\nSorry, we don't have that mode";
		return 0;
	}
}
