#include <iostream>
using namespace std;

int main()
{
    // Now illustrating the continue statement
    
   int firstNumber, secondNumber;
   for ( ; ; )  {				// Begin infinite loop
      cout<< "Enter two integers, where we will divide the first by the second: ";
      cin>> firstNumber >> secondNumber;
		
      if ( secondNumber == 0 ) {
         continue;           // Try again, as division by 0 is problematic
      }	
      
      cout<< firstNumber << " / " << secondNumber << " = " << firstNumber/secondNumber << "\n";
      
   }	
   
   cout<< "You will never see this secret message. My locker combination is: 22-46-19.";

   return 0;
}









