#include <iostream>
using namespace std;

int main()
{
   int no_[5];
   cout << "Enter elements:"<<endl;

   for(int i=0; i<5; ++i)
      cin>>no_[i];

   cout << "You entered: ";
   for(int i=0; i<5; ++i)
      cout <<endl <<*(no_+i);

   return 0;
}
