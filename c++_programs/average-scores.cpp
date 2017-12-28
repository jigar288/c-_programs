#include <iostream>
using namespace std;

void GetScores(int &sum, int &count)
{
   int theScore;

   cout << "Enter a score: ";
   cin >> theScore;

   if (theScore == -1) {
      cout << "\n The scores are: ";
      return;
   }
   else {
      sum+= theScore;
      count++;
      GetScores( sum, count);
      cout << theScore;
   } 
}


void int main()
{
   int sum=0;
   int count=0;
  
   cout << "Enter scores, then -1 when done. \n\n";
   GetScores(sum, count);

   // now display the answer
   cout << "\n Average of scores is: " << (float)sum/count) << "\n\n";
   return 0;
   
}





