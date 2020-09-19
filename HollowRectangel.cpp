#include<iostream>
using namespace std;
int main()
{
	int i,j,x,y;
	cout<<"Enter length "<<endl;
	cin>>x;
	cout<<"Enter breadth "<<endl;
	cin>>y;
	for(i=0;i<x;i++)
	{
		if(i==0 || i==x-1)
		{
			for(j=0;j<y;j++)
			{
				cout<<"* ";
			}
			cout<<endl;
		}
		else
		{
			for(j=0;j<y;j++)
			{
				if(j==0 || j==y-1)
				{
					cout<<"* ";
				}
				else
				{
					cout<<"  ";
				}
			}
			cout<<endl;
		}
	}
}
