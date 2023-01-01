#include <iostream>
using namespace std;
void iftrue(string x);
main()
{
 while(true)
 {
  string x;
 cout << " Enter x :";
cin >> x;
iftrue(x);
 }
}
 void iftrue(string x)
{
 if( x == "true")
  {
   cout << "False" <<endl;
  }
  if( x == "false")
   {
    cout << "True" <<endl;
   }
}