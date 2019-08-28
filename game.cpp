#include<bits/stdc++.h>
using namespace std;
int main()
{	
cout<<"\t\t******************************************"<<endl;
 cout<<"\t\t*       Developed by                     *"<<endl;
 cout<<"\t\t*                    	                 *"<<endl;	
 cout<<"\t\t*             #Ruthwik Kancharla          *"<<endl;
 cout<<"\t\t*                    			 *"<<endl;
 cout<<"\t\t*                 27/08/2019		 *"<<endl;
 cout<<"\t\t******************************************"<<endl;

cout<<endl;
	cout<<"				WELCOME TO BINGO"<<endl;
	cout<<endl;
	cout<<"Computer: I believe,A champion is afraid of losing. Everyone else is afraid of  winning."<<endl;
		cout<<endl;
	cout<<"Comeon, you're a champ!"<<endl;
	cout<<endl;
	cout<<"Enough of this,Let's get into the game"<<endl;
		cout<<endl;
	string name1,name2;
	int choice1,checkeda1[5]={0},checkeda2[5]={0},checkeda3=0,checkeda4=0,fla1=1,fla2=1;
	int cnt1=0,flaga1=1,flaga2=1,flaga3=1,flaga4=1,inda1,inda2;
	int choice2,checkedb1[5]={0},checkedb2[5]={0},checkedb3=0,checkedb4=0,flb1=1,flb2=1;
	int cnt2=0,flagb1=1,flagb2=1,flagb3=1,flagb4=1,indb1,indb2;


	cout<<"Computer: Enter the name of player who starts the game"<<endl;
	cin>>name1;
	cout<<"Enter the other person's name"<<endl;
	cin>>name2;

	int a[25]={0},b[25]={0};
			int player1[5][5]={0};
			int player2[5][5]={0};
cout<<endl;
//player1 numbers generation starts
cout<<"Ok,"<<name1<<" Enter 1 if you want to generate numbers randomly"<<endl;
cout<<"Enter 2 if you want to enter numbers manually"<<endl;
cin>>choice1;
if(choice1==1)
{
int n = 25, r, result;
int getRandNum[25];
int arr[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
srand ( time(NULL) );	
for (int x = 0; x < 25; ++x)
{	
result = r = 0;	
r = rand() % n;	
result = arr[r];	
getRandNum[x] = arr[result];
arr[r] = arr[n-1];	
n--;	
}
for(int i=0;i<25;i++)
{
	a[i]=getRandNum[i]+1;
}









	int p=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		player1[i][j]=a[p];
		p++;
		}
	}
}
else
{
	cout<<"Enter the numbers";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>player1[i][j];}
	}
}
	cout<<name1<<", your numbers are:";
	cout<<"\n"<<endl;
	for(int i=0;i<5;i++)
	{


		for(int j=0;j<5;j++)
		{
		cout<<setw(2)<<player1[i][j]<<" ";		
		}
		cout<<endl;
	}


		cout<<"\n";
//player1 numbers generation ends
//player2 numbers generation starts
cout<<"Ok,"<<name2<<" Enter 1 if you want to generate numbers randomly"<<endl;
cout<<"Enter 2 if you want to enter numbers manually"<<endl;



cin>>choice2;
if(choice2==1)
{
int n = 25, r, result;
int getRandNum[25];
int arr[25] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24};
srand ( time(NULL) );	
for (int x = 0; x < 25; ++x)
{	
result = r = 0;	
r = rand() % n;	
result = arr[r];	
getRandNum[x] = arr[result];
arr[r] = arr[n-1];	
n--;	
}
for(int i=0;i<25;i++)
{
	b[i]=getRandNum[i]+1;
}









	int p=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		player2[i][j]=b[p];
		p++;
		}
	}
}
else
{
	cout<<"Enter the numbers";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cin>>player2[i][j];}
	}
}
	cout<<name2<<", your numbers are:";
	cout<<"\n"<<endl;
	for(int i=0;i<5;i++)
	{


		for(int j=0;j<5;j++)
		{
		cout<<setw(2)<<player2[i][j]<<" ";		
		}
		cout<<endl;
	}
