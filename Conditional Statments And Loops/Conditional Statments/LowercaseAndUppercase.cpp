#include <iostream>
using namespace std;
int main(){
    char ch ;
    cout<<"Enter the character :" << endl;
    cin>> ch ;
    if (ch>='a' && ch<='z') {
        cout << "The given character is in Lowercase" << endl ;
    }else{
        cout << "The given character is in Uppercase" << endl ;
    }
    return 0 ; 

}