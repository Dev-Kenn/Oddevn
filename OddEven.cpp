#include <iostream>
#include <conio.h>
using namespace std;

int main() {
    int i, number;
    int oddSum=0, evenSum=0;

    cout << "Enter the value of number: ";
    cin >> number;
    for(i=1; i <= number; i++){
        if(i%2 == 0)
            evenSum = evenSum + i;
        else
            oddSum = oddSum + i;
    }
    cout<<"Sum of all odd numbers are: "<< oddSum;
    cout<<"\nSum of all even numbers are: "<<evenSum;

    getch();
    return 0;
}