//player2 numbers generation ends.


	while(cnt1<5 && cnt2<5)
	{
		flaga1=1,flaga2=1,flaga3=1,flaga4=1;
		flagb1=1,flagb2=1,flagb3=1,flagb4=1;

		int no1;
		int no2;
		cout<<"Enter a number to be striken: ";
		cin>>no1;
		cout<<endl;
		if(no1>25) cout<<"The entered number doesn't exist.."<<endl<<"Enter a number between 1 to 25"<<endl;
//player1 no1 starts here
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]==no1)
				{
					player1[i][j]='X';
					inda1=i;
					inda2=j;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]=='X'){
				printf("%2c",player1[i][j]);
				cout<<" ";}
				else{cout<<setw(2)<<player1[i][j]<<" ";}
			}
			cout<<endl;
		}
		cout<<"\n";


			for(int j=0;j<5;j++)
			{
				if(checkeda1[inda1]==0){
				if(player1[inda1][j]=='X')
				{
					flaga1=flaga1*1;
				}
				else flaga1=flaga1*0;}
				else flaga1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkeda2[inda2]==0){
				if(player1[j][inda2]=='X')
				{
					flaga2=flaga2*1;
				}
				else flaga2=flaga2*0;}
				else flaga2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkeda3==0){
				if(player1[j][j]=='X')
				{
					flaga3=flaga3*1;
				}
				else flaga3=flaga3*0;}
				else flaga3=0;

			}
			int h=4;
			for(int j=0;j<5;j++)
			{
				if(checkeda4==0){
				if(player1[j][h]=='X')
				{
					flaga4=flaga4*1;
				}
				else flaga4=flaga4*0;
				h--;}
				else flaga4=0;

			}
			if(flaga1==1) checkeda1[inda1]=1;
			if(flaga2==1) checkeda2[inda2]=1;
			if(flaga3==1) checkeda3=1;
			if(flaga4==1) checkeda4=1;
			if(flaga1==1||flaga2==1||flaga3==1||flaga4==1) 
				cnt1++;
			cout<<"The current count of "<<name1<<" is "<<cnt1<<endl;
				if(cnt1>=5) {cout<<"Congratulations,"<<name1<<" YOU WIN"; return 0;}
//player1 no1 ends here
//player2 no1 starts here




		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player2[i][j]==no1)
				{
					player2[i][j]='X';
					indb1=i;
					indb2=j;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player2[i][j]=='X'){
				printf("%2c",player2[i][j]);
				cout<<" ";}
				else{cout<<setw(2)<<player2[i][j]<<" ";}
			}
			cout<<endl;
		}
		cout<<"\n";


			for(int j=0;j<5;j++)
			{
				if(checkedb1[indb1]==0){
				if(player2[indb1][j]=='X')
				{
					flagb1=flagb1*1;
				}
				else flagb1=flagb1*0;}
				else flagb1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkedb2[indb2]==0){
				if(player2[j][indb2]=='X')
				{
					flagb2=flagb2*1;
				}
				else flagb2=flagb2*0;}
				else flagb2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkedb3==0){
				if(player2[j][j]=='X')
				{
					flagb3=flagb3*1;
				}
				else flagb3=flagb3*0;}
				else flagb3=0;

			}
			 h=4;
			for(int j=0;j<5;j++)
			{
				if(checkedb4==0){
				if(player2[j][h]=='X')
				{
					flagb4=flagb4*1;
				}
				else flagb4=flagb4*0;
				h--;}
				else flagb4=0;

			}
			if(flagb1==1) checkedb1[indb1]=1;
			if(flagb2==1) checkedb2[indb2]=1;
			if(flagb3==1) checkedb3=1;
			if(flagb4==1) checkedb4=1;
			if(flagb1==1||flagb2==1||flagb3==1||flagb4==1) 
				cnt2++;
			cout<<"The current count of "<<name2<<" is "<<cnt2<<endl;

				if(cnt2>=5) {cout<<"Congratulations,"<<name2<<" YOU WIN"; return 0;}


