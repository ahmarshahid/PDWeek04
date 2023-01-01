#include <iostream>
using namespace std;
void price( float redroses, float whiteroses, float tulips);

main()
{
    system("cls");
    float redroses;
    float whiteroses;
    float tulips;
    float total;
    float discount;
    while(true)
   {
    cout << "Enter the no of redroses :"<<endl;
    cin  >>  redroses;
    cout << "Enter the no of whiteroses :"<<endl;
    cin  >>  whiteroses;
    cout << "Enter the no of tulips :"<<endl;
    cin  >>  tulips;
    price(redroses, whiteroses, tulips);
   }
}

void price( float redroses, float whiteroses, float tulips)
{
   float total;
   float discount;
   total = redroses*2 + whiteroses*4.10 + tulips*2.50;
   cout << "total price is : "<< total <<endl;
   if(total > 200)
  {
   discount = total - (total*0.2);
   cout << "Amount After Discount :"<< discount << endl;
  }
}

