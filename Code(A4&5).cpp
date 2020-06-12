#include<iostream>
using namespace std;
int main() {
	int num1,num2,num3;
	cout<<" Enter value for first number : ";
	cin>>num1;
	cout<<" Enter value for second number : ";
	cin>>num2;
	cout<<" Enter value for third number : ";
	cin>>num3;
	if (( (num1>0) && (num2>0) && (num3>0) ) && !(num1 == num2 && num2 == num3))
	{

	if( (num1>num2)&& (num1>num3) ) 
	{
		cout<<" First number is greatest:"<<endl<<"which is : "<<num1;
	} else if( (num2>num1)&& (num2>num3) ) 
	{
		cout<<" Second number is greatest"<<endl<<"which is : "<<num2;
	} else if ( (num3>num1)&& (num3>num2) ) 
	{
		cout<<" Third number is greatest"<<endl<<"which is : "<<num3;
	} 
	}
	else
	{
		cout<<"Please enter valid numbers"<<endl <<"Should be Unequal"<<endl;
	}
		
	return 0;
}
