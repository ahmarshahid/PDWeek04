#include <iostream>
using namespace std;
void flight(string countryname, float price, float discountedprice); 

main()
 
{
 while(true)
 {
  string countryname;
  float price;
  float discountedprice;
  cout << " Enter country name :";
  cin >> countryname;
  cout << " Enter the price :";
  cin >> price;
  flight (countryname, price, discountedprice);
 }

}


void flight(string countryname, float price, float discountedprice)

{

if(countryname == "pakistan")
  {
  discountedprice = price*0.95;
  cout << " The discounted price is :" << discountedprice << endl;
  }
  if(countryname == "ireland")
  {
   discountedprice = price*0.9;
   cout << " The discounted price is :" << discountedprice << endl;
   }
   if(countryname == "india")
 {
  discountedprice = price*0.8;
  cout << " The discounted price is :" << discountedprice <<endl;
 }

 if(countryname == "england")
  {
   discountedprice = price*0.7;
   cout << " The discounted price is :" << discountedprice <<endl;
  }
   if(countryname == "canada")
  {
   discountedprice = price*0.55;
   cout << " The discounted price is :" << discountedprice <<endl;
  }
}
