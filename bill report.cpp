#include<iostream>
using namespace std;
main(){
int a,b;
	cout<<"enter units  =";
	cin>>a;
	if(a<=100){
		cout<<"bill is\n"<<a*4;
	
	}
	else{
	
	if(a<200) //a>100 
	{
	a=a-100;
	a=a*5;
	a=a+400;
	cout<<"bill is"<<a;}
	else //a>200 
	{
	
	if(a<500){
	
	a=a-200;
	a=a*6;
	a=a+900;
	
	cout<<"bill is"<<a;}
	else //a>500
	a=a-500;
	a=a*10;
	a=a+2100;
	cout<<"bill is "<<a;
	}
	cout<<"\nthanks ";
}
	           
}
