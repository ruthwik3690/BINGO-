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
	string name1;
	int choice,checked1[5]={0},checked2[5]={0},checked3=0,checked4=0,fl1=1,fl2=1;
	int cnt1=0,cnt2=0,flag1=1,flag2=1,flag3=1,flag4=1,ind1,ind2;
	cout<<"Computer: Can i know your name please?"<<endl;
	cin>>name1;
	//cin>>name2;
		int a[25]={0};
			int player1[5][5]={0};
cout<<endl;
cout<<"Ok,"<<name1<<" Enter 1 if you want to generate numbers randomly"<<endl;
cout<<"Enter 2 if you want to enter numbers manually"<<endl;
cin>>choice;
if(choice==1)
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
	cout<<"Your numbers are:";
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

	while(cnt1<5)
	{
		flag1=1,flag2=1,flag3=1,flag4=1;
		int no1;
		int no2;
		cout<<"Enter a number to be striken: ";
		cin>>no1;
		cout<<endl;
		if(no1>25) cout<<"The entered number doesn't exist.."<<endl<<"Enter a number between 1 to 25"<<endl;
//no1 starts here
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]==no1)
				{
					player1[i][j]='X';
					ind1=i;
					ind2=j;
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
				if(checked1[ind1]==0){
				if(player1[ind1][j]=='X')
				{
					flag1=flag1*1;
				}
				else flag1=flag1*0;}
				else flag1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checked2[ind2]==0){
				if(player1[j][ind2]=='X')
				{
					flag2=flag2*1;
				}
				else flag2=flag2*0;}
				else flag2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checked3==0){
				if(player1[j][j]=='X')
				{
					flag3=flag3*1;
				}
				else flag3=flag3*0;}
				else flag3=0;

			}
			int h=4;
			for(int j=0;j<5;j++)
			{
				if(checked4==0){
				if(player1[j][h]=='X')
				{
					flag4=flag4*1;
				}
				else flag4=flag4*0;
				h--;}
				else flag4=0;

			}
			if(flag1==1) checked1[ind1]=1;
			if(flag2==1) checked2[ind2]=1;
			if(flag3==1) checked3=1;
			if(flag4==1) checked4=1;
			if(flag1==1||flag2==1||flag3==1||flag4==1) 
				cnt1++;
			cout<<"The current count is "<<cnt1<<endl;

				if(cnt1>=5) {cout<<"Congratulations,"<<name1<<" YOU WIN"; return 0;}
//no1 ends here.
//no2 starts here.
		cout<<"Enter a number to be striken: ";				
			cin>>no2;
			cout<<endl;
			if(no2>25) cout<<"The entered number doesn't exist.."<<endl<<"Enter a number between 1 to 25"<<endl;
			cout<<endl;
		 flag1=1,flag2=1,flag3=1,flag3=1;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(player1[i][j]==no2)
				{
					player1[i][j]='X';
					ind1=i;
					ind2=j;
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
				if(checked1[ind1]==0){
				if(player1[ind1][j]=='X')
				{
					flag1=flag1*1;
				}
				else flag1=flag1*0;}
				else flag1=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checked2[ind2]==0){
				if(player1[j][ind2]=='X')
				{
					flag2=flag2*1;
				}
				else flag2=flag2*0;}
				else flag2=0;

			}
			for(int j=0;j<5;j++)
			{
				if(checked3==0){

				if(player1[j][j]=='X')
				{
					flag3=flag3*1;
				}
				else flag3=flag3*0;}
				else flag3=0;
			}
			 h=4;
			for(int j=0;j<5;j++)
			{
				if(checked4==0){
				if(player1[j][h]=='X')
				{
					flag4=flag4*1;
				}
				else flag4=flag4*0;
				h--;}
				else flag4=0;

			}
			if(flag1==1) checked1[ind1]=1;
			if(flag2==1) checked2[ind2]=1;
			if(flag3==1) checked3=1;
			if(flag4==1) checked4=1;



			if(flag1==1||flag2==1||flag3==1||flag4==1) 
				cnt1++;

//no2 ends here.
							cout<<"The current count is "<<cnt1<<endl;
									if(cnt1>=5) {cout<<"Congratulations,"<<name1<<" YOU WIN"; return 0;}


	}
} 	 	 	 	