#include <iostream>
using namespace std;
void equal (int , int);

main()
{
   int x;
   int y;
 while(true)
 {
   
   cout << " Enter first num :"<<endl;
   cin >> x;
   cout << " Enter second num :"<<endl;
   cin >> y;
   equal ( x, y);
 }
}
void equal (int x, int y)
{
 if( x == y)
 {
   cout << " Equal "<<endl;
 }
  if ( x != y )
 {
   cout << " not equal "<<endl;
 }
}