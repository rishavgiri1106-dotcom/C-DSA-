#include <iostream>
using namespace std;
int main(){
    int count;
    cout<<"Enter your number: " << endl;
    cin >> count;
    
    while (count<=5) {
        cout << count << " " << endl;
        count++;
    } 
    return 0 ;
}