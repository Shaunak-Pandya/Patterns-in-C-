#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter size "<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		if(i==0 || i==n-1)
		{
			for(j=0;j<n;j++)
			{
				cout<<"* ";
			}
			cout<<endl;
		}
		else
		{
			for(j=0;j<n;j++)
			{
				if(j==0 || j==n-1)
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
