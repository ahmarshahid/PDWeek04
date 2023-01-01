#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void pac(int, int);
void pactwo(int, int);
void gotoxy(int, int);

main()
 {
   int direction;
   direction = 0;
   system("cls");
   maze();
   int x;
    x=5;
   int y;
    y=2;
   while(true)
 {
   if (direction == 0)
   {
   y = y + 1;
   pac(x, y);
   }

   if (y == 10)
   { 
      direction = 1;
   }
   if (direction == 1)
   {
     y = y - 1;
     pactwo(x, y);
   }
     pactwo(x, y);
     if (y == 2)
   {
     direction = 0;
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
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "#                             #"<<endl;
   cout << "###############################"<<endl;
 }

  void pac(int x, int y)
  {
    gotoxy(x, y-1);
    cout << " ";
    gotoxy(x, y);
    cout << "P";
    Sleep(100);
  }

  void pactwo(int x, int y)
  {
    gotoxy(x, y+1);
    cout << " ";
    gotoxy(x, y);
    cout << "P";
    Sleep(100);
  }

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}