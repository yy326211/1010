#include<iostream>
using namespace std;

int main()
{
	int A[1001]={0},n;
    A[0]=A[1]=1;
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<=i/2;j++)
            A[i]=A[i]+A[j];    
    }
        cout<<A[n]<<endl;
	system("pause");
	return 0;
}