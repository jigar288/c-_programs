#include <iostream>
using namespace std;

void beer1()
{  
  cout << " bottles of beer ";
}

void beer2()
{  
  cout << " on the wall";
}

int getNumber()
{  
  int x;
  cout << "Please enter the initial number of bottles:";
  cin >> x;
  return (x);
}

main()
{
   int n;
   
   // Prompt for starting number of bottles

   for (n = getNumber(); n>0; n--) {
      cout << n;
      beer1(); beer2(); cout << ", ";
      cout << n; beer1(); cout << "\n";
      cout << "    Take one down, pass it around, "; 
      cout << n-1; beer1(); beer2(); cout<< "\n"; 
   }
}