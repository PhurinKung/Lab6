#include<iostream>
using namespace std;

int main(){
    int number = 3;
    int odd = 0, even = 0;
    while(number!=0){
        cout << "Enter an integer: ";
        cin >> number;
        if(number%2==0) even++;
        else odd++;
    }
    cout << "#Even numbers = " << even-1 << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
