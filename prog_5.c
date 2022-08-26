/*Write a C++ program to calculate the volume of a cuboid
volume of cuboid = length x width x heigth*/

#include<iostream>

using namespace std;

int main()
{
    int l, w, h, voulme;
    
    cout<<"Enter length, width and heigth: ";
    cin >> l >> w >> h;
    
    voulme = l*w*h;
    cout <<"volume of cuboid is: "<< voulme << endl;
    
    return 0;
}
