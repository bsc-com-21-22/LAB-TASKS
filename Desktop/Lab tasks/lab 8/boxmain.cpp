//main function for the program
#include <iostream>
#include "Box.h"

using namespace std;
int main () {

    Box Box1;               // Declare Box1 of type box
    Box Box2;               // Declare Box2 of type Box
    Box Box3;               // Declare Box3 of type Box
    double Volume = 0.0;    // Store the Volume of a box here

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    //volume of Box1
    Volume = Box1.GetVolume();
    cout << "Volume of Box1 : " << Volume <<endl;

    
    //volume of Box2
    Volume = Box2.GetVolume();
    cout << "Volume of Box2 : " << Volume <<endl;

    //Add two objects as follows:
    Box3 = Box1 + Box2;

    // volume of Box3
    Volume = Box3.GetVolume();
    cout << "Volume of Box3 : " << Volume << endl;

    return 0;

} 