#include <iostream>
using namespace std;
void playtime (int holidays);

main()
{
  system("cls");
  int holidays;

  while(true)
 {
  cout << " Enter the no of holidays :"<<endl;
  cin >> holidays;
  playtime(holidays);
 }

}
 
 void playtime(int holidays)
{
 int playtime;
 int difference;
 int hours;
 int minutes;
 playtime  = (365-holidays)*63 + holidays*127;
 difference = 30000 - playtime;
 if( difference > 0)
   {
   hours = difference / 60;
   minutes = difference % 60;
   cout << "Tom cat sleeps well" << endl;
   cout << hours << "hours and " << minutes << "minutes less for play" << endl;
   }
  if(difference < 0)
   {
   difference = (-1) * difference;
   hours = difference / 60;
   minutes = difference % 60;
   cout << "Tom cat will run away" << endl;
   cout << hours << "hours and " << minutes << "minutes for play" <<endl;
   }
}




