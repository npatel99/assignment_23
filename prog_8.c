/*Write a C++ program to swap values of two int variables without using third variable*/

#include<iostream>

using namespace std;

int main()
{
    int n1, n2;
    
    cout<<"Enter two numbers: ";
    cin >> n1 >> n2;
    
    cout << "Before swap first number: " << n1 << " second number: " << n2 << endl;
    
    n1 = n1^n2;
    n2 = n1^n2;
    n1 = n1^n2;
    
    cout << "After swaped first number: " << n1 << " second number: " << n2 << endl;
    
    return 0;
}
