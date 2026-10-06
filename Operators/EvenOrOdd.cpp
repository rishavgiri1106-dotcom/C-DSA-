#include <iostream>
using namespace std;
int main(){
    int a,b ;
    cout <<"Enter your first number:" << endl;
    cin >> a ;
    cout << "Enter your second number:" << endl;
    cin >> b ;

    if ((a+b)%2==0){
        cout << "sum of two number is even" << endl;
    }
    else{
        cout << "sum of two number is odd" << endl;
    }
    return 0 ;
}
