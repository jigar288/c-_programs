#include <iostream>
using namespace std;

int main()
{

   // first illustrating the use of break
   char menuChoice;
   for ( ; ; )  {				// Begin infinite loop
      cout<< "Enter menu choice between 1 & 5: ";
      cin >> menuChoice;
		
      if ( (menuChoice >= '1') && (menuChoice <= '5') )
         break;				// Exit this infinite loop
	
      cout<< "Sorry, that was invalid. ";
   }	
   cout<< "Good job.  You selected a valid option. You get an A.\n";


   return 0;
}









