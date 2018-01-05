/*Goal: Practice array manipulation in C++. 
**The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. 

#include <iostream>
#include <stdio.h>
using namespace std;

#include <iomanip>
using std::setw;

int main()
{
    int userInput[40],integers;
    for(int i = 0; i<=40; i++)
    {
     cin>> integers;
     userInput[i] = integers;
     
    
    }
    
    for(int j = 0; j <= 40; j++){
    cout<< setw( 13 ) << j <<setw(13)<< userInput[j]<<endl;
    }
    
    
    return 0;
}
