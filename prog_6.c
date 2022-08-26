/*Write a C++ program to calculate an average of 3 numbers
average = (num1 + num2 + num3)/3 */

#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3;
    float avg;
    
    cout<<"Enter all three numbers: ";
    cin >> n1 >> n2 >> n3;
    
    avg = (n1+n2+n3)/3;
    cout <<"average of three number is: "<< avg << endl;
    
    return 0;
}
