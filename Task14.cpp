#include <iostream>
using namespace std;
void printmenu();
void calculateaggregate(string name, float matricmarks, float intermarks, float ecatmarks);
void comparestudent ( string , int , string, int);
 

main ()
{
  while(true)
 {
   string name;
   float matricmarks;
   float intermarks;
   float ecatmarks;
   int ecatmarksstudent1;
   int ecatmarksstudent2;
   string name2;
   printmenu();
   int choice;
   cout << "Enter choice :"<<endl;
   cin >> choice;
   if(choice == 1)
  {
   cout << "Enter name :"<<endl;
   cin >> name;
   cout << "Enter matric marks :"<<endl;
   cin >> matricmarks;
   cout << "Enter inter marks :"<<endl;
   cin >> intermarks;
   cout << "Enter ecat marks :"<<endl;
   cin >> ecatmarks;
   calculateaggregate(name, matricmarks, intermarks, ecatmarks);
   }
   if(choice== 2)
    {
      cout << "Enter name :"<<endl;
      cin >> name;
      cout << "Enter ecat marks :"<<endl;
      cin >>   ecatmarksstudent1;
      cout << "Enter name 2 :"<<endl;
      cin >>   name2;
      cout << "Enter ecat marks :"<<endl;
      cin >> ecatmarksstudent2;
      comparestudent (name ,ecatmarksstudent1 ,name2 ,ecatmarksstudent2);
     }
  }

}
 void printmenu()
 {
  cout << "*************************************"<<endl;
  cout << "*   UNIVERSITY                      *"<<endl;
  cout << "*                                   *"<<endl;
  cout << "*             ADMISSION             *"<<endl;
  cout << "*                                   *"<<endl;
  cout << "*   MANAGEMENT                      *"<<endl;
  cout << "*                                   *"<<endl;
  cout << "*             SYSTEM                *"<<endl;
  cout << "*************************************"<<endl;
  cout << "Press 1 to calculate aggreagte:"<<endl;
  cout << "Press 2 to compare student :"<<endl;
 }

void calculateaggregate(string name, float matricmarks, float intermarks, float ecatmarks)
{
 float aggregate;
 aggregate = ( matricmarks/1100)*30/100;
 aggregate = aggregate + ( intermarks/550)*30/100;
 aggregate = aggregate +( ecatmarks/400)*40/100;
 aggregate = aggregate*100;
 cout << " Aggregate is equal to :"<< aggregate <<"%" <<endl;
}

void comparestudent(string name, int ecatmarksstudent1, string name2, int ecatmarksstudent2)
{
  if(ecatmarksstudent1 > ecatmarksstudent2)
  {
   cout <<name<< " has roll no : 1"<<endl;
  }
  if(ecatmarksstudent1 < ecatmarksstudent2)
  {
   cout <<name2<< " has roll no: 1"<<endl;
   }

}





 