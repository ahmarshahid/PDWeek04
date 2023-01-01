#include <iostream>
using namespace std;
void estimate(int speed);


main()
{
  while(true)
  {
  int speed;
  cout << "The Speed is : ";
  cin >> speed;
  estimate (speed);
  }
} 
 void estimate (int speed)
  {
   if(speed <= 100)
    {
     cout << "Perfect! you're going good" <<endl;
    }
     if(speed > 100)
    {
     cout << " Halt....YOU WILL BE CHALLENGED!!!" <<endl;
    }
  }
