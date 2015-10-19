#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

int check1(char ar[3][3],char x)
{
	int f;
	for(int i=0;i<3;i++)
	{
		f=0;
		for(int j=0;j<3;j++)
		{
			if(ar[i][j]==x)
			{
				f++;
			}
		}
		if(f==3)
			break;
	}

	return f;
}

int check2(char ar[3][3],char x)
{
	int f;
	for(int i=0;i<3;i++)
	{
		f=0;
		for(int j=0;j<3;j++)
		{
			if(ar[j][i]==x)
			{
				f++;
			}
		}
		if(f==3)
		break;
	}

	return f;
}

int check3(char ar[3][3],char x)
{
	int f=0;
	for(int i=0;i<3;i++)
	{
		if(ar[i][i]==x)
		{
			f++;
		}
	}
	if(f==3)
		return 3;
	else
		return 0;
}

int check4(char ar[3][3],char x)
{
	int f=0;
	for(int i=0;i<3;i++)
	{
		if(ar[i][2-i]==x)
		{
			f++;
		}
	}
	if(f==3)
		return 3;
	else
		return 0;
}

void output(char ar[3][3])
{
	for(int i=0;i<3;i++)
	{
		cout<<endl<<"\t";
		for(int j=0;j<3;j++)
		{
			cout<<ar[i][j];
		}
	}
	cout<<endl<<endl;
	return ;
}



void play()
{
	char ar[3][3];
	int r,c,b=0;

	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			ar[i][j]='~';
		}
	}

	for(i=1;i<=9;i++)
	{
		if(i%2==1)
		{
			a1:
			cout<<"\n\tEnter a CROSS (X):\n\n";
			cout<<"\tEnter row and column:";
			cin>>r>>c;

			if(ar[r-1][c-1]=='~'&&r<=3&&c<=3)
			{
				ar[r-1][c-1]='X';
			}

			else
			{
				cout<<"\tWrong parameters inputed ! ! !\tEnter again ! !\n";
				goto a1;
			}
			output(ar);

			if(check1(ar,'X')==3||check2(ar,'X')==3||check3(ar,'X')==3||check4(ar,'X')==3)
			{
				cout<<"\t****PLAYER MARKING WITH X SIGN WINS!**** \n\n\tCONGRATULATIONS\n\n";
				b=1;
				cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
				getch();
				break;
			}

		}

		else
		{
			a2:
			cout<<"\n\tEnter a CIRCLE (O) :\n\n";
			cout<<"\tEnter row & column:";
			cin>>r>>c;
			if(ar[r-1][c-1]=='~'&&r<=3&&c<=3)
			{
				ar[r-1][c-1]='O';
			}
			else
			{
				cout<<"\tWrong parameters inputed ! ! !\tEnter again ! !\n";
				goto a2;
			}
			output(ar);


			if(check1(ar,'O')==3||check2(ar,'O')==3||check3(ar,'O')==3||check4(ar,'O')==3)
			{
				cout<<"\t**** PLAYER MARKING WITH O SIGN WINS! **** \n\n\tCONGRATULATIONS\n\n";
				b=1;
				cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
				getch();
				break;
			}

		}
	}

	if(b==0)
	{
		cout<<"\t**** GAME DRAWN ! ! ! ****\n\n";
		cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
		getch();
	}
}


void main()
{
	int ch=0;

	while(ch!=4)
	{
		clrscr();

		cout<<"\t**** PRESS 1 FOR 'RULES & REGULATIONS' ****\n\n";
		cout<<"\t**** PRESS 2 FOR 'LET'S PLAY A GAME OF CRISS-CROSS! ! !' ****\n\n";
		cout<<"\t**** PRESS 3 FOR 'INFO ABOUT DEVELOPER' ****\n\n";
		cout<<"\t**** PRESS 4 FOR 'E X I T' ****\n\n";

		cout<<"\tEnter choice :1/2/3/4 :";

		cin>>ch;

		switch(ch)
		{
			case 1:

			clrscr();
			cout<<"\n\tTHE GAME IS PLAYED ON A 3X3 SQUARE BLANKS\n\tWITH EACH PLAYER MARKING IN TURNS\n\tTHE PLAYER GETTING THE SIGNS IN A STRAIGHT LINE\n\tHORIZONTALLY,VERTICALLY OR DIAGONALLY\n\tCROSSING THREE SUCCESSIVE SQUARES\n\tIS THE WINNER\n\n\n";

			cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
			getch();

			break;

			case 2:

			clrscr();
			play();
			break;

			case 3:

			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tDEVELOPED BY \n\t\t\tSUGATO CHAKRABORTY\n\n\n";

			cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
			getch();

			break;

			case 4:

			clrscr();
			cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\tTHANKS FOR PLAYING:\n\n";
			break;

			default:

			cout<<"\n\tWrong option entered ! ! \n\n\n";
			cout<<"\tPRESS ANY KEY FOR MAIN MENU:";
			getch();

		}
	}
}


