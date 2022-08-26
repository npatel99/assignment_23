/*Write a C++ program to calculate the area of a circle*/

#include<iostream>
#define PI 3.14

using namespace std;

int main()
{
    int radius;
    float area;
    cout<<"Enter radius of circle: ";
    cin >> radius;
    
    area = PI*radius*radius;
    
    cout <<"area of circle is: "<< area << endl;
    
    return 0;
}
