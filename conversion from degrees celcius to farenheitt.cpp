//program to convert degrees celcius to degrees farenheit
#include<iostream>
using namespace std;
float farenheit(float farenheit); //function prototype
int main()
{
int f;
cout<<"Enter temperature in celcius :";
cin>>f;
float degrees=0.5555*(f-32); //function calling
cout<<"The temperature in farenheit is :"<<degrees;
return 0;	
}
float farenheit(float farenheit) //function declaration
{
	int f;
	float degrees=0.5555*(f-32);
	return farenheit;
}
