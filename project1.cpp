#include<iostream>  //calender by developer  jayantnis  in unschool 
using namespace std;
/*Learners are required to prepare of calender that provides the 
 following data: 
 
 1. It display a nicely formatted calendar of every month.
 2. you can find the day by entering the day ,month and year .For
 	example, if you enter day=10,month =03 and year =1991,it gives you the day 
	 'sunday' the day.
	 
 3. you can add the note for a pariticular day.  If the give month has 
 	a note  in,it will display in that day.
	 EX:- 
	 This program show calcnder of
	 a given moth.Enter moth year ...format is mm-yyyy
	 Enter mm-yyyy:06-2014
	 
	 once user Enters a valid month -year and hits Enter key,
	 it should  display the calender of the entered month as shown below:
	 	
	  */ 

//formula
	int dayNumber(int day, int month, int year)
	{
   static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
   year -= month < 3;
   return ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;
	}
	
	string getMonthName(int monthNumber)
	{
   		string months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
   		return (months[monthNumber]);
	}
	
	int numberOfDays (int monthNumber, int year)
	{
   	 switch(monthNumber){
       case 0 :
       case 2 :
       case 4 :
       case 6 :
       case 7 :
       case 9 :
       case 11: return(31);
       break;
      case 1 :
         if (year % 400 == 0 || (year % 4 == 0 && year %100 != 0))
		{    return (29);
         
    	 }     
		  else
            return (28);
      break;
      case 3 :
      case 5 :
      case 8 :
      case 10 : return(30);
      break;
   }
}

void printCalendar(int year)
{	int days;
   
   cout<<"\t\t\t Calendar - Year "<<year;
   int current = dayNumber (1, 1, year);
   for (int i = 0; i < 12; i++){
      days = numberOfDays (i, year);
      cout<<endl<<"\t\t ----X----"<<getMonthName (i).c_str()<<"----X---- \t\t"<<endl;
      cout<<"\nSun  Mon  Tue  Wed  Thu  Fri  Sat \n";
      int k;
      for (k = 0; k < current; k++)
         cout<<"\t";
      for (int j = 1; j <= days; j++)
	  {
         printf("%5d", j);
         if (++k > 6)
		 {
            k = 0;
            cout<<endl;
         }
      }
      if (k)
         cout<<endl;
         current = k;
      }
   return;
}
int main(){
   int year = 2020;
   printCalendar(year);
   return (0);
}
