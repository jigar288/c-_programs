/*Find the min and max and average of 15 numbters that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
SAMPLE_INPUTS: 14 23 88 97 60 54 33 26 100 97 55 63 89 78 69
**HINT: you will need to use scanf for input text.
*/
#include <iostream>
using namespace std;

int maxnumber=0,fakeminnumber,avg,counter=0,minnumber;

int main(){
    cin>> minnumber;
    avg += minnumber;
    
    
    while (counter<14){
        cin>>fakeminnumber;
        counter+=1;
                
        if (fakeminnumber < minnumber) {
            minnumber = fakeminnumber;
        }
        
        if (fakeminnumber > maxnumber) {
            maxnumber = fakeminnumber;
        }
        // else{
        //     max = fakeminnumber;
            
        // }
        avg += fakeminnumber;
        
    }
    
    cout<< "this is the min number:"<< minnumber<<endl;
    cout<< "this is the max number:"<< maxnumber<<endl;
    cout<< "this is the avg number:"<< avg/15;
    
    
}
