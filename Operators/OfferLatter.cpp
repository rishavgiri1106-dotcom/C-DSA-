#include <iostream>
using namespace std ;
int main(){
    int package ;
    cout<< "Enter the package number :" << endl ;
    cin >> package ;

    if (package > 10) 
    cout << "accepted" << endl;
    else
    cout <<"rejected" << endl ;

    return 0 ;
}