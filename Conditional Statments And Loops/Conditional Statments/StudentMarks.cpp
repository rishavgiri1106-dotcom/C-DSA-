#include <iostream>
using namespace std;
int main(){
    int marks ;
    cout << "Enter your marks :" << endl ;
    cin >> marks ;
    if (marks>=90) {
        cout << "Your grade is A" << endl ;
    }else if (marks>=80 && marks<90) {
        cout << "Your grade is B " << endl ;
    }else {
        cout << "Your grade is C" << endl ;
    }
    return 0 ;
}