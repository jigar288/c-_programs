#include <iostream>
using namespace std;

int main()
{
      // using switch statement is an alternative to lots of is statements
      
    int menuOption, planetWeight, earthWeight;
    
    cout<< "what is your weight? How fat are you?";
    cin>> earthWeight;
    
    cout<< "what platnet do you want to convert to?";
    cin>> menuOption;
  
 
    switch (menuOption) {
        case 1: planetWeight = earthWeight * 0.39;    // Mercury
             break;
        case 2: planetWeight = earthWeight * 0.91;    // Venus
             break;		
        case 3: planetWeight = earthWeight * 0.38;    // Mars
             break;
        default: planetWeight = earthWeight - 1;        // Earthweight - 1
            // People like to think they're losing weight (marketing)
            break;
    }
    cout << "Your new weight is " << planetWeight; "\n";

   return 0;
}









