#include<iostream>//antivirus please off the your system frist attemp attack in system oppi.schuduler
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

void ass();
//void logic(int f);//protocal decalaraction
void swap(int i,int p,int pi);//producet acces
	 
 int n,a/*Odered number wait items of food */;//'n'golobal declarations the format the unvivarsale
int c,f/*two logic*/;
void bf();
void swap(int i, int p,int pi)
{ int a;
		cout<<i<<"\n"<<p<<"\n"<<pi<<"\n"<<endl;
		i=a;
		a=p*pi;
		cout<<"Your Amount pay: "<<a<<endl;		
}


							 
class Food
{
	 public :
	 	
		void ass()
		{								
			cout<<"\n\v\a~~~~~~~~~~~~~FOOD OS SYSTEM~~~~~~~~~~\v\a\n Simple Food Ordering System is based on \a\n the concept of Ordering and serving food in a cafe:- \n1.Odered""\n2.serve OR Display""\n3.Exit the program"<<endl;
		    cin>>n;
			cout<<"\n your Odered list "<<endl;
						
						switch(n)
						{//adjusting swtching case applied
						case 1:
						{	cout<<"\n`Item~code`.......`Describle`................`Size(Half/Full)`.......`Price";
							cout<<"\n[11].............Burger...................200/100gm.................30,60";
							cout<<"\n[12].............Chicken Pizza...........12/14/16inch...............40,70";
					        cout<<"\n[13].............Fried Chicken............1/4/10 pes................50,80";
				        	cout<<"\n[14].............Noodels..................half/full.................60,90";
				        	cout<<"\n[15].............Pasta....................half/full.................70,80";
					        cout<<"\n[16].............Coffe....................250/500mg.................35,60";
							break;
							
						}
						case 2:
							{
							void swap(int i,int p,int pi);	
							break;		
							}
							 	
						case 3:
							default :
							cout<<"Exit program";				
						}
		    		
		}//end funciton
	};


 int main()//main driver or controller
{ int i,p,pi;
    Food F;
    F.ass();//calling classes//with cell value enter user 
    
	for(a=0;a<=6;a++)
	{
	cout<<"\nItem~code ,price ,pisess :- "<<endl;
	cin>>i>>p>>pi;//three value passing 
    swap(i,p,pi);	
     if(i==0)
     {
    	cout<<"Invaild number Entery";
	 }
	}
 getch();
 return 0;   
}
