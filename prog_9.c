/*Write a C++ program to find the maximum of two numbers*/

#include<iostream>

using namespace std;

int main()
{
    int n1, n2;
    
    cout<<"Enter two numbers: ";
    cin >> n1 >> n2;
    
    int max = (n1>n2) ? n1 : n2;
    
    cout << "Maximum number is: " << max << endl;
    
    return 0;
}
