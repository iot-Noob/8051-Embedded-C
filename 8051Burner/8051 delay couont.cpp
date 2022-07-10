#include<iostream>
#include<stdio.h> 
#include<conio.h> 
#include<string.h> 
#include <cmath>
using namespace std;
double  f,cp,cf,Delay,dhx;

double time;


void hex_convert(int dec_num) {
 int  r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

		
        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
        cout<<"Value of TH= 0X"<<hexdec_num[0]<<hexdec_num[1]<<"\n\n"<<"Value of TL= 0X"<<hexdec_num[2]<<hexdec_num[3]; 	
 
}

void calculate() {
f=cf/12;	//measure freq of occilator
cp=1/f;	//calcualte 1 pulse of clock
Delay=time/cp; //calculate delay in raw
dhx=65536-Delay; // decimal value for TH0 AND TL0
cout<<endl<<"Val of TH and TL are as follow\n"<<endl;
 hex_convert(dhx);
 cout<<endl<<endl;	
}

bool chk_intiger(string checkint) {
  int i,count;
    
  for (i = 0; i < checkint.length(); i++) 
{
        if (isdigit(checkint[i]) == false) 
  {
  count=1; //not a digit
 
  }
  else
  count=0; //is a digit
     
 } if(count==0)
      return true;
  
      else
      return false;   
}
string n,temp;

int main() {
while(n!="n") {
system("cls");	

cout<<"Enter clock frequancy: ";
cin>>cf;
	
cout<<"enter time in ms: ";
cin>>time;
 
calculate();	

 cout<<"\nEnter y to continue: ";
 cin>>n;	

}
 
return 0;	
}



