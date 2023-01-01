#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy (int, int);
void maze();
void Pac(int x, int y);

main()
 {
   system("cls");
   maze();
   int x = 5;
   int y = 5;
   while(true)
 {
   Pac(x, y);
   if(x < 25)
    {
      x= x + 1;
    } 

    if(x == 20)
    {
     gotoxy(x-1, y);
     cout << " ";
     x = 3;
    }
  }
   
  }
   void maze()
 {
   cout << "###############################"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "###############################"<<endl;
 }

  void Pac(int x, int y )
  {
    gotoxy(x-1, y);
    cout << " ";
    gotoxy(x, y);
    cout << "P";
    Sleep(200);
  }
void gotoxy (int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}