fla1=1,fla2=1;
flb1=1,flb2=1;
flaga1=1,flaga2=1,flaga3=1,flaga4=1,inda1,inda2;
flagb1=1,flagb2=1,flagb3=1,flagb4=1,indb1,indb2;





cout<<"Enter a number to be striken: ";
		cin>>no2;
		cout<<endl;
		if(no2>25) cout<<"The entered number doesn't exist.."<<endl<<"Enter a number between 1 to 25"<<endl;
//player1 no2 starts here
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]==no2)
				{
					player1[i][j]='X';
					inda1=i;
					inda2=j;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]=='X'){
				printf("%2c",player1[i][j]);
				cout<<" ";}
				else{cout<<setw(2)<<player1[i][j]<<" ";}
			}
			cout<<endl;
		}
		cout<<"\n";


			for(int j=0;j<5;j++)
			{
				if(checkeda1[inda1]==0){
				if(player1[inda1][j]=='X')
				{
					flaga1=flaga1*1;
				}
				else flaga1=flaga1*0;}
				else flaga1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkeda2[inda2]==0){
				if(player1[j][inda2]=='X')
				{
					flaga2=flaga2*1;
				}
				else flaga2=flaga2*0;}
				else flaga2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkeda3==0){
				if(player1[j][j]=='X')
				{
					flaga3=flaga3*1;
				}
				else flaga3=flaga3*0;}
				else flaga3=0;

			}
			 h=4;
			for(int j=0;j<5;j++)
			{
				if(checkeda4==0){
				if(player1[j][h]=='X')
				{
					flaga4=flaga4*1;
				}
				else flaga4=flaga4*0;
				h--;}
				else flaga4=0;

			}
			if(flaga1==1) checkeda1[inda1]=1;
			if(flaga2==1) checkeda2[inda2]=1;
			if(flaga3==1) checkeda3=1;
			if(flaga4==1) checkeda4=1;
			if(flaga1==1||flaga2==1||flaga3==1||flaga4==1) 
				cnt1++;
			cout<<"The current count of "<<name1<<" is "<<cnt1<<endl;

				if(cnt1>=5) {cout<<"Congratulations,"<<name1<<" YOU WIN"; return 0;}
//player1 no2 ends here
//player2 no2 starts here




		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player2[i][j]==no2)
				{
					player2[i][j]='X';
					indb1=i;
					indb2=j;
				}
			}
		}
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player2[i][j]=='X'){
				printf("%2c",player2[i][j]);
				cout<<" ";}
				else{cout<<setw(2)<<player2[i][j]<<" ";}
			}
			cout<<endl;
		}
		cout<<"\n";


			for(int j=0;j<5;j++)
			{
				if(checkedb1[indb1]==0){
				if(player2[indb1][j]=='X')
				{
					flagb1=flagb1*1;
				}
				else flagb1=flagb1*0;}
				else flagb1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkedb2[indb2]==0){
				if(player2[j][indb2]=='X')
				{
					flagb2=flagb2*1;
				}
				else flagb2=flagb2*0;}
				else flagb2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checkedb3==0){
				if(player2[j][j]=='X')
				{
					flagb3=flagb3*1;
				}
				else flagb3=flagb3*0;}
				else flagb3=0;

			}
			 h=4;
			for(int j=0;j<5;j++)
			{
				if(checkedb4==0){
				if(player2[j][h]=='X')
				{
					flagb4=flagb4*1;
				}
				else flagb4=flagb4*0;
				h--;}
				else flagb4=0;

			}
			if(flagb1==1) checkedb1[indb1]=1;
			if(flagb2==1) checkedb2[indb2]=1;
			if(flagb3==1) checkedb3=1;
			if(flagb4==1) checkedb4=1;
			if(flagb1==1||flagb2==1||flagb3==1||flagb4==1) 
				cnt2++;
			cout<<"The current count of "<<name2<<" is "<<cnt2<<endl;

				if(cnt2>=5) {cout<<"Congratulations,"<<name2<<" YOU WIN"; return 0;}}}




















