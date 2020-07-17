#include <iostream>


using namespace std;

int main()
{
	
	long long int n;
	cin>>n;
	
	long long int a[n];
	
	
	for(int i=0;i<n;i++){
		
		
		cin>>a[i];
		
		
	}
	
/*	int size= sizeof(a)/sizeof(a[0]);*/
	long long int num=0,index;
	
	for(int i=0;i<n;i++){
		
		
		if(a[i]>num){
			
			num=a[i];
			index=i;
		}
		
		
		
	}
	
//	a[index]=NULL;
	
	

	
		long long int num2=0,index2;
	
	for(int i=0;i<n;i++){
		
		
		if(a[index]!=a[i] && a[i]>num2){
			
			num2=a[i];
			index2=i;
		}
		
		
		
	}
	
	cout<<num*num2;
	






    return 0;
}

