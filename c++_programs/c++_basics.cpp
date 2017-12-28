#include <iostream>

int main() {
    std::cout << "Hello world, I am ready for C++";
    return 0;
}
 
 
// #include <iostream>

// using namespace std;
// int main()
// {
//     cout << "Hey, writing std:: is pain, ";
//     cout << "change the program so I don't have to write it.";
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     using namespace std;
//     cout<<"int size = "<<sizeof(int)<<"\n";
//     cout<<"short size = "<<sizeof(short)<<"\n";
//     cout<<"long size = "<<sizeof(long)<<"\n";
//     cout<<"char size = "<<sizeof(char)<<"\n";
//     cout<<"float size = "<<sizeof(float)<<"\n";
//     cout<<"double size = "<<sizeof(double)<<"\n";
//     cout<<"bool size = "<<sizeof(bool)<<"\n";
//     return 0;
// }

// #include <iostream>
// #include <iomanip>

// int main()
// {
//     int a = 45;
//     float b = 45.323;
//     double c = 45.5468;
//     int aa = a + 9;
//     float bb = b + 9;
//     double cc = c + 9;
//     int aaa = aa + 9;
//     float bbb = bb + 9;
//     double ccc = cc + 9;

//     std::cout<<"print with set width = 10\n";
//     std::cout<<"Ints"<<std::setw(10);
//     std::cout<<"Floats"<<std::setw(10);
//     std::cout<<"Doubles"<<std::setw(10) << "\n";

//     std::cout<< a;
//     std::cout<< std::setw(12)<< b;
//     std::cout<< std::setw(10)<< c << "\n";    

//     std::cout<< aa;
//     std::cout<< std::setw(12)<< bb;
//     std::cout<< std::setw(10)<< cc << "\n";  

//     std::cout<< aaa;
//     std::cout<< std::setw(12)<< bbb;
//     std::cout<< std::setw(10)<< ccc << "\n\n"; 

//     std::cout<<"print with tabs\n";
//     std::cout<<"Int"<<"\tFloats"<<"\tDoubles\n";
//     std::cout<< aaa<<"\t"<< bbb<<"\t"<< ccc <<"\n"; 

//     return 0;
// }

// #include "main.hpp"

// int main()
// {
//     cout<<"Hello, I use header files!";
//     return 0;
// }

// #include<iostream>
// #include<string>

// int main()
// {
//     std::string name1, address1, phoneNo1;
//     std::string name2, address2, phoneNo2;

//     //get user1 information
//     std::cout<<"User1 what is your name?\n";
//     std::getline(std::cin, name1);
//     std::cout<<"User1 what is your address?\n";
//     std::getline(std::cin, address1);
//     std::cout<<"User1 what is your phone number?\n";
//     std::getline(std::cin, phoneNo1);

//     //get user2 information
//     std::cout<<"User2 what is your name?\n";
//     std::getline(std::cin, name2);
//     std::cout<<"User2 what is your address?\n";
//     std::getline(std::cin, address2);
//     std::cout<<"User2 what is your phone number?\n";
//     std::getline(std::cin, phoneNo2);

//     //print information
//     std::cout<<"\n\n"<<name1<<"\n";
//     std::cout<<"\t\t"<<address1<<"\n";
//     std::cout<<"\t\t"<<phoneNo1<<"\n";

//     std::cout<<"\n\n"<<name2<<"\n";
//     std::cout<<"\t\t"<<address2<<"\n";
//     std::cout<<"\t\t"<<phoneNo2<<"\n";    
//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <sstream>

// int main ()
// {
//   std::string stringLength, stringWidth;
//   float length = 0;
//   float width = 0;
//   float area = 0;

//   std::cout << "Enter the length of the room: ";
//   //get the length as a string
//   std::getline (std::cin,stringLength);
//   //convert to a float
//   std::stringstream(stringLength) >> length;
//   //get the width as a string
//   std::cout << "Enter width: ";
//   std::getline (std::cin,stringWidth);
//   //convert to a float
//   std::stringstream(stringWidth) >> width;
//   area = length * width;
//   std::cout << "\nThe area of the room is: " << area << std::endl;
//   return 0;
// }


// #include "main.hpp"

//     int main ()
//       {
//         float FTemp = 0;
//         float CTemp = 0;

//         cout << "Enter a Farenheit temperature: ";
//         cin>>FTemp;

//         CTemp = (FTemp - 32.0) / (9.0/5.0);
//         cout << "\n"<<FTemp <<" in farenheit = " <<CTemp<<" in Celcius\n";
//         return 0;
//       }

// #include<iostream>
// #include <cmath>

// int main()
// {
//     //Dimension of the cube
//     float cubeSide = 5.4;
//     //Dimension of sphere
//     float sphereRadius = 2.33;
//     //Dimensions of cone
//     float coneRadius = 7.65;
//     float coneHeight = 14;

//     float volCube, volSphere, volCone = 0;

//     //find volume of cube
//     volCube = std::pow(cubeSide, 3);
//     //find volume of sphere
//     volSphere = (4.0/3.0)*M_PI*std::pow(sphereRadius,3);
//     //find volume of cone
//     //M_PI is in the cmath library, it does not need to reference the
//     //std namespace. On the other hand, pow() needs to reference it.
//     volCone = M_PI * std::pow(coneRadius, 2) * (coneHeight/3);

//     std::cout <<"\nVolume of Cube: "<<volCube<<"\n";
//     std::cout <<"\nVolume of Sphere: "<<volSphere<<"\n";
//     std::cout <<"\nVolume of Cone: "<<volCone<<"\n";
//     return 0;
// }


// #include <iostream>
// int main(void)
// {
//     int numerator = 4;
//     float denominator = 5;
//     float answer = 0;

//     answer = numerator / denominator;
//     std::cout<<"answer = "<<answer;
//     return 0;
// }

// int main()
// {
//     int coeff1, coeff2, constant;
//     int exp1, exp2;
//     int y;
//     int x;
//     //Calculate the value of y for a user defined three term polynomial
//     //Get the coefficients, exponents, and the constants
//     std::cout<<"What is the first coefficient?";
//     std::cin>>coeff1;
//     std::cout<<coeff1<<"\n";
//     std::cout<<"What is the exponent of the first term?";
//     std::cin>>exp1;
//     std::cout<<exp1<<"\n";
//     std::cout<<"What is the second coefficient?";
//     std::cin>>coeff2;
//     std::cout<<coeff2<<"\n";
//     std::cout<<"What is the exponent of the second term?";
//     std::cin>>exp2;
//     std::cout<<exp2<<"\n";
//     std::cout<<"What is the constant?";
//     std::cin>>constant;
//     std::cout<<constant<<"\n";
//     //Print the complete equation
//     std::cout<<"The polynomial we are solving is:\n";
//     std::cout<<"\t"<<coeff1<<"*x^"<<exp1<<" + "<<coeff2<<"*x^"<<exp2<<"+ "<<constant;
//     std::cout<<"\nWhat is the value of x?";
//     std::cin>>x;
//     std::cout<<x<<"\n";
//     //Solve the equation with the given x
//     y = coeff1*pow(x,exp1) + coeff2*pow(x,exp2) + constant;    
//     std::cout<<"y = "<<coeff1<<"*"<<x<<"^"<<exp1<<" + "<<coeff2<<"*"<<x<<"^"<<exp2<<"+ "<<constant<<" = "<<y;
//     return 0;
// }

