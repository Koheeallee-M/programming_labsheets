/*The Konditorei coffee shop sells coffee at Rs 25.00 a cup plus cost of delivery. For delivery, there is a
fixed initial cost of Rs 15.00 and an additional cost Rs2.50 per cup . Eg. For one cup the delivery cost
is Rs17.50, for 2 cups it is Rs 20.00, while for 10 cups it is Rs 40.00. Write a program that calculates
the cost of an order. (Note: Input should be no. of cups ordered)*/
#include <iostream>

using namespace std;

int main()
{
   int cups;
   float total;

   cout<<("Enter the number of cups you've ordered")<<endl;
   cin>>cups;

   total = (25.00*cups)+(15.00+(2.50*cups));
   cout<<("Your total is: ")<<total;

   return 0;
}
