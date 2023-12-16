#include<iostream>
#include<string>
using namespace std;
int index1=0,index2=0;
class cities;
class adjcities;
cities * carr;
class cities
{
	
public:
	string cityname;
	void  insert()
	{

		cout<<"Enter City"<<endl;
		cin>>cityname;
	}



};
class adjcities
{
public:
	int fare;
	string name;
};
void main()
{
	
		adjcities  x;
		string s1,s2;
	int in;
	carr=new cities[4];
	adjcities adj[4][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			adj[i][j].fare=-1;
		}
	}
	adjcities call;
	int c=0;
	int c1=0;
	do
	{
		cout<<"1 for ADD city \n2 for ADD Adjacent City"<<endl;
		cin>>in;
		switch (in)
		{
		case 1:
			if (c<4)
			{
				carr[c++].insert();
			}
			else
			{
			  cout<<"Full"<<endl;
			}
			break;
		case 2:
		cout<<"Enter City "<<endl;
		cin>>s1;
		cout<<"Enter Adjacent "<<endl;
		cin>>x.name;
		cout<<"Enter Fare"<<endl;
		cin>>x.fare;
		////////////
		for (int i = 0; i < 4; i++)
		{
			if (s1==carr[i].cityname)
			{
				index1=i;
			}
			if (x.name==carr[i].cityname)
			{
				index2=i;
			}
		}
		//////////
		//cout<<"Index 1  "<<index1<<endl;
		//cout<<"Index 2  "<<index2<<endl;

		if (adj[index1][index2].fare==-1)
		{
			adj[index1][index2].name=x.name;
			adj[index1][index2].fare=x.fare;
			
		}
		else
		{
			cout<<"Already Exist"<<endl;
		}
			break;
		case 3:
		cout<<"Enter To City "<<endl;
		cin>>s1;
		cout<<"Enter From City"<<endl;
		cin>>s2;
		for (int i = 0; i < 4; i++)
		{
			if (s1==carr[i].cityname)
			{
				index1=i;
			}
			if (s2==carr[i].cityname)
			{
				index2=i;
			}
		}

		if (adj[index1][index2].fare==-1)
		{
			cout<<"Not Found"<<endl;
		}
		else
		{
			cout<<"City is "<<adj[index1][index2].name<<endl;
			cout<<"Fare is "<<adj[index1][index2].fare<<endl;

		}
		break;
		case 4:

			break;
		}


	} while (in!=4);
	system("pause");
}
