/*Write a C++ program to add all the numbers of an array of size 10.*/

#include<iostream>

using namespace std;

int main()
{
    int arry[10], sum = 0;
    
    cout<<"Enter all elemnts in array: ";
    for(int i = 0; i<10; i++)
        cin >> arry[i];
    
    for(int i = 0; i<10; i++)
        sum = sum + arry[i];
    
    cout << "sum of all number in array is: " << sum << endl;
    
    return 0;
